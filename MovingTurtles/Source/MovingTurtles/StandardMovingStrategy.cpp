// Fill out your copyright notice in the Description page of Project Settings.


#include "StandardMovingStrategy.h"

UStandardMovingStrategy::UStandardMovingStrategy()
{
	PrimaryComponentTick.bCanEverTick = true;

}


void UStandardMovingStrategy::BeginPlay()
{
	Super::BeginPlay();	
}

void UStandardMovingStrategy::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);


}

void UStandardMovingStrategy::MoveToDestination(AActor* ActorToMove, FVector Destination, float Speed)
{
	FVector NewLocation = FMath::VInterpConstantTo(ActorToMove->GetActorLocation(), Destination, FApp::GetDeltaTime(), Speed);
	ActorToMove->SetActorLocation(NewLocation);
}


