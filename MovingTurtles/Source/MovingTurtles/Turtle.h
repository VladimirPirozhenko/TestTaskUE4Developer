// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BaseMovingStrategy.h"
#include "Turtle.generated.h"

UCLASS()
class MOVINGTURTLES_API ATurtle : public AActor
{
	GENERATED_BODY()
	
public:	

	ATurtle();

protected:

	virtual void BeginPlay() override;

public:	

	virtual void Tick(float DeltaTime) override;

	void MoveToDestination();

	void SetDestinationPoint(FVector Destination) { this->DestinationPoint = Destination; }

	UFUNCTION(BlueprintGetter)
	float GetSpeed() { return Speed; }

private:

	UPROPERTY(VisibleAnywhere)
	class USceneComponent* RootSceneComponent;

	UPROPERTY(VisibleAnywhere, Category = Mesh)
	class UStaticMeshComponent* TutleMesh;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess), Category = Movement)
	class TSubclassOf<UBaseMovingStrategy> MovingStrategy;

	UPROPERTY(EditDefaultsOnly, BlueprintGetter = GetSpeed, Category = Movement)
	float Speed = 15;

	UPROPERTY(VisibleInstanceOnly)
	FVector DestinationPoint;
};
