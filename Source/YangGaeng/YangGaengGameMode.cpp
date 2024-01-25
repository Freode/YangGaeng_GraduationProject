// Copyright Epic Games, Inc. All Rights Reserved.

#include "YangGaengGameMode.h"
#include "YangGaengCharacter.h"
#include "UObject/ConstructorHelpers.h"

AYangGaengGameMode::AYangGaengGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
