// Fill out your copyright notice in the Description page of Project Settings.

#include "MyPlatformerChar.h"
#include "GameFramework/Controller.h"
#include <Kismet/GameplayStatics.h>
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "InputActionValue.h"
#include "MyTextRenderActor.h"
#include "UpdateCollectiblesCounter.h"
#include "PlatformSaveGame.h"

// Sets default values
AMyPlatformerChar::AMyPlatformerChar()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	
	//Camera set up
	CameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("FirstPersonCamera"));
	check(CameraComponent != nullptr);

	// Attach the camera component to our capsule component.
	CameraComponent->SetupAttachment(CastChecked<USceneComponent, UCapsuleComponent>(GetCapsuleComponent()));

	// Position the camera slightly above the eyes.
	CameraComponent->SetRelativeLocation(FVector(-85.0f, 0.0f, 50.0f + BaseEyeHeight));

	// Enable the pawn to control camera rotation.
	CameraComponent->bUsePawnControlRotation = true;

}

// Called when the game starts or when spawned
void AMyPlatformerChar::BeginPlay()
{
	Super::BeginPlay();

	//Add Input Mapping Context
	if (APlayerController* PlayerController = Cast<APlayerController>(Controller))
	{
		if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PlayerController->GetLocalPlayer()))
		{
			Subsystem->AddMappingContext(PlatformMappingContext, 0);
		}
	}
	
	AActor* FoundActor;
	FoundActor = UGameplayStatics::GetActorOfClass(GetWorld(), AMyTextRenderActor::StaticClass());
	   if (FoundActor)
	{
	    RenderActor = Cast<AMyTextRenderActor>(FoundActor);
	}

}

// Called every frame
void AMyPlatformerChar::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

// Called to bind functionality to input
void AMyPlatformerChar::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	// Set up action bindings
	if (UEnhancedInputComponent* EnhancedInputComponent = Cast<UEnhancedInputComponent>(PlayerInputComponent)) {
		
		// Jumping
		EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Started, this, &ACharacter::Jump);
		EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Completed, this, &ACharacter::StopJumping);

		// Moving
		EnhancedInputComponent->BindAction(MoveAction, ETriggerEvent::Triggered, this, &AMyPlatformerChar::Move);

		// Looking
		EnhancedInputComponent->BindAction(LookAction, ETriggerEvent::Triggered, this, &AMyPlatformerChar::Look);

		EnhancedInputComponent->BindAction(InteractAction, ETriggerEvent::Triggered, this, &AMyPlatformerChar::Interact);
		
		EnhancedInputComponent->BindAction(TeleportAction, ETriggerEvent::Triggered, this, &AMyPlatformerChar::Teleport);
	}
}

void AMyPlatformerChar::Move(const FInputActionValue& Value)
{
	// input is a Vector2D
	FVector2D MovementVector = Value.Get<FVector2D>();

	if (Controller != nullptr)
	{
		// find out which way is forward
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);

		// get forward vector
		const FVector ForwardDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
	
		// get right vector 
		const FVector RightDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);

		// add movement 
		AddMovementInput(ForwardDirection, MovementVector.Y);
		AddMovementInput(RightDirection, MovementVector.X);
	}
}

void AMyPlatformerChar::Look(const FInputActionValue& Value)
{
	// input is a Vector2D
	FVector2D LookAxisVector = Value.Get<FVector2D>();

	if (Controller != nullptr)
	{
		// add yaw and pitch input to controller
		AddControllerYawInput(LookAxisVector.X);
		AddControllerPitchInput(LookAxisVector.Y);
	}
}

void AMyPlatformerChar::Interact(const FInputActionValue& Value)
{
	
	
	FVector StartPoint = CameraComponent->GetComponentLocation();
	FVector EndPoint = StartPoint + CameraComponent->GetForwardVector() * SweepDistance;
	TArray<FHitResult> HitResultArray;
	FHitResult HitResult;

	FCollisionQueryParams QueryParams;
	QueryParams.AddIgnoredActor(this);
	
	UWorld* World = GetWorld();
	
	if(World->LineTraceSingleByChannel(HitResult, StartPoint, EndPoint, ECC_Visibility, QueryParams))
	{
		hitted = HitResult.GetActor();
		if(HitResult.GetActor())
		{
			if(hitted->ActorHasTag("Card"))
			{
				FVector location = RootComponent->GetRelativeLocation();
				
				hitted->AttachToComponent(RootComponent, FAttachmentTransformRules::SnapToTargetNotIncludingScale);
				hitted->SetActorLocation(FVector(location.X + 60.f, location.Y -5.f, location.Z + 10.f));
			}
			
		}
	}
	DrawDebugLine(World, StartPoint, EndPoint, FColor::Green);
}
void AMyPlatformerChar::StopInteract(AActor* target)
{
	target->DetachFromActor(FDetachmentTransformRules::KeepRelativeTransform);
}

void AMyPlatformerChar::Teleport(const FInputActionValue& Value)
{
	UPlatformSaveGame* LoadGame = Cast<UPlatformSaveGame>(UGameplayStatics::LoadGameFromSlot("slot0", 0));
	if (LoadGame)
	{
		this->SetActorLocation(LoadGame->PlayerLocation);
		this->SetActorRotation(LoadGame->PlayerRotator);
		this->SetActorScale3D(LoadGame->PlayerScale);
	}
}

void AMyPlatformerChar::CollectMe()
{
	CollectiblesCollected += 1;
	
	bool result = RenderActor->GetClass()->ImplementsInterface(UUpdateCollectiblesCounter::StaticClass());

	result = RenderActor->Implements<UUpdateCollectiblesCounter>();

	IUpdateCollectiblesCounter* InterfaceCast = Cast<IUpdateCollectiblesCounter>(RenderActor);
    	
	if(InterfaceCast)
	{
		InterfaceCast->UpdateCounter(CollectiblesCollected);
	}
}
