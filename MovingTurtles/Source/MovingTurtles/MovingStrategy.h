// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "MovingStrategy.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UMovingStrategy : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class MOVINGTURTLES_API IMovingStrategy
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:

	UFUNCTION()
	virtual void MoveToDestination(AActor* ActorToMove,FVector Destination, float Speed) = 0;
};
