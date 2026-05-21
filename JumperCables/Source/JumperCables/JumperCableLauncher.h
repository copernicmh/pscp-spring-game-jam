// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "JumperCable.h"
#include "LeftJumperCable.h"
#include "JumperCableLauncher.generated.h"

UCLASS()
class JUMPERCABLES_API AJumperCableLauncher : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AJumperCableLauncher();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	TObjectPtr<USceneComponent> CableEndPoint;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
