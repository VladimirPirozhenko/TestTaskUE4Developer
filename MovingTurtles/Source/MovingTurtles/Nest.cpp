// Fill out your copyright notice in the Description page of Project Settings.


#include "Nest.h"

ANest::ANest()
{
	PrimaryActorTick.bCanEverTick = true;

	RootSceneComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root component"));
	RootComponent = RootSceneComponent;

	NestMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Nest mesh"));
	NestMesh->SetupAttachment(RootComponent);

}

void ANest::BeginPlay()
{
	Super::BeginPlay();


}

void ANest::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	//if (IsSpawned)
	MoveTurtles(DeltaTime);
}

void ANest::SpawnTurtle()
{
	UE_LOG(LogTemp, Warning, TEXT("SPAWNING ACTOR"));
	FActorSpawnParameters SpawnParams;
	ATurtle* SpawnedTurtle = GetWorld()->SpawnActor<ATurtle>(TurtleToSpawn, FVector(0), FRotator(0), SpawnParams);
	if (!SpawnedTurtle)
		return;
	SpawnedTurtle->AttachToActor(this, FAttachmentTransformRules::KeepWorldTransform);
	SpawnedTurtle->SetActorRelativeLocation(FVector(0));
	SpawnedTurtle->SetDestinationPoint(DestinationPoint);
	SpawnedTurtles.Add(SpawnedTurtle);
}

void ANest::MoveTurtles(const float DeltaTime)
{
	
	//for (auto& turtle : SpawnedTurtles)
	//{
	//	turtle->MoveToDestination(DestinationPoint);
	//}
	
}
