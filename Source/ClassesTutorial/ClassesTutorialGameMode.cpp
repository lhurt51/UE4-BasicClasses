// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "ClassesTutorial.h"
#include "ClassesTutorialGameMode.h"
#include "ClassesTutorialHUD.h"
#include "ClassesTutorialCharacter.h"

AClassesTutorialGameMode::AClassesTutorialGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AClassesTutorialHUD::StaticClass();
}
