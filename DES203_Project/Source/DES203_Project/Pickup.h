// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Interactable.h"
#include "Pickup.generated.h"

/**
 * 
 */
UCLASS()
class DES203_PROJECT_API APickup : public AInteractable
{
	GENERATED_BODY()

	public:
		APickup();

		virtual void BeginPlay() override;

		virtual void Interact_Implementation() override;

		/* Called when the item is pickedup and needs to be cleaned up from the world*/
		virtual void OnPickedUp();

		UFUNCTION(BlueprintNativeEvent)
		void Use();
		virtual void Use_Implementation();

		UPROPERTY(EditAnywhere, Category = "Pickup Properties")
		int32 value;

		UPROPERTY(EditAnywhere, Category = "Pickup Properties")
		FString itemName;

		UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Pickup Properties")
		UTexture2D* PickupThumbnail;
};
