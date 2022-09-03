// Fill out your copyright notice in the Description page of Project Settings.

#include "Turtle.h"

ATurtle::ATurtle()
{
	PrimaryActorTick.bCanEverTick = true;
	RootSceneComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root component"));
	RootComponent = RootSceneComponent;

	TutleMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Turtle's mesh"));
	TutleMesh->SetupAttachment(RootComponent);

}

void ATurtle::BeginPlay()
{
	Super::BeginPlay();
	
}

void ATurtle::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	MoveToDestination();
}

void ATurtle::MoveToDestination()
{
	if (!MovingStrategy)
		return;
	MovingStrategy->GetDefaultObject<UBaseMovingStrategy>()->MoveToDestination(this, DestinationPoint, Speed);
}

