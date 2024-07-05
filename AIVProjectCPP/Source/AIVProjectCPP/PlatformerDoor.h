// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PlatformerPad.h"
#include "GameFramework/Actor.h"
#include "PlatformerDoor.generated.h"

UCLASS()
class AIVPROJECTCPP_API APlatformerDoor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APlatformerDoor();
	
	// UPROPERTY(VisibleAnywhere)
	// UTimelineComponent* Timeline; 
	// UPROPERTY(EditAnywhere)
	// UCurveFloat* fCurve;
	
	FVector StartLocation;
	FVector EndLocation;
	
	UStaticMeshComponent* MeshComponent; 
	USceneComponent* Root;
	UPROPERTY(EditAnywhere)
	APlatformerPad* Pad;
	
	float ZOffset;
protected:
	
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	UFUNCTION()
	void OpenDoor();
	
public:
	//FOnTimelineFloat InterpFunction{};
	//void TimelineFloatReturn(float value);
	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
