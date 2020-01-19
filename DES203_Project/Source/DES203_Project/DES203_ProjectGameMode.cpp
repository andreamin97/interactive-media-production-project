// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "DES203_ProjectGameMode.h"
#include "DES203_ProjectPlayerController.h"
#include "DES203_ProjectCharacter.h"
#include "Blueprint/UserWidget.h"
#include "Kismet/GameplayStatics.h"
#include "UObject/ConstructorHelpers.h"

void ADES203_ProjectGameMode::BeginPlay()
{
	ApplyHUDChanges();
}

ADES203_ProjectGameMode::ADES203_ProjectGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = ADES203_ProjectPlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}

	HUDState = EHUDState::HS_Ingame;
}

void ADES203_ProjectGameMode::ApplyHUDChanges()
{

	//remove the previous HUD
	if (CurrentWidget != nullptr)
	{
		CurrentWidget->RemoveFromParent();
	}

	switch (HUDState)
	{
		case EHUDState::HS_Ingame:
		{
			ApplyHUD(IngameHUDClass, false, false);
			break;
		}
		case EHUDState::HS_Inventory:
		{
			ApplyHUD(InventoryHUDClass, true, true);
			break;
		}
		case EHUDState::HS_Shop_General:
		{
			ApplyHUD(ShopGeneralHUDClass, true, true);
			break;
		}
		default:
		{
			ApplyHUD(IngameHUDClass, false, false);
			break;
		}
	}

}

void ADES203_ProjectGameMode::ChangeHUDState(uint8 NewState)
{
	HUDState = NewState;
	ApplyHUDChanges();
}

bool ADES203_ProjectGameMode::ApplyHUD(TSubclassOf<class UUserWidget> WidgetToApply, bool bShowMouseCursor, bool bEnableClickEvents)
{
	// gt reference to player and controller
	ADES203_ProjectCharacter* MyCharacter = Cast<ADES203_ProjectCharacter>(UGameplayStatics::GetPlayerCharacter(this, 0));
	APlayerController* MyController = GetWorld()-> GetFirstPlayerController();

	if (WidgetToApply != nullptr)
	{
		//set mouse visibility and click events according to params
		MyController->bShowMouseCursor = bShowMouseCursor;
		MyController->bEnableClickEvents = bEnableClickEvents;

		CurrentWidget = CreateWidget<UUserWidget>(GetWorld(), WidgetToApply);

		if (CurrentWidget != nullptr)
		{
			CurrentWidget->AddToViewport();
			return true;
		}
		else return false;
	}
	else return false;
}
