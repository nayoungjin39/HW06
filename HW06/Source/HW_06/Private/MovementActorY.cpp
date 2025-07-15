// Fill out your copyright notice in the Description page of Project Settings.


#include "MovementActorY.h"

AMovementActorY::AMovementActorY()
{
	PrimaryActorTick.bCanEverTick = true;

	SceneRoot = CreateDefaultSubobject<USceneComponent>(TEXT("SceneRoot"));
	RootComponent = SceneRoot;

	StaticMeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComp"));
	StaticMeshComp->SetupAttachment(RootComponent);

	MovementSpeed = 1.5f;
	MoveDistance = 100.0f;
}

void AMovementActorY::BeginPlay()
{
	Super::BeginPlay();

	InitialLocation = GetActorLocation();

	OnMovementPickedUp();
}

void AMovementActorY::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);


	float SineValue = FMath::Sin(GetWorld()->GetTimeSeconds() * MovementSpeed);
	FVector NewLocation = InitialLocation;
	NewLocation.Y += MoveDistance * SineValue;
	SetActorLocation(NewLocation);
}

void AMovementActorY::ResetActorPosition()
{

	SetActorLocation(InitialLocation);
}


float AMovementActorY::GetMovementSpeed() const
{
	return MovementSpeed;
}

