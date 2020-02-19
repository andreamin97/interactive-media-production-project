// Fill out your copyright notice in the Description page of Project Settings.

#include "Components/Widget.h"
#include "Interactable.h"

// Sets default values
AInteractable::AInteractable()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	HelpText = FString("Press F to interact with item.");

	/*uiWidget = CreateDefaultSubobject<UWidgetComponent>(TEXT("UIWidget"));
	uiWidget->SetupAttachment(RootComponent);
	uiWidget->SetVisibility(true, true);*/
}

// Called when the game starts or when spawned
void AInteractable::BeginPlay()
{
	Super::BeginPlay();
	
}

void AInteractable::Interact_Implementation()
{
	// You must ovverride this
	unimplemented();
}

void AInteractable::ToggleHelpText()
{
	//uiWidget->ToggleVisibility();
}

