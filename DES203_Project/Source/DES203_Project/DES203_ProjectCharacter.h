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

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class ARangedWeapon* MainWeapon;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category ="UI")
	FString HelpText;

	/*The Amount of gold the player has*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UI")
	int32 Gold;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UI")
	class AInteractable* CurrentInteractable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Equipment)
		TArray<class APickup*> Inventory;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Equipment)
		TArray<class APickup*> EquippedWeapons;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Equipment)
		TArray<class APickup*> EquippedItems;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		uint8 WeaponIndex;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		uint8 ItemIndex;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool bIsDead=false;

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
	@params Amount, amount to update the coins by, can be positive or negative
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

	UFUNCTION(BlueprintCallable, Category = "Inventory Functions")
		void EquipWeapon(int32 Slot);

	UFUNCTION(BlueprintCallable, Category = "Inventory Functions")
		void NextWeapon();

	UFUNCTION(BlueprintCallable, Category = "Inventory Functions")
		void NextItem();

	/* toggles the inventory*/
	void ToggleInventory();

	/* interact with the current interactable if there is one*/
	UFUNCTION(BlueprintCallable)
	void Interact();

	UFUNCTION(BlueprintCallable)
	static void Shoot();

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

