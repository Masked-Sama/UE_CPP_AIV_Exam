// Fill out your copyright notice in the Description page of Project Settings.


#include "Collectible.h"
#include "Components/BoxComponent.h"
#include "ICollectibles.h"


// Sets default values
ACollectible::ACollectible()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
	//bad system, but works
	MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PlatformStaticMesh"));
	MeshComponent->SetCollisionProfileName(UCollisionProfile::BlockAll_ProfileName);
	MeshComponent->Mobility = EComponentMobility::Movable;
	MeshComponent->SetGenerateOverlapEvents(false);
	MeshComponent->bUseDefaultCollision = true;

	RootComponent = MeshComponent;
	
	FString StaticMeshPath = "/Game/Platformer/Meshes/Collectible";
	UStaticMesh* Mesh = LoadObject<UStaticMesh>(nullptr, *StaticMeshPath);
	if (Mesh)
	{
		MeshComponent->SetStaticMesh(Mesh);
	}
	TriggerVolume = CreateDefaultSubobject<UBoxComponent>(TEXT("TriggerVolume"));
	TriggerVolume->SetupAttachment(RootComponent);

	TriggerVolume->OnComponentBeginOverlap.AddUniqueDynamic(this, &ACollectible::OnOverlapBegin);
}

// Called when the game starts or when spawned
void ACollectible::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACollectible::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ACollectible::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (OtherActor && (OtherActor != this)) {
		bool result = OtherActor->GetClass()->ImplementsInterface(UICollectibles::StaticClass());

		result = OtherActor->Implements<UICollectibles>();

		IICollectibles* InterfaceCast = Cast<IICollectibles>(OtherActor);
    	
		if(InterfaceCast)
		{
			InterfaceCast->CollectMe();
		}
		Destroy();
	}
}

