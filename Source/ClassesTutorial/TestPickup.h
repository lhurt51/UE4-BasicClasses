// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Actor.h"
#include "TestPickup.generated.h"

UCLASS()
class CLASSESTUTORIAL_API ATestPickup : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATestPickup();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	//* The static mesh for the pickup */
	UPROPERTY(EditAnywhere)
	UStaticMeshComponent* SM_MyMesh;
	
};
