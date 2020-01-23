// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "DES203_ProjectCharacter.generated.h"

UCLASS(Blueprintable)
class ADES203_ProjectCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	ADES203_ProjectCharacter();

	UPROPERTY(BlueprintReadWrite)
		enum EWeaponState : uint8 {
		WS_Unarmed,
		WS_Gun,
		WS_Rifle,
		WS_Shotgun
	};

	uint8 WeaponState;

	UPROPERTY(EditANywhere, BlueprintReadWrite, Category = "Equipment")
		class ARangedWeapon* primaryWeapon;

	UPROPERTY(EditANywhere, BlueprintReadWrite, Category ="UI")
	FString HelpText;

	/*The Amout of gold the player has*/
	UPROPERTY(EditANywhere, BlueprintReadWrite, Category = "UI")
	int32 Gold;

	UPROPERTY(EditANywhere, BlueprintReadWrite, Category = "UI")
	class AInteractable* CurrentInteractable;

	virtual void BeginPlay() override;

	// Called every frame.
	virtual void Tick(float DeltaSeconds) override;

	/** Returns TopDownCameraComponent subobject **/
	FORCEINLINE class UCameraComponent* GetTopDownCameraComponent() const { return TopDownCameraComponent; }
	/** Returns CameraBoom subobject **/
	FORCEINLINE class USpringArmComponent* GetCameraBoom() const { return CameraBoom; }
	/** Returns CursorToWorld subobject **/
	FORCEINLINE class UDecalComponent* GetCursorToWorld() { return CursorToWorld; }

	/*Updates the coins
	@params Amount, anount to update the coins by, can be positive or negatve
	*/
	UFUNCTION(BlueprintCallable, Category = "Inventory Functions")
		void UpdateGold(int32 Amount);

	/* Adds an item to the inventory*/
	UFUNCTION(BlueprintPure, Category = "Inventory Functions")
		bool AddItemToInventory(class APickup* Item);

	/* gets thumbnail for any given item slot*/
	UFUNCTION(BlueprintPure, Category = "Inventory Functions")
		UTexture2D* GetThumbnailAtInventorySlot(int32 Slot);

	/* gets the item name for a given inventory slot*/
	UFUNCTION(BlueprintPure, Category = "Inventory Functions")
		FString GetItemNameAtInventorySlot(int32 Slot);

	/*Uses item at a given inventory slot*/
	UFUNCTION(BlueprintCallable, Category = "Inventory Functions")
		void UseItemAtInventorySlot(int32 Slot);

	/* toggles the inventory*/
	void ToggleInventory();

	/* interact with the current interactable if there is one*/
	UFUNCTION(BlueprintCallable)
	void Interact();

	UFUNCTION(BòueprintCallable)
		bool EquipWeapon()

	void MoveForward(float Axis);
	void MoveRight(float Axis);

protected:


private:
	/** Top down camera */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class UCameraComponent* TopDownCameraComponent;

	/** Camera boom positioning the camera above the character */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class USpringArmComponent* CameraBoom;

	/** A decal that projects to the cursor location. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class UDecalComponent* CursorToWorld;

	UPROPERTY(EditAnywhere, Category = "Interact")
	class USphereComponent* InteractSphere;

	UPROPERTY(EditAnywhere, Category = "Interact")
	float InteractSphereSize;

	/*the èòayers inventory, reprsented as a TArray of pickup objects*/
	UPROPERTY(EditAnywhere)
		TArray<class APickup*> Inventory;

	UFUNCTION()
	void BeginOverlap(UPrimitiveComponent* OverlappedComponent,
		AActor* OtherActor,
		UPrimitiveComponent* OtherComp,
		int32 OtherBodyIndex,
		bool bFromSweep,
		const FHitResult& SweepResult);

	UFUNCTION()
	void EndOverlap(UPrimitiveComponent* OverlappedComp, 
		AActor* OtherActor, 
		UPrimitiveComponent* OtherComp, 
		int32 OtherBodyIndex);

};

