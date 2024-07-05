// Fill out your copyright notice in the Description page of Project Settings.


#include "MovingPlatform.h"
#include "Components/BoxComponent.h"
#include "Components/InterpToMovementComponent.h"

// Sets default values
AMovingPlatform::AMovingPlatform()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	BoxCollider = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxCOllider"));
	RootComponent = BoxCollider;
	
	MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	MeshComponent->SetupAttachment(RootComponent);

	FString StaticMeshPath = "/Game/Platformer/Meshes/MovingPlatform";
	UStaticMesh* Mesh = LoadObject<UStaticMesh>(nullptr, *StaticMeshPath);
	if (Mesh)
	{
		MeshComponent->SetStaticMesh(Mesh);
	}

	MovementComponent = CreateDefaultSubobject<UInterpToMovementComponent>(TEXT("MovementComponent"));

	//Settings
	MovementComponent->Duration = 2.0f;
	MovementComponent->bSweep = true;
	MovementComponent->BehaviourType = EInterpToBehaviourType::PingPong;
	
}

// Called when the game starts or when spawned
void AMovingPlatform::BeginPlay()
{
	Super::BeginPlay();

	MovementComponent->ControlPoints.Add(FInterpControlPoint(FVector(0.f,0.f,0.f), true));
	for(int i = 0; i < ThePath.Num(); i++)
	{
		MovementComponent->ControlPoints.Add(FInterpControlPoint(ThePath[i], true));
	}
	MovementComponent->FinaliseControlPoints();
}

// Called every frame
void AMovingPlatform::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
}