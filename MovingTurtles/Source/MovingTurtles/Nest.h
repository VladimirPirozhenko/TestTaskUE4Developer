// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Turtle.h"
#include "Nest.generated.h"

UCLASS()
class MOVINGTURTLES_API ANest : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ANest();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable)
	void SpawnTurtle();

	void MoveTurtles(float DeltaTime);

public:

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	class USceneComponent* RootSceneComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	class UStaticMeshComponent* NestMesh;

private:

	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess), Category = Spawn)
	class TSubclassOf<ATurtle> TurtleToSpawn;

	UPROPERTY(VisibleInstanceOnly, Category = Spawn)
	TArray<ATurtle*> SpawnedTurtles;

	UPROPERTY(EditAnywhere,BlueprintReadOnly,meta = (AllowPrivateAccess), Category = Destination)
	FVector DestinationPoint;
};
