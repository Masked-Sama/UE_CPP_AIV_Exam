// Copyright Epic Games, Inc. All Rights Reserved.

#include "AIVProjectCPPGameMode.h"
#include "AIVProjectCPPCharacter.h"
#include "UObject/ConstructorHelpers.h"

AAIVProjectCPPGameMode::AAIVProjectCPPGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
