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

void ADES203_ProjectPlayerController::PlayerTick(float DeltaTime)
{
	Super::PlayerTick(DeltaTime);

	ADES203_ProjectCharacter* MyCharacter = Cast<ADES203_ProjectCharacter>(UGameplayStatics::GetPlayerCharacter(this, 0));

	ADES203_ProjectPlayerController::AimAtCursor();	
}

void ADES203_ProjectPlayerController::SetupInputComponent()
{
	// set up gameplay key bindings
	Super::SetupInputComponent();

	InputComponent->BindAction("Interact", IE_Released, this, &ADES203_ProjectPlayerController::CharacterInteract);
	InputComponent->BindAction("UseItem1", IE_Released, this, &ADES203_ProjectPlayerController::CharacterUseItemAtSlotOne);
	InputComponent->BindAction("UseItem2", IE_Released, this, &ADES203_ProjectPlayerController::CharacterUseItemAtSlotTwo);
	InputComponent->BindAction("UseItem3", IE_Released, this, &ADES203_ProjectPlayerController::CharacterUseItemAtSlotThree);
	InputComponent->BindAction("UseItem4", IE_Released, this, &ADES203_ProjectPlayerController::CharacterUseItemAtSlotFour);
	InputComponent->BindAction("Shoot", IE_Pressed, this, &ADES203_ProjectPlayerController::StartShooting);
	InputComponent->BindAction("Shoot", IE_Released, this, &ADES203_ProjectPlayerController::StopShooting);

	InputComponent->BindAxis("MoveForward", this, &ADES203_ProjectPlayerController::MoveForward);
	InputComponent->BindAxis("MoveRight", this, &ADES203_ProjectPlayerController::MoveRight);
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
	MyCharacter->UseItemAtInventorySlot(0);
}

void ADES203_ProjectPlayerController::CharacterUseItemAtSlotTwo()
{
	ADES203_ProjectCharacter* MyCharacter = Cast<ADES203_ProjectCharacter>(UGameplayStatics::GetPlayerCharacter(this, 0));
	
	if (MyCharacter->MainWeapon != nullptr)
	{
		MyCharacter->MainWeapon->OnPickedUp();
	}
	MyCharacter->UseItemAtInventorySlot(1);
}

void ADES203_ProjectPlayerController::CharacterUseItemAtSlotThree()
{
	ADES203_ProjectCharacter* MyCharacter = Cast<ADES203_ProjectCharacter>(UGameplayStatics::GetPlayerCharacter(this, 0));
	
	if (MyCharacter->MainWeapon != nullptr)
	{
		MyCharacter->MainWeapon->OnPickedUp();
	}
	MyCharacter->UseItemAtInventorySlot(2);
}

void ADES203_ProjectPlayerController::CharacterUseItemAtSlotFour()
{
	ADES203_ProjectCharacter* MyCharacter = Cast<ADES203_ProjectCharacter>(UGameplayStatics::GetPlayerCharacter(this, 0));
	
	if (MyCharacter->MainWeapon != nullptr)
	{
		MyCharacter->MainWeapon->OnPickedUp();
	}
	MyCharacter->UseItemAtInventorySlot(3);
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
