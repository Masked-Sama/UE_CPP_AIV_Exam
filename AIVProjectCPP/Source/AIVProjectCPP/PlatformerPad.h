// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/BoxComponent.h"
#include "GameFramework/Actor.h"
#include "PlatformerPad.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FCardDetected);
UCLASS()
class AIVPROJECTCPP_API APlatformerPad : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APlatformerPad();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
public:
	
	UPROPERTY()
	UStaticMeshComponent* StaticMesh;
	UPROPERTY()
	UBoxComponent* TriggerBox;
	UPROPERTY()
	USceneComponent* Root;

	FCardDetected CardDetected;
	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION()
	void OnOverlapBegin(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor,
		class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
};
