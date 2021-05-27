// Fill out your copyright notice in the Description page of Project Settings.


#include "GameplayActors/CphFloater.h"

// Sets default values
ACphFloater::ACphFloater()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Make setting meshes possible 
	StaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("CustomStaticMesh"));
	// Set as root component
	RootComponent = StaticMeshComponent;
}

// Called when the game starts or when spawned
void ACphFloater::BeginPlay()
{
	Super::BeginPlay();
	// Do programmatically that you could do by your hands in editor
	SetActorLocation(InitialLocation);
}

// Called every frame
void ACphFloater::Tick(const float DeltaTime)
{
	Super::Tick(DeltaTime);
}
