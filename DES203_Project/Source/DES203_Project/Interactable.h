// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Interactable.generated.h"

UCLASS()
class DES203_PROJECT_API AInteractable : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AInteractable();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	

	UFUNCTION(BlueprintNativeEvent)
	void Interact();
	virtual void Interact_Implementation();

	/* All interactables have a static mesh*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Interactable Properties")
	class UStaticMeshComponent* InteractableMesh;

	/* All interactables have an help text*/
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Interactable Properties")
	FString HelpText;

	UPROPERTY(EditAnywhere, Category = "Interactable Properties")
	class UWidget* HelpTextUI;

	UFUNCTION()
	void ToggleHelpText();
};
