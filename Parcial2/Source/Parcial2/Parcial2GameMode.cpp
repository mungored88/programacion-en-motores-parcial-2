// Copyright Epic Games, Inc. All Rights Reserved.

#include "Parcial2GameMode.h"
#include "Parcial2Character.h"
#include "UObject/ConstructorHelpers.h"

AParcial2GameMode::AParcial2GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
