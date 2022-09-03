// Fill out your copyright notice in the Description page of Project Settings.


#include "SpawnerButton.h"

// Sets default values
ASpawnerButton::ASpawnerButton()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	RootSceneComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root component"));
	RootComponent = RootSceneComponent;

	ButtonMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Button mesh"));
	ButtonMesh->SetupAttachment(RootComponent);

}

// Called when the game starts or when spawned
void ASpawnerButton::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void ASpawnerButton::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ASpawnerButton::OnInteracted()
{
	UE_LOG(LogTemp, Warning, TEXT("INTERACT WITH A BUTTON"));
	OnSpawnerButtonPressed.Broadcast();
}

