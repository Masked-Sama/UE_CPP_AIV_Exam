// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/StaticMeshActor.h"
#include "PlatformerBoxV2.generated.h"

/**
 * 
 */
UCLASS()
class AIVPROJECTCPP_API APlatformerBoxV2 : public AStaticMeshActor
{
	GENERATED_BODY()
public:	
	// Sets default values for this actor's properties
	APlatformerBoxV2();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	UPROPERTY()
	UStaticMeshComponent* PlatformStaticMeshComponent;
	UPROPERTY()
	USceneComponent* Root;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
};
