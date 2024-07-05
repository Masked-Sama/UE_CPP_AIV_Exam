// Fill out your copyright notice in the Description page of Project Settings.


#include "CheckPoint.h"
#include "Components/StaticMeshComponent.h"
#include "Components/BoxComponent.h"
#include <Kismet/GameplayStatics.h>

#include "ICollectibles.h"
#include "PlatformSaveGame.h"

// Sets default values
ACheckPoint::ACheckPoint()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PlatformStaticMesh"));
	MeshComponent->Mobility = EComponentMobility::Static;
	MeshComponent->SetGenerateOverlapEvents(false);
	MeshComponent->bUseDefaultCollision = true;

	RootComponent = MeshComponent;
	
	FString StaticMeshPath = "/Game/Platformer/Meshes/Platform";
	UStaticMesh* Mesh = LoadObject<UStaticMesh>(nullptr, *StaticMeshPath);
	if (Mesh)
	{
		MeshComponent->SetStaticMesh(Mesh);
	}
	
	TriggerVolume = CreateDefaultSubobject<UBoxComponent>(TEXT("TriggerVolume"));
	TriggerVolume->SetupAttachment(RootComponent);
	TriggerVolume->SetBoxExtent(FVector(100,100,100));
	TriggerVolume->SetRelativeLocation(FVector(MeshComponent->GetComponentLocation().X, MeshComponent->GetComponentLocation().Y,MeshComponent->GetComponentLocation().Z + 100));

	TriggerVolume->OnComponentBeginOverlap.AddUniqueDynamic(this, &ACheckPoint::OnOverlapBegin);
	TriggerVolume->OnComponentEndOverlap.AddUniqueDynamic(this, &ACheckPoint::OnOverlapEnd);
}

// Called when the game starts or when spawned
void ACheckPoint::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACheckPoint::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ACheckPoint::OnOverlapBegin(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	// check if Actors do not equal nullptr and that 
	if (OtherActor && (OtherActor != this)) {
		SaveGame(OtherActor, "slot0", 0);
	}
}
void ACheckPoint::OnOverlapEnd(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	// check if Actors do not equal nullptr and that 
	if (OtherActor && (OtherActor != this)) {
		// print to screen using above defined method when actor enters trigger box

	}
}
void ACheckPoint::SaveGame(AActor* Actor, FString SlotName, int32 UserIndex)
{
	USaveGame* SaveGame = UGameplayStatics::CreateSaveGameObject(UPlatformSaveGame::StaticClass());
	if (SaveGame)
	{
		//ACharacter* character = UGameplayStatics::GetPlayerCharacter(world, 0);
		UPlatformSaveGame* PlatformerSaveGame = Cast<UPlatformSaveGame>(SaveGame);
		if (PlatformerSaveGame)
		{

			PlatformerSaveGame->PlayerLocation = Actor->GetActorLocation();
			PlatformerSaveGame->PlayerRotator = Actor->GetActorRotation();
			PlatformerSaveGame->PlayerScale = Actor->GetActorScale();

			UGameplayStatics::SaveGameToSlot(PlatformerSaveGame, SlotName, UserIndex);
		}
	}
}

