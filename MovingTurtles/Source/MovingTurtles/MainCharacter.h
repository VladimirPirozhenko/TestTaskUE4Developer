// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "MainCharacter.generated.h"

UCLASS()
class MOVINGTURTLES_API AMainCharacter : public ACharacter
{
	GENERATED_BODY()

public:

	AMainCharacter();

protected:

	virtual void BeginPlay() override;

public:
	
	virtual void Tick(float DeltaTime) override;

	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

public:

	UPROPERTY(VisibleDefaultsOnly, Category = Mesh)
	class USkeletalMeshComponent* HandsMesh;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera)
	class UCameraComponent* FPSCamera;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = Camera)
	float TurnRate = 45.0f;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = Camera)
	float LookUpRate = 45.0f;
protected:

	void MoveForward(float Value);
	void MoveRight(float Value);

	void TurnAtRate(float Rate);
	void LookAtRate(float Rate);

private:

	void Interact();

private:

	UPROPERTY(EditAnywhere, Category = Raycast)
	float MaxRayLength = 200.0f;

	UPROPERTY(EditAnywhere, Category = Raycast)
	float RaySphereRadius = 5.0f;
};