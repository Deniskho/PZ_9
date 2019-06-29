// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "PZ_9GameMode.h"
#include "PZ_9Ball.h"

APZ_9GameMode::APZ_9GameMode()
{
	// set default pawn class to our ball
	DefaultPawnClass = APZ_9Ball::StaticClass();
}
