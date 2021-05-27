// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CphFloater.generated.h"

/**
 * Sandbox actor which can do some interesting things 
 * @author Alexander
 */
UCLASS()
class CPLUSHEAVEN_API ACphFloater final : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ACphFloater();

	// Simple component for attach 3d model to this actor
	UPROPERTY(VisibleAnywhere, Category="Actor Mesh Components")
	UStaticMeshComponent* StaticMeshComponent;

	// Initial actors location
	UPROPERTY(EditInstanceOnly, BlueprintReadWrite, Category="FloaterVectors")
	FVector InitialLocation = FVector(0.0f);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(const float DeltaTime) override;
};
