// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.

#include "Hank.h"
#include "HankGameMode.h"
#include "HankCharacter.h"

AHankGameMode::AHankGameMode()
{
	// set default pawn class to our character
	DefaultPawnClass = AHankCharacter::StaticClass();
}
