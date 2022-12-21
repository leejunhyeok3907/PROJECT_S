// Copyright Epic Games, Inc. All Rights Reserved.

#include "new_ProjectGameMode.h"
#include "new_ProjectHUD.h"
#include "new_ProjectCharacter.h"
#include "UObject/ConstructorHelpers.h"

Anew_ProjectGameMode::Anew_ProjectGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = Anew_ProjectHUD::StaticClass();
}
