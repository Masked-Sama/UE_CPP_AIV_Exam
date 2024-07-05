// Fill out your copyright notice in the Description page of Project Settings.


#include "PlatformerCard.h"

// Sets default values
APlatformerCard::APlatformerCard()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	this->Tags.Add("Card");
	
	StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PlatformStaticMesh"));
	StaticMesh->SetCollisionProfileName(UCollisionProfile::BlockAll_ProfileName);
	StaticMesh->bUseDefaultCollision = true;
	
	RootComponent = StaticMesh;

	FString StaticMeshPath = "/Game/Platformer/Meshes/Pass";
	UStaticMesh* Mesh = LoadObject<UStaticMesh>(nullptr, *StaticMeshPath);
	if (Mesh)
	{
		StaticMesh->SetStaticMesh(Mesh);
	}
	Tags.Add("Keycard");
}

// Called when the game starts or when spawned
void APlatformerCard::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void APlatformerCard::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

