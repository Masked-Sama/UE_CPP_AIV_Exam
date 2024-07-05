// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "PlatformSaveGame.generated.h"

/**
 * 
 */
UCLASS()
class AIVPROJECTCPP_API UPlatformSaveGame : public USaveGame
{
	GENERATED_BODY()

public:

	UPROPERTY(BlueprintReadWrite)
	FVector PlayerLocation;
	UPROPERTY(BlueprintReadWrite)
	FVector PlayerScale;
	UPROPERTY(BlueprintReadWrite)
	FRotator PlayerRotator;

	UPlatformSaveGame();
};
