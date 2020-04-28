// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Pickup.h"
#include "Item.generated.h"

/**
 * 
 */
UCLASS()
class DES203_PROJECT_API AItem : public APickup
{
	GENERATED_BODY()

public:
	int16 charges;
		
};
