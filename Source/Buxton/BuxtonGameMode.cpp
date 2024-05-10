// Copyright Epic Games, Inc. All Rights Reserved.

#include "BuxtonGameMode.h"
#include "BuxtonCharacter.h"
#include "UObject/ConstructorHelpers.h"

ABuxtonGameMode::ABuxtonGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
