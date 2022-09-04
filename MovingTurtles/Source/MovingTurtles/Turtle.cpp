// Fill out your copyright notice in the Description page of Project Settings.

#include "Turtle.h"

ATurtle::ATurtle()
{
	PrimaryActorTick.bCanEverTick = true;
	RootSceneComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root component"));
	RootComponent = RootSceneComponent;

	TutleMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Turtle's mesh"));
	TutleMesh->SetupAttachment(RootComponent);


}

void ATurtle::BeginPlay()
{
	Super::BeginPlay();
}

void ATurtle::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
