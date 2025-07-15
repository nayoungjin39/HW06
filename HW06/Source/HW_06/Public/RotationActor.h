// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "RotationActor.generated.h"

UCLASS()
class HW_06_API ARotationActor : public AActor
{
	GENERATED_BODY()
	
public:	
	ARotationActor();

protected:	

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Rotation|Components")
	USceneComponent* SceneRoot;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Rotation|Components")
	UStaticMeshComponent* StaticMeshComp;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Rotation|Speed")
	float RotationSpeed;

	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;

	
	UFUNCTION(BlueprintCallable, Category = "Rotation|Components")
	void ResetActorPosition();

	UFUNCTION(BlueprintCallable, Category = "Rotation|Components")
	float GetRotationSpeed() const;

	UFUNCTION(BlueprintImplementableEvent, Category = "Rotation|Event")
	void OnRotationPickedUp();
};
