// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Collectible.generated.h"

UCLASS()
class AIVPROJECTCPP_API ACollectible : public AActor
{
	GENERATED_BODY()
		class UBoxComponent* TriggerVolume;
public:	
	// Sets default values for this actor's properties
	ACollectible();

	UPROPERTY()
	UStaticMeshComponent* MeshComponent;
	UPROPERTY()
	USceneComponent* Root;
	UPROPERTY()
	UAudioComponent* AudioComponent;
	UPROPERTY()
	USoundBase* Sound;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION()
	void OnOverlapBegin(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor,
		class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
};
