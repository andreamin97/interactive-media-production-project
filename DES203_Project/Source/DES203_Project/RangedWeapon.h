// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Pickup.h"
#include "RangedWeapon.generated.h"

/**
 * 
 */
UCLASS()
class DES203_PROJECT_API ARangedWeapon : public APickup
{
	GENERATED_BODY()

public:
	ARangedWeapon();

	bool bIsShooting;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category ="Weapon Statistics")
		float attacksPerSecond;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon Statistics")
		float damage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon Statistics")
		float range;

	virtual void Use_Implementation() override;

	UFUNCTION(BlueprintCallable)
		void Shoot();

};
