// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "BaseMovingStrategy.h"
#include "InterruptMovingStrategy.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class MOVINGTURTLES_API UInterruptMovingStrategy : public UBaseMovingStrategy
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UInterruptMovingStrategy();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UFUNCTION()
	void MoveToDestination(AActor* ActorToMove, FVector Destination, float Speed) override;

protected:


	void MoveForward();
	void Stop();
	bool IsInterrupted = false;

private:
	FTimerHandle Handle;
};
