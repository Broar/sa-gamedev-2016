// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.

#include "GrandpaGetsHisGroove.h"
#include "GrandpaGetsHisGrooveGameMode.h"
#include "GrandpaGetsHisGroovePlayerController.h"
#include "GrandpaGetsHisGrooveCharacter.h"

AGrandpaGetsHisGrooveGameMode::AGrandpaGetsHisGrooveGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = AGrandpaGetsHisGroovePlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}