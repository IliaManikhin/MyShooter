// Copyright Epic Games, Inc. All Rights Reserved.

#include "MyShooterGameMode.h"
#include "MyShooterHUD.h"
#include "MyShooterCharacter.h"
#include "UObject/ConstructorHelpers.h"

AMyShooterGameMode::AMyShooterGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AMyShooterHUD::StaticClass();
}
