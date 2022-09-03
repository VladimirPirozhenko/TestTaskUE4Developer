// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "MovingStrategy.h"
#include "BaseMovingStrategy.generated.h"


UCLASS(Abstract,ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class MOVINGTURTLES_API UBaseMovingStrategy : public UActorComponent, public IMovingStrategy
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UBaseMovingStrategy();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	virtual void MoveToDestination(AActor* ActorToMove, FVector Destination, float Speed)  PURE_VIRTUAL(UBaseMovingStrategy::MoveToDestination, ;);
	/*UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = Movement)
		virtual void MoveToDestination(FVector Origin, FVector Destination, float Speed);*/
};
