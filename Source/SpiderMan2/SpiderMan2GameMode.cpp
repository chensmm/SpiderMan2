// Copyright Epic Games, Inc. All Rights Reserved.

#include "SpiderMan2GameMode.h"
#include "SpiderMan2HUD.h"
#include "SpiderMan2Character.h"
#include "UObject/ConstructorHelpers.h"

ASpiderMan2GameMode::ASpiderMan2GameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ASpiderMan2HUD::StaticClass();
}
