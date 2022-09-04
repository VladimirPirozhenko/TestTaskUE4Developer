// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Turtle.h"
#include "Nest.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnTurtleSpawned);

UCLASS()
class MOVINGTURTLES_API ANest : public AActor
{
	GENERATED_BODY()

public:

	ANest();

	UPROPERTY(BlueprintAssignable)
	FOnTurtleSpawned OnTurtleSpawned;

protected:

	virtual void BeginPlay() override;

public:

	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable)
	void SpawnTurtle();

public:

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	class USceneComponent* RootSceneComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	class UStaticMeshComponent* NestMesh;

private:

	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess), Category = Spawn)
	class TSubclassOf<ATurtle> TurtleToSpawn;

	UPROPERTY(EditAnywhere,BlueprintReadOnly,meta = (AllowPrivateAccess), Category = Destination)
	FVector DestinationPoint;
};
