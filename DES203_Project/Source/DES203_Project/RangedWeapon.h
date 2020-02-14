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

	virtual void Tick(float DeltaTime) override;

	bool bIsShooting;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category ="Weapon Statistics")
		float attacksPerSecond;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon Statistics")
		float damage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon Statistics")
		float range;

	virtual void Use_Implementation() override;

	UFUNCTION(BlueprintCallable)
	virtual void Shoot_Implementation();
	void Shoot();

	UFUNCTION()
	virtual void OnPickedUp() override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UArrowComponent* aimArrow;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UParticleSystem* shootEffect;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		class UParticleSystemComponent* laserPointer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		class UParticleSystem* shootTrace;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon Statistics")
		FVector ShootPoint;
};
