// Copyright Epic Games, Inc. All Rights Reserved.

#include "CollabGameDevGameMode.h"
#include "CollabGameDevCharacter.h"
#include "UObject/ConstructorHelpers.h"

ACollabGameDevGameMode::ACollabGameDevGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
