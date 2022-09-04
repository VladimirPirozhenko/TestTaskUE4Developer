// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Interactable.h"
#include "SpawnerButton.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnSpawnerButtonPressed);

UCLASS()
class MOVINGTURTLES_API ASpawnerButton : public AActor, public IInteractable
{
	GENERATED_BODY()

public:

	ASpawnerButton();

	UPROPERTY(BlueprintAssignable)
	FOnSpawnerButtonPressed OnSpawnerButtonPressed;

protected:

	virtual void BeginPlay() override;

public:

	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable)
	virtual void OnInteracted() override;

private:
	UPROPERTY(VisibleAnywhere)
	class USceneComponent* RootSceneComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess), Category = Mesh)
	class USkeletalMeshComponent* ButtonMesh;
};
