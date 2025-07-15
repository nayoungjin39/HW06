// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MovementActorY.generated.h"

UCLASS()
class HW_06_API AMovementActorY : public AActor
{
	GENERATED_BODY()

public:
	AMovementActorY();

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement|Components")
	USceneComponent* SceneRoot;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement|Components")
	UStaticMeshComponent* StaticMeshComp;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement|Speed")
	float MovementSpeed;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement|Speed")

	float MoveDistance;

	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;
	FVector InitialLocation;


	UFUNCTION(BlueprintCallable, Category = "Movement|Components")
	void ResetActorPosition();

	UFUNCTION(BlueprintCallable, Category = "Movement|Components")
	float GetMovementSpeed() const;

	UFUNCTION(BlueprintImplementableEvent, Category = "Movement|Event")
	void OnMovementPickedUp();
};
