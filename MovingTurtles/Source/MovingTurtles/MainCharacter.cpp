// Fill out your copyright notice in the Description page of Project Settings.


#include "MainCharacter.h"

#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"
#include "DrawDebugHelpers.h"
#include "Interactable.h"
// Sets default values
AMainCharacter::AMainCharacter()
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	GetCapsuleComponent()->InitCapsuleSize(40.f, 95.f);

	TurnRate = 45.0f;
	LookUpRate = 45.0f;
	MaxRayLength = 200.0f;

	FPSCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FPS Camera"));
	FPSCamera->SetupAttachment(GetCapsuleComponent());
	FPSCamera->AddRelativeLocation(FVector(-30.0f, 2.0f, 65.0f));
	FPSCamera->bUsePawnControlRotation = true;

	HandsMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Character's hands mesh"));
	HandsMesh->SetOnlyOwnerSee(true);
	HandsMesh->SetupAttachment(FPSCamera);
	HandsMesh->bCastDynamicShadow = false;
	HandsMesh->CastShadow = false;
}

// Called when the game starts or when spawned
void AMainCharacter::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void AMainCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AMainCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	PlayerInputComponent->BindAction("Interact", IE_Pressed, this, &AMainCharacter::Interact);

	PlayerInputComponent->BindAxis("MoveForward", this, &AMainCharacter::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &AMainCharacter::MoveRight);

	PlayerInputComponent->BindAxis("Turn", this, &AMainCharacter::TurnAtRate);
	PlayerInputComponent->BindAxis("LookUp", this, &AMainCharacter::LookAtRate);
}

void AMainCharacter::Interact()
{
	FHitResult Hit;
	FVector Origin = FPSCamera->GetComponentLocation();
	FQuat Rot = FPSCamera->GetComponentRotation().Quaternion();
	FVector Destination = Origin + (FPSCamera->GetForwardVector() * MaxRayLength);

	bool bHit = GetWorld()->SweepSingleByChannel(Hit, Origin, Destination, FQuat::Identity, ECollisionChannel::ECC_Visibility, FCollisionShape::MakeSphere(RaySphereRadius));

	if (!bHit)
		return;

	AActor* HitActor = Hit.GetActor();

	if (!HitActor)
		return;

	IInteractable* Interactable = Cast<IInteractable>(HitActor);

	if (!Interactable)
		return;

	Interactable->OnInteracted();

	DrawDebugLine(GetWorld(), Origin, Destination, FColor::Green, true, 1.f);
}



void AMainCharacter::MoveForward(float Value)
{
	if (Value != 0.0f)
	{
		AddMovementInput(GetActorForwardVector(), Value);
	}
}

void AMainCharacter::MoveRight(float Value)
{
	if (Value != 0.0f)
	{
		AddMovementInput(GetActorRightVector(), Value);
	}
}

void AMainCharacter::TurnAtRate(float Rate)
{
	AddControllerYawInput(Rate * TurnRate * GetWorld()->GetDeltaSeconds());
}

void AMainCharacter::LookAtRate(float Rate)
{
	AddControllerPitchInput(Rate * LookUpRate * GetWorld()->GetDeltaSeconds());
}

