// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "DES203_ProjectCharacter.h"
#include "UObject/ConstructorHelpers.h"
#include "Camera/CameraComponent.h"
#include "Components/DecalComponent.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/PlayerController.h"
#include "GameFramework/SpringArmComponent.h"
#include "Components/SphereComponent.h"
#include "HeadMountedDisplayFunctionLibrary.h"
#include "Materials/Material.h"
#include "Interactable.h"
#include "Pickup.h"
#include "RangedWeapon.h"
#include "Engine/World.h"
#include "Engine/EngineTypes.h"
#include "Engine/CollisionProfile.h"

ADES203_ProjectCharacter::ADES203_ProjectCharacter()
{
	// Set size for player capsule
	GetCapsuleComponent()->InitCapsuleSize(42.f, 96.0f);
	InteractSphereSize = 150.0f;

	InteractSphere = CreateDefaultSubobject<USphereComponent>(TEXT("InteractSphere"));
	InteractSphere->InitSphereRadius(InteractSphereSize);
	InteractSphere->SetupAttachment(RootComponent);

	// Don't rotate character to camera direction
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

	// Configure character movement
	GetCharacterMovement()->bOrientRotationToMovement = false;;

	// Create a camera boom...
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->SetUsingAbsoluteRotation(true); // Don't want arm to rotate when character does
	CameraBoom->TargetArmLength = 800.f;
	CameraBoom->SetRelativeRotation(FRotator(-60.f, 0.f, 0.f));
	CameraBoom->bDoCollisionTest = false; // Don't want to pull camera in when it collides with level

	// Create a camera...
	TopDownCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("TopDownCamera"));
	TopDownCameraComponent->SetupAttachment(CameraBoom, USpringArmComponent::SocketName);
	TopDownCameraComponent->bUsePawnControlRotation = false; // Camera does not rotate relative to arm

	// Create a decal in the world to show the cursor's location
	/* NOT USING THE CURSOR TO WORLD DECAL, NOT DELETING IN CASE WE DICEIDE TO ADD AIMING SYSTEM
	CursorToWorld = CreateDefaultSubobject<UDecalComponent>("CursorToWorld");
	CursorToWorld->SetupAttachment(RootComponent);
	static ConstructorHelpers::FObjectFinder<UMaterial> DecalMaterialAsset(TEXT("Material'/Game/TopDownCPP/Blueprints/M_Cursor_Decal.M_Cursor_Decal'"));
	if (DecalMaterialAsset.Succeeded())
	{
		CursorToWorld->SetDecalMaterial(DecalMaterialAsset.Object);
	}
	CursorToWorld->DecalSize = FVector(16.0f, 32.0f, 32.0f);
	CursorToWorld->SetRelativeRotation(FRotator(90.0f, 0.0f, 0.0f).Quaternion());
	*/

	// Activate ticking in order to update the cursor every frame.
	PrimaryActorTick.bCanEverTick = true;
	PrimaryActorTick.bStartWithTickEnabled = true;

	InteractSphere->OnComponentBeginOverlap.AddDynamic(this, &ADES203_ProjectCharacter::BeginOverlap);
	InteractSphere->OnComponentEndOverlap.AddDynamic(this, &ADES203_ProjectCharacter::EndOverlap);

	MainWeapon = CreateDefaultSubobject<ARangedWeapon>(TEXT("MainWeapon"));
	WeaponIndex = 0;
}

void ADES203_ProjectCharacter::BeginPlay()
{
	Super::BeginPlay();

	Inventory.SetNum(10);
	EquippedItems.SetNum(3);
	EquippedWeapons.SetNum(3);
	CurrentInteractable = nullptr;
}

void ADES203_ProjectCharacter::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);

	/* NOT USING THE CURSOR TO WORLD DECAL, NOT DELETING IN CASE WE DICEIDE TO ADD AIMING SYSTEM
	if (CursorToWorld != nullptr)
	{
		if (APlayerController* PC = Cast<APlayerController>(GetController()))
		{
			FHitResult TraceHitResult;
			PC->GetHitResultUnderCursor(ECC_Visibility, true, TraceHitResult);
			FVector CursorFV = TraceHitResult.ImpactNormal;
			FRotator CursorR = CursorFV.Rotation();
			CursorToWorld->SetWorldLocation(TraceHitResult.Location);
			CursorToWorld->SetWorldRotation(CursorR);
		}

	}
	*/
}

void ADES203_ProjectCharacter::UpdateGold(int32 Amount)
{
	Gold += Amount;
}

bool ADES203_ProjectCharacter::AddItemToInventory(APickup* Item)
{
	if ( Item != NULL)
	{
		const int32 AvailableSlot = Inventory.Find(nullptr); // Finds the first empty  slot

			if (AvailableSlot != INDEX_NONE)
			{
				Inventory[AvailableSlot] = Item;
				return true;
			}
			else
			{
				GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("You can't carry any more items."));
				return false;
			}
	}
	else return false;
}

UTexture2D* ADES203_ProjectCharacter::GetThumbnailAtInventorySlot(int32 Slot)
{
	if (Inventory[Slot] != NULL)
	{
		return Inventory[Slot]->PickupThumbnail;
	}
	else return nullptr;
}

FString ADES203_ProjectCharacter::GetItemNameAtInventorySlot(int32 Slot)
{
	if (Inventory[Slot] != NULL)
	{
		return Inventory[Slot]->itemName;
	}
	return FString("None");
}

void ADES203_ProjectCharacter::UseItemAtInventorySlot(int32 Slot)
{

	if (Inventory[Slot] != NULL)
	{
		Inventory[Slot]->Use_Implementation();
		//deletes item from the inventory once used
		//Inventory[Slot] = NULL;
	}

}

/*
Put the weapon in the @Slot at the beginning of the equipped weapons array, and moves the rest, kicking the last one
*/
void ADES203_ProjectCharacter::EquipWeapon(int32 Slot)
{
	EquippedWeapons[2] = EquippedWeapons[1];
	EquippedWeapons[1] = EquippedWeapons[0];
	EquippedWeapons[0] = Inventory[Slot];
	Inventory[Slot] = NULL;
}

/*
games crashes on switching to a nullptr value 
*/
void ADES203_ProjectCharacter::NextWeapon()
{
	switch (WeaponIndex)
	{
	case 0:
		if (MainWeapon != nullptr)
		{
			MainWeapon->OnPickedUp();
		}
		if (EquippedWeapons[1])
		{
			WeaponIndex = 1;
			EquippedWeapons[WeaponIndex]->Use();
		}
			
		break;

	case 1:
		if (MainWeapon != nullptr)
		{
			MainWeapon->OnPickedUp();
		}
		if (EquippedWeapons[2])
		{
			WeaponIndex = 2;
			EquippedWeapons[WeaponIndex]->Use();
		}
		else if (EquippedWeapons[0])
		{
			WeaponIndex = 0;
			EquippedWeapons[WeaponIndex]->Use();
		}
		break;

	case 2:
		if (MainWeapon != nullptr)
		{
			MainWeapon->OnPickedUp();
		}
		if (EquippedWeapons[0])
		{
			WeaponIndex = 0;
			EquippedWeapons[WeaponIndex]->Use();
		}
		else if (EquippedWeapons[1])
		{
			WeaponIndex = 1;
			EquippedWeapons[WeaponIndex]->Use();
		}
		break;
	
	default:
		break;
	}
}

void ADES203_ProjectCharacter::ToggleInventory()
{

	// toggle the inventory UI
}

void ADES203_ProjectCharacter::Interact()
{
	if (CurrentInteractable != nullptr)
	{
		CurrentInteractable->Interact_Implementation();
	}
}

void ADES203_ProjectCharacter::Shoot()
{
	unimplemented();
}

void ADES203_ProjectCharacter::MoveForward(float Axis)
{
	FVector ForwardVector = GetActorForwardVector();
	AddMovementInput(FVector(1,0,0), Axis);
}

void ADES203_ProjectCharacter::MoveRight(float Axis)
{
	FVector RightVector = GetActorRightVector();
	AddMovementInput(FVector(0,1,0), Axis);
}

void ADES203_ProjectCharacter::BeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if ((CurrentInteractable = Cast<AInteractable>(OtherActor)) != NULL)
	{
		HelpText = CurrentInteractable->HelpText;
		GLog->Log(HelpText);
	}
}

void ADES203_ProjectCharacter::EndOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	if (CurrentInteractable == Cast<AInteractable>(OtherActor))
	{
		CurrentInteractable = nullptr;
		HelpText = FString("");
	}
}
