// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Turtle.generated.h"

UCLASS(showCategories = (Movement))
class MOVINGTURTLES_API ATurtle : public AActor
{
	GENERATED_BODY()
	
public:	

	ATurtle();

protected:

	virtual void BeginPlay() override;

public:	

	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintGetter)
	float GetSpeed() { return Speed; }

private:

	UPROPERTY(VisibleAnywhere)
	class USceneComponent* RootSceneComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess), Category = Mesh)
	class USkeletalMeshComponent* TutleMesh;

	UPROPERTY(EditAnywhere, BlueprintGetter = GetSpeed, Category = Movement)
	float Speed = 15;

};
