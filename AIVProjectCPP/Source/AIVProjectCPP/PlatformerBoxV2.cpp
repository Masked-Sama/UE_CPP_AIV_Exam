// Fill out your copyright notice in the Description page of Project Settings.


#include "PlatformerBoxV2.h"
#include "StaticMeshResources.h"
#include "Engine/StaticMesh.h"

// Sets default values
APlatformerBoxV2::APlatformerBoxV2()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//bad system, but works
	PlatformStaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PlatformStaticMesh"));
	PlatformStaticMeshComponent->SetCollisionProfileName(UCollisionProfile::BlockAll_ProfileName);
	PlatformStaticMeshComponent->Mobility = EComponentMobility::Movable;
	PlatformStaticMeshComponent->SetGenerateOverlapEvents(false);
	PlatformStaticMeshComponent->bUseDefaultCollision = true;
	PlatformStaticMeshComponent->SetSimulatePhysics(true);

	RootComponent = PlatformStaticMeshComponent;
	
	FString StaticMeshPath = "/Game/LevelPrototyping/meshes/SM_ChamferCube";
	UStaticMesh* Mesh = LoadObject<UStaticMesh>(nullptr, *StaticMeshPath);
	if (Mesh)
	{
		PlatformStaticMeshComponent->SetStaticMesh(Mesh);
	}
	
}

// Called when the game starts or when spawned
void APlatformerBoxV2::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void APlatformerBoxV2::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
