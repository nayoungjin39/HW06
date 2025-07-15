// Fill out your copyright notice in the Description page of Project Settings.


#include "RotationActor.h"

ARotationActor::ARotationActor()
{
	SceneRoot = CreateDefaultSubobject<USceneComponent>(TEXT("SceneRoot"));
	RootComponent = SceneRoot;

	StaticMeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComp"));
	StaticMeshComp->SetupAttachment(RootComponent);

	PrimaryActorTick.bCanEverTick = true;
	RotationSpeed = 90.0f;
}

void ARotationActor::BeginPlay()
{
	Super::BeginPlay();

	OnRotationPickedUp();
}

void ARotationActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if (!FMath::IsNearlyZero(RotationSpeed))
	{
		AddActorLocalRotation(FRotator(0.0f, RotationSpeed * DeltaTime, 0.0f));
	}
}

void ARotationActor::ResetActorPosition()
{
	SetActorLocation(FVector::ZeroVector);
}

float ARotationActor::GetRotationSpeed() const
{
	return RotationSpeed;
}



