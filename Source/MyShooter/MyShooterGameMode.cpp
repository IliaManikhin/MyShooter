// Copyright Epic Games, Inc. All Rights Reserved.

#include "MyShooterGameMode.h"
#include "MyShooterHUD.h"
#include "FirstPersonCharacter.h"
#include "UObject/ConstructorHelpers.h"

AMyShooterGameMode::AMyShooterGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/Player/Behavior/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AMyShooterHUD::StaticClass();
}
