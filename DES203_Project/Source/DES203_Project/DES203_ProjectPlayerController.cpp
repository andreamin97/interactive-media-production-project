// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "DES203_ProjectPlayerController.h"
#include "Blueprint/AIBlueprintHelperLibrary.h"
#include "Runtime/Engine/Classes/Components/DecalComponent.h"
#include "HeadMountedDisplayFunctionLibrary.h"
#include "DES203_ProjectCharacter.h"
#include "Kismet/GameplayStatics.h"
#include "Math/UnrealMathUtility.h"
#include "Kismet/KismetMathLibrary.h"
#include "DrawDebugHelpers.h"
#include "RangedWeapon.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Engine/World.h"

ADES203_ProjectPlayerController::ADES203_ProjectPlayerController()
{
	bShowMouseCursor = true;
	DefaultMouseCursor = EMouseCursor::Crosshairs;

	bCanShoot = true;
	AttackSpeed = 0.25f;

	bIsUsingGamepad = false;
	bResetGamepadDetectionAfterNoInput = true;
	GamepadTimeout = 5.f;
}

void ADES203_ProjectPlayerController::MoveForward(float Axis)
{
	ADES203_ProjectCharacter* MyCharacter = Cast<ADES203_ProjectCharacter>(UGameplayStatics::GetPlayerCharacter(this, 0));
	MyCharacter->MoveForward(Axis);
}

void ADES203_ProjectPlayerController::MoveRight(float Axis)
{
	ADES203_ProjectCharacter* MyCharacter = Cast<ADES203_ProjectCharacter>(UGameplayStatics::GetPlayerCharacter(this, 0));
	MyCharacter->MoveRight(Axis);
}

void ADES203_ProjectPlayerController::StartShooting()
{
	bCanShoot = true;
	GetWorld()->GetTimerManager().SetTimer(_TimerHandle, this, &ADES203_ProjectPlayerController::Shoot, AttackSpeed, false, false);
}

void ADES203_ProjectPlayerController::StopShooting()
{
	bCanShoot = false;
	GetWorld()->GetTimerManager().ClearTimer(_TimerHandle);
}

bool ADES203_ProjectPlayerController::InputAxis(FKey Key, float Delta, float DeltaTime, int32 NumSamples, bool bGamepad)
{
	bool ret = Super::InputAxis(Key, Delta, DeltaTime, NumSamples, bGamepad);
	_UpdateGamepad(bGamepad);
	return ret;
}

bool ADES203_ProjectPlayerController::InputKey(FKey Key, EInputEvent EventType, float AmountDepressed, bool bGamepad)
{
	bool ret = Super::InputKey(Key, EventType, AmountDepressed, bGamepad);
	_UpdateGamepad(bGamepad);
	return ret;
}

void ADES203_ProjectPlayerController::PlayerTick(float DeltaTime)
{
	Super::PlayerTick(DeltaTime);

	ADES203_ProjectCharacter* MyCharacter = Cast<ADES203_ProjectCharacter>(UGameplayStatics::GetPlayerCharacter(this, 0));

	if (IsLocalController() && bResetGamepadDetectionAfterNoInput && bIsUsingGamepad)
	{
		float now = GetWorld()->TimeSeconds;
		if (now > LastGamepadInputTime + GamepadTimeout)
		{
			bIsUsingGamepad = false;
		}
	}

	if (bIsUsingGamepad == false)
	{
		ADES203_ProjectPlayerController::AimAtCursor();
	}
	else
	{
		if (XAxis == 0.f && YAxis == 0.f)
		{
			//do nothing
		}
		else
		{
			float angle = FMath::Atan2(YAxis, XAxis);
			SetControlRotation(FRotator(0.f, FMath::RadiansToDegrees(angle) + 90.f, 0.f));
		}

	}
}

void ADES203_ProjectPlayerController::SetupInputComponent()
{
	// set up gameplay key bindings
	Super::SetupInputComponent();

	InputComponent->BindAction("Interact", IE_Released, this, &ADES203_ProjectPlayerController::CharacterInteract);
	InputComponent->BindAction("UseItem1", IE_Released, this, &ADES203_ProjectPlayerController::CharacterUseItemAtSlotOne);
	InputComponent->BindAction("UseItem2", IE_Released, this, &ADES203_ProjectPlayerController::CharacterUseItemAtSlotTwo);
	InputComponent->BindAction("UseItem3", IE_Released, this, &ADES203_ProjectPlayerController::CharacterUseItemAtSlotThree);
	InputComponent->BindAction("Shoot", IE_Pressed, this, &ADES203_ProjectPlayerController::StartShooting);
	InputComponent->BindAction("Shoot", IE_Released, this, &ADES203_ProjectPlayerController::StopShooting);
	InputComponent->BindAction("NextWeapon", IE_Pressed, this, &ADES203_ProjectPlayerController::CharacterNextWeapon);

	InputComponent->BindAxis("MoveForward", this, &ADES203_ProjectPlayerController::MoveForward);
	InputComponent->BindAxis("MoveRight", this, &ADES203_ProjectPlayerController::MoveRight);

	InputComponent->BindAxis("TurnX", this, &ADES203_ProjectPlayerController::SetTurnX);
	InputComponent->BindAxis("TurnY", this, &ADES203_ProjectPlayerController::SetTurnY);
}

void ADES203_ProjectPlayerController::CharacterInteract()
{
	ADES203_ProjectCharacter* MyCharacter = Cast<ADES203_ProjectCharacter>(UGameplayStatics::GetPlayerCharacter(this, 0));
	MyCharacter->Interact();
}

void ADES203_ProjectPlayerController::CharacterUseItemAtSlotOne()
{
	ADES203_ProjectCharacter* MyCharacter = Cast<ADES203_ProjectCharacter>(UGameplayStatics::GetPlayerCharacter(this, 0));
	
	if (MyCharacter->MainWeapon != nullptr)
	{
		MyCharacter->MainWeapon->OnPickedUp();
	}	
	if (MyCharacter->Inventory[0] != NULL)
		MyCharacter->UseItemAtInventorySlot(0);
	MyCharacter->EquipWeapon(0);
}

void ADES203_ProjectPlayerController::CharacterNextWeapon()
{
	if (ADES203_ProjectCharacter* MyCharacter = Cast<ADES203_ProjectCharacter>(UGameplayStatics::GetPlayerCharacter(this, 0)))
	{
		MyCharacter->NextWeapon();
	}
}

void ADES203_ProjectPlayerController::CharacterUseItemAtSlotTwo()
{
	ADES203_ProjectCharacter* MyCharacter = Cast<ADES203_ProjectCharacter>(UGameplayStatics::GetPlayerCharacter(this, 0));
	
	if (MyCharacter->MainWeapon != nullptr)
	{
		MyCharacter->MainWeapon->OnPickedUp();
	}
	if (MyCharacter->Inventory[1] != NULL)
		MyCharacter->UseItemAtInventorySlot(1);
	MyCharacter->EquipWeapon(1);
}

void ADES203_ProjectPlayerController::CharacterUseItemAtSlotThree()
{
	ADES203_ProjectCharacter* MyCharacter = Cast<ADES203_ProjectCharacter>(UGameplayStatics::GetPlayerCharacter(this, 0));
	
	if (MyCharacter->MainWeapon != nullptr)
	{
		MyCharacter->MainWeapon->OnPickedUp();
	}
	if (MyCharacter->Inventory[2] != NULL)
		MyCharacter->UseItemAtInventorySlot(2);

	MyCharacter->EquipWeapon(2);
}

void ADES203_ProjectPlayerController::AimAtCursor()
{
	FVector mouseLocation, mouseDirection, charLocation;
	FRotator charRotation, newRotation;
	FHitResult hitResult;

	ADES203_ProjectCharacter* MyCharacter = Cast<ADES203_ProjectCharacter>(GetPawn());

	//DeprojectMousePositionToWorld(mouseLocation, mouseDirection);

	GetHitResultUnderCursorByChannel(TraceTypeQuery5, true, hitResult);

	MouseLoc = hitResult.Location;

	charLocation = MyCharacter->GetActorLocation();
	charRotation = MyCharacter->GetActorRotation();

	// Debug Line
	//DrawDebugLine(GetWorld(), FVector(hitResult.Location.X, hitResult.Location.Y, 100), hitResult.Location, FColor::Red, false, 1.0f, 10.0f);

	newRotation = FMath::RInterpTo(charRotation, UKismetMathLibrary::FindLookAtRotation(charLocation, hitResult.Location), GetWorld()->DeltaTimeSeconds, 33.0f);

	SetControlRotation(FRotator(charRotation.Pitch, newRotation.Yaw, charRotation.Roll));
}

void ADES203_ProjectPlayerController::Shoot()
{
	ADES203_ProjectCharacter* MyCharacter = Cast<ADES203_ProjectCharacter>(UGameplayStatics::GetPlayerCharacter(this, 0));

	if (MyCharacter->MainWeapon != nullptr)
	{
		MyCharacter->MainWeapon->Shoot();
	}
	else
	{
		GLog->Log("No Weapon Equipped");
	}

	if (bCanShoot)
	{
		GetWorld()->GetTimerManager().SetTimer(_TimerHandle, this, &ADES203_ProjectPlayerController::Shoot, AttackSpeed, false);
	}
	
	
}

void ADES203_ProjectPlayerController::SetTurnX(float Axis)
{
	XAxis = FMath::Clamp(Axis, -1.0f, 1.0f);
}

void ADES203_ProjectPlayerController::SetTurnY(float Axis)
{
	YAxis = FMath::Clamp(Axis, -1.0f, 1.0f);
}
