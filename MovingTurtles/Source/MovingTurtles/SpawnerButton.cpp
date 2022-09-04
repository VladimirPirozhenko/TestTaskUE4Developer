// Fill out your copyright notice in the Description page of Project Settings.


#include "SpawnerButton.h"

ASpawnerButton::ASpawnerButton()
{
	PrimaryActorTick.bCanEverTick = true;

	RootSceneComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root component"));
	RootComponent = RootSceneComponent;

	ButtonMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Button mesh"));
	ButtonMesh->SetupAttachment(RootComponent);

}

void ASpawnerButton::BeginPlay()
{
	Super::BeginPlay();

}

void ASpawnerButton::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ASpawnerButton::OnInteracted()
{
	OnSpawnerButtonPressed.Broadcast();
}

