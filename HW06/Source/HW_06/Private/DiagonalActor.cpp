// Fill out your copyright notice in the Description page of Project Settings.


#include "DiagonalActor.h"

ADiagonalActor::ADiagonalActor()
{
	PrimaryActorTick.bCanEverTick = true;

	SceneRoot = CreateDefaultSubobject<USceneComponent>(TEXT("SceneRoot"));
	RootComponent = SceneRoot;

	StaticMeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComp"));
	StaticMeshComp->SetupAttachment(RootComponent);

	MovementSpeed = 1.5f;
	MoveDistance = 100.0f;
}

void ADiagonalActor::BeginPlay()
{
	Super::BeginPlay();

	InitialLocation = GetActorLocation();

	OnMovementPickedUp();
}

void ADiagonalActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);


	float SineValue = FMath::Sin(GetWorld()->GetTimeSeconds() * MovementSpeed);
	FVector NewLocation = InitialLocation;
	NewLocation.X += MoveDistance * SineValue;
	NewLocation.Z += MoveDistance * SineValue;
	SetActorLocation(NewLocation);
}

void ADiagonalActor::ResetActorPosition()
{

	SetActorLocation(InitialLocation);
}


float ADiagonalActor::GetMovementSpeed() const
{
	return MovementSpeed;
}

