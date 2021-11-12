// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyActor.generated.h"

UCLASS()
class PARCIAL2_API AMyActor : public AActor
{
	GENERATED_BODY()

public:
	float Life = 100;

	//fn normal
	void CalculateNumber();
	
	//fn que recibe parametro
	void CalculateResult(int32 a, int32 b);

	//fn que devuelve algo
	void ReturnResult(int32& c);


public:	
	// Sets default values for this actor's properties
	AMyActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;


};
