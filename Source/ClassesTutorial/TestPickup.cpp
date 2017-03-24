// Fill out your copyright notice in the Description page of Project Settings.

#include "ClassesTutorial.h"
#include "TestPickup.h"


// Sets default values
ATestPickup::ATestPickup()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SM_MyMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MyMesh"));
}

// Called when the game starts or when spawned
void ATestPickup::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATestPickup::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

