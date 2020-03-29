// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "DES203_ProjectGameMode.generated.h"

UCLASS(minimalapi)
class ADES203_ProjectGameMode : public AGameModeBase
{
	GENERATED_BODY()

	virtual void BeginPlay() override;

public:
	ADES203_ProjectGameMode();

	enum EHUDState : uint8
	{
		HS_Ingame,
		HS_Inventory,
		HS_Shop_General
	};

	/* checks the hud state and calls applyHUD accordingly*/
	void ApplyHUDChanges();
	
	FORCEINLINE uint8 GetHudState() { return HUDState; }

	UFUNCTION(BlueprintCallable, Category = "UI FUnctions")
	void ChangeHUDState(uint8 NewState);

	/* applies HUD to screen, returns true if successful, false otherwise*/
	bool ApplyHUD(TSubclassOf<class UUserWidget> WidgetToApply, bool bShowMouseCursor, bool bEnableClickEvents);

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		class AShop* CurrentShop;

protected:

	uint8 HUDState;

	/* The hud to be shown ingame*/
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "UIWidgets", Meta = (BlueprintProtected = "true"))
	TSubclassOf<class UUserWidget> IngameHUDClass;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "UIWidgets", Meta = (BlueprintProtected = "true"))
	TSubclassOf<class UUserWidget> InventoryHUDClass;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "UIWidgets", Meta = (BlueprintProtected = "true"))
	TSubclassOf<class UUserWidget> ShopGeneralHUDClass;

	UPROPERTY()
	class UUserWidget* CurrentWidget;

};



