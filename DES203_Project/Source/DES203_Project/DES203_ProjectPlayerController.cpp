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
#include "Engine/World.h"

ADES203_ProjectPlayerController::ADES203_ProjectPlayerController()
{
	bShowMouseCursor = true;
	DefaultMouseCursor = EMouseCursor::Crosshairs;
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

void ADES203_ProjectPlayerController::PlayerTick(float DeltaTime)
{
	Super::PlayerTick(DeltaTime);

	ADES203_ProjectPlayerController::AimAtCursor();
}

void ADES203_ProjectPlayerController::SetupInputComponent()
{
	// set up gameplay key bindings
	Super::SetupInputComponent();

	InputComponent->BindAction("Interact", IE_Released, this, &ADES203_ProjectPlayerController::CharacterInteract);
	InputComponent->BindAction("Interact", IE_Released, this, &ADES203_ProjectPlayerController::CharacterUseItemAtSlot);

	InputComponent->BindAxis("MoveForward", this, &ADES203_ProjectPlayerController::MoveForward);
	InputComponent->BindAxis("MoveRight", this, &ADES203_ProjectPlayerController::MoveRight);


}

void ADES203_ProjectPlayerController::CharacterInteract()
{
	ADES203_ProjectCharacter* MyCharacter = Cast<ADES203_ProjectCharacter>(UGameplayStatics::GetPlayerCharacter(this, 0));
	MyCharacter->Interact();
}

void ADES203_ProjectPlayerController::CharacterUseItemAtSlot()
{
	ADES203_ProjectCharacter* MyCharacter = Cast<ADES203_ProjectCharacter>(UGameplayStatics::GetPlayerCharacter(this, 0));
	MyCharacter->UseItemAtInventorySlot(0);
}

void ADES203_ProjectPlayerController::AimAtCursor()
{
	FVector mouseLocation, mouseDirection, charLocation;
	FRotator charRotation, newRotation;
	FHitResult hitResult;

	ADES203_ProjectCharacter* MyCharacter = Cast<ADES203_ProjectCharacter>(GetPawn());

	//DeprojectMousePositionToWorld(mouseLocation, mouseDirection);

	GetHitResultUnderCursorByChannel(TraceTypeQuery5, true, hitResult);

	charLocation = MyCharacter->GetActorLocation();
	charRotation = MyCharacter->GetActorRotation();

	DrawDebugLine(GetWorld(), FVector(hitResult.Location.X, hitResult.Location.Y, 100), hitResult.Location, FColor::Red, false, 1.0f, 10.0f);

	newRotation = FMath::RInterpTo(charRotation, UKismetMathLibrary::FindLookAtRotation(charLocation, hitResult.Location), GetWorld()->DeltaTimeSeconds, 33.0f);

	SetControlRotation(FRotator(charRotation.Pitch, newRotation.Yaw, charRotation.Roll));
}