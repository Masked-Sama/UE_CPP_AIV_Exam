// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/TextRenderActor.h"
#include "UpdateCollectiblesCounter.h"
#include "MyTextRenderActor.generated.h"

/**
 * 
 */
UCLASS()
class AIVPROJECTCPP_API AMyTextRenderActor : public ATextRenderActor, public IUpdateCollectiblesCounter
{
	GENERATED_BODY()
protected:
	
	virtual void BeginPlay() override;
	
public:
	int Collectibles = 0;
	
	void ChangeCounter();
	virtual  void UpdateCounter(int value) override;
};
