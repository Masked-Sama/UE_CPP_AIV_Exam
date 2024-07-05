// Fill out your copyright notice in the Description page of Project Settings.


#include "PlatformerPad.h"

// Sets default values
APlatformerPad::APlatformerPad()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	
	StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PlatformStaticMesh"));
	StaticMesh->SetCollisionProfileName(UCollisionProfile::BlockAll_ProfileName);
	StaticMesh->Mobility = EComponentMobility::Static;
	StaticMesh->SetGenerateOverlapEvents(false);
	StaticMesh->bUseDefaultCollision = true;
	
	RootComponent = StaticMesh;

	FString StaticMeshPath = "/Game/Platformer/Meshes/Pad";
	UStaticMesh* Mesh = LoadObject<UStaticMesh>(nullptr, *StaticMeshPath);
	if (Mesh)
	{
		StaticMesh->SetStaticMesh(Mesh);
	}
	
	TriggerBox = CreateDefaultSubobject<UBoxComponent>(TEXT("TriggerVolume"));
	TriggerBox->SetupAttachment(RootComponent);

	FVector TriggerboxSize = FVector(20,20,20);
	TriggerBox->SetBoxExtent(TriggerboxSize);

	TriggerBox->OnComponentBeginOverlap.AddUniqueDynamic(this, &APlatformerPad::OnOverlapBegin);

	TriggerBox->SetupAttachment(RootComponent);
}

// Called when the game starts or when spawned
void APlatformerPad::BeginPlay()
{
	Super::BeginPlay();
	
}

void APlatformerPad::OnOverlapBegin(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	// check if Actors do not equal nullptr and that
	if (OtherActor && (OtherActor != this))
	{
		if(OtherActor->ActorHasTag("Keycard"))
		{
			CardDetected.Broadcast();
			OtherActor->Destroy();
		}
	}
		
	
}
// Called every frame
void APlatformerPad::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

