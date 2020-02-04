// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "DES203_ProjectPlayerController.generated.h"

UCLASS()
class ADES203_ProjectPlayerController : public APlayerController
{
	GENERATED_BODY()

public:
	ADES203_ProjectPlayerController();

	UPROPERTY()
	float AttackSpeed;

	FVector MouseLoc;

	void MoveForward(float Axis);
	void MoveRight(float Axis);

	FORCEINLINE FVector GetMouseLoc() { return MouseLoc; }

	UFUNCTION()
	void StartShooting();

	UFUNCTION()
	void StopShooting();

protected:
	/** True if the controlled character should navigate to the mouse cursor. */
	uint32 bMoveToMouseCursor : 1;

	// Begin PlayerController interface
	virtual void PlayerTick(float DeltaTime) override;
	virtual void SetupInputComponent() override;
	// End PlayerController interface

	/* call the character Interact() function*/
	void CharacterInteract();

	/* call the character's UseItemAtInventorySlot() Function
	   For now only calls it on the first slot
	*/
	UFUNCTION()
	void CharacterUseItemAtSlotOne();

	UFUNCTION()
	void CharacterUseItemAtSlotTwo();

	UFUNCTION()
		void CharacterUseItemAtSlotThree();

	UFUNCTION()
		void CharacterUseItemAtSlotFour();

	UFUNCTION(BlueprintCallable)
	void AimAtCursor();

	void Shoot();

private:
	bool bCanShoot;
	
	FTimerHandle _TimerHandle;
};


