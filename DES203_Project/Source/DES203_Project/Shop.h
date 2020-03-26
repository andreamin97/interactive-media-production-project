// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Interactable.h"
#include "Shop.generated.h"

/**
 * 
 */
UCLASS()
class DES203_PROJECT_API AShop : public AInteractable
{
	GENERATED_BODY()

public:

	AShop();

	UFUNCTION()
		virtual void BeginPlay() override;

	UFUNCTION()
	virtual void Interact_Implementation() override;

	UFUNCTION(BlueprintCallable)
		void SellItem(int Slot);

	UPROPERTY(EditAnywhere, BLueprintReadWrite)
		TArray<class APickup*> ShopInventory;

private:
	UFUNCTION()
	void ToggleShopHUD();
	
};
