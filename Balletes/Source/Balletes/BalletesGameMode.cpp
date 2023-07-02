// Copyright Epic Games, Inc. All Rights Reserved.

#include "BalletesGameMode.h"
#include "BalletesCharacter.h"
#include "UObject/ConstructorHelpers.h"

ABalletesGameMode::ABalletesGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
