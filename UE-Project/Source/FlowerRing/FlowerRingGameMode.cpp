// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.

#include "FlowerRing.h"
#include "FlowerRingGameMode.h"
#include "FlowerRingHUD.h"
#include "FlowerRingCharacter.h"

AFlowerRingGameMode::AFlowerRingGameMode(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AFlowerRingHUD::StaticClass();
}
