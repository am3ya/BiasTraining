// Copyright Epic Games, Inc. All Rights Reserved.

#include "BiasTrainingGameMode.h"
#include "BiasTrainingCharacter.h"
#include "UObject/ConstructorHelpers.h"

ABiasTrainingGameMode::ABiasTrainingGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
