// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "DES203_ProjectGameMode.h"
#include "DES203_ProjectPlayerController.h"
#include "DES203_ProjectCharacter.h"
#include "UObject/ConstructorHelpers.h"

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
}