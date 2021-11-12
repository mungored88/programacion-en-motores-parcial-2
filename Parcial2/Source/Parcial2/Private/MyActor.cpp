// Fill out your copyright notice in the Description page of Project Settings.


#include "MyActor.h"

// Sets default values
AMyActor::AMyActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMyActor::BeginPlay()
{
	Super::BeginPlay();
	CalculateNumber();
	CalculateResult(1, 2);

	int32 Result;
	ReturnResult(Result);
}

// Called every frame
void AMyActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AMyActor::CalculateNumber()
{

}

void AMyActor::CalculateResult(int32 a, int32 b)
{

}

void AMyActor::ReturnResult(int32& c)
{
	//magia
	//mas magia
	c=20;
}
