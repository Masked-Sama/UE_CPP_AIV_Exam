// Fill out your copyright notice in the Description page of Project Settings.


#include "PlatformerDoor.h"

#include "Kismet/GameplayStatics.h"

// Sets default values
APlatformerDoor::APlatformerDoor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
	ZOffset = 300.f;
	
	//bad system, but works
	MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PlatformStaticMesh"));
	MeshComponent->SetGenerateOverlapEvents(false);
	MeshComponent->bUseDefaultCollision = true;

	RootComponent = MeshComponent;
	
	FString StaticMeshPath = "/Game/Platformer/Meshes/Door";
	UStaticMesh* Mesh = LoadObject<UStaticMesh>(nullptr, *StaticMeshPath);
	if (Mesh)
	{
		MeshComponent->SetStaticMesh(Mesh);
	}
}

// Called when the game starts or when spawned
void APlatformerDoor::BeginPlay()
{
	Super::BeginPlay();
	
	StartLocation = GetActorLocation();
	EndLocation = FVector(StartLocation.X, StartLocation.Y, StartLocation.Z + ZOffset);
	
	// AActor* FoundActor;
	// FoundActor = UGameplayStatics::GetActorOfClass(GetWorld(), APlatformerPad::StaticClass());
 //    if (FoundActor)
	// {
	//     Pad = Cast<APlatformerPad>(FoundActor);
	// }
	Pad->CardDetected.AddUniqueDynamic(this, &APlatformerDoor::OpenDoor);
}

// Called every frame
void APlatformerDoor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void APlatformerDoor::OpenDoor()
{
	this->SetActorLocation(EndLocation);
	
		FTimerHandle TimerHandle;
		GetWorld()->GetTimerManager().SetTimer(TimerHandle, [&]()
		{
			SetActorLocation(StartLocation);
		}, 15, false);
}