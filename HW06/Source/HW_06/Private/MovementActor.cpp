// Fill out your copyright notice in the Description page of Project Settings.


#include "MovementActor.h"

AMovementActor::AMovementActor()
{
	PrimaryActorTick.bCanEverTick = true;

	SceneRoot = CreateDefaultSubobject<USceneComponent>(TEXT("SceneRoot"));
	RootComponent = SceneRoot;

	StaticMeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComp"));
	StaticMeshComp->SetupAttachment(RootComponent);

	MovementSpeed = 1.5f;
	MoveDistance = 100.0f;
}

void AMovementActor::BeginPlay()
{
	Super::BeginPlay();

	InitialLocation = GetActorLocation();

	OnMovementPickedUp();
}

void AMovementActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);


	float SineValue = FMath::Sin(GetWorld()->GetTimeSeconds() * MovementSpeed);
	FVector NewLocation = InitialLocation;
	NewLocation.X += MoveDistance * SineValue;
	SetActorLocation(NewLocation);
}

void AMovementActor::ResetActorPosition()
{
	
	SetActorLocation(InitialLocation);
}


float AMovementActor::GetMovementSpeed() const
{
	return MovementSpeed;
}
