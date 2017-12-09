// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "FPSProjGameMode.h"
#include "FPSProjHUD.h"
#include "FPSProjCharacter.h"
#include "UObject/ConstructorHelpers.h"

AFPSProjGameMode::AFPSProjGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AFPSProjHUD::StaticClass();
}
