// Fill out your copyright notice in the Description page of Project Settings.


#include "InterruptMovingStrategy.h"

// Sets default values for this component's properties
UInterruptMovingStrategy::UInterruptMovingStrategy()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UInterruptMovingStrategy::BeginPlay()
{
	Super::BeginPlay();
	GetWorld()->GetTimerManager().SetTimer(Handle, this, &UInterruptMovingStrategy::Stop, 1.f, true);
}


// Called every frame
void UInterruptMovingStrategy::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

}

void UInterruptMovingStrategy::MoveToDestination(AActor* ActorToMove, FVector Destination, float Speed)
{
	//FTimerHandle Handle;
	////GetWorld()->GetTimerManager().SetTimer(Handle, this, &UInterruptMovingStrategy::MoveForward, 0.5f, false);
	//FTimerDelegate TimerDelegate;
	//TimerDelegate.BindLambda([&]()
	//	{
	//		//GetWorld()->GetTimerManager().SetTimer(Handle, TimerDelegate, 0.5f, false);
	//		Speed = 0;
	//	});
	if (IsInterrupted)
	{
		Speed = 0;
	}
	//FTimerHandle UniqueHandle;
	//FTimerDelegate Del = FTimerDelegate::CreateUObject(this, &UInterruptMovingStrategy::Stop, Speed);
	//Del.BindUFunction(this, FName("Stop"), Speed);

	FVector NewLocation = FMath::VInterpConstantTo(ActorToMove->GetActorLocation(), Destination, FApp::GetDeltaTime(), Speed);
	ActorToMove->SetActorLocation(NewLocation);
}

void UInterruptMovingStrategy::MoveForward()
{
	IsInterrupted = false;
}

void UInterruptMovingStrategy::Stop()
{
	IsInterrupted = true;
	GetWorld()->GetTimerManager().SetTimer(Handle, this, &UInterruptMovingStrategy::MoveForward, 0.5f, false);
}
