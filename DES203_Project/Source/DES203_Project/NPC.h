// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Interactable.h"
#include "NPC.generated.h"

/**
 * 
 */
UCLASS()
class DES203_PROJECT_API ANPC : public AInteractable
{
	GENERATED_BODY()

public:
	virtual void Interact_Implementation() override;

private:

	UFUNCTION()
	void ToggleDialogueHud();
	
};
