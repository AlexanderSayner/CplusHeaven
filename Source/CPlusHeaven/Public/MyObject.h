// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MyObject.generated.h"

/**
 * Blank object for testing engine functionality
 * @author Alexander
 */
UCLASS(Blueprintable)
class CPLUSHEAVEN_API UMyObject final : public UObject
{
	GENERATED_BODY()

public:
	// Variables
	/** Just variable. The value is set in the constructor */
	UPROPERTY(BlueprintReadOnly, Category="Custom Variables")
	float MyFloat;

	// Constructors
	UMyObject();

	// Functions
	UFUNCTION(BlueprintCallable, Category="Custom Functions")
	void MyFunction();
};
