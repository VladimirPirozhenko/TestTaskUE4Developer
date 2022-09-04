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
}

void ANest::SpawnTurtle()
{
	OnTurtleSpawned.Broadcast();
}

