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

	/** Can be called to check and see if the player is currently using a gamepad */
	UPROPERTY(Transient, BlueprintReadOnly)
		bool bIsUsingGamepad;

	/** Specifies whether we set `bIsUsingGamepad` to `false` if we receive no input for a period of time. If set to 'true', GamepadTimeout will control how long
		we need to go without receiving input before we set `bIsUsingGamepad` to `false`. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
		bool bResetGamepadDetectionAfterNoInput;

	/** How long we can go without receiving a gamepad input before we assume they've stopped using the gamepad */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta = (EditCondition = "bResetGamepadDetectionAfterNoInput"))
		float GamepadTimeout;

	// Overrides
	virtual bool InputAxis(FKey Key, float Delta, float DeltaTime, int32 NumSamples, bool bGamepad) override;
	virtual bool InputKey(FKey Key, EInputEvent EventType, float AmountDepressed, bool bGamepad) override;

	void MoveForward(float Axis);
	void MoveRight(float Axis);

	FORCEINLINE FVector GetMouseLoc() { return MouseLoc; }

	UFUNCTION()
	void StartShooting();

	UFUNCTION()
	void StopShooting();

protected:
	/** True if the controlled character should navigate to the mouse cursor. */
	//uint32 bMoveToMouseCursor : 1;

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

	UFUNCTION(BlueprintCallable)
	void AimAtCursor();

	void Shoot();

	FORCEINLINE void _UpdateGamepad(bool bGamepad)
	{
		bIsUsingGamepad = bGamepad;
		if (bGamepad)
		{
			LastGamepadInputTime = GetWorld()->TimeSeconds;
		}
	}

	// Used to keep track of when we last saw gamepad input
	UPROPERTY(Transient, BlueprintReadOnly)
		float LastGamepadInputTime;

	UPROPERTY()
		float XAxis;

	UPROPERTY()
		float YAxis;

private:
	bool bCanShoot;
	
	FTimerHandle _TimerHandle;

	UFUNCTION()
		void SetTurnX(float Axis);

	UFUNCTION()
		void SetTurnY(float Axis);
};


