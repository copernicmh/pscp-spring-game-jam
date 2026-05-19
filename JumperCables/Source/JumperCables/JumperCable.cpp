// Fill out your copyright notice in the Description page of Project Settings.


#include "JumperCable.h"

// Sets default values
AJumperCable::AJumperCable()
{
	// Set up root component
	RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponenet"));

	// Set up visible component 
	VisibleComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("VisibleComponent"));
	VisibleComponent->SetupAttachment(RootComponent);

 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AJumperCable::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AJumperCable::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AJumperCable::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

