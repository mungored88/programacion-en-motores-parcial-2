// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"

#include "Kismet/KismetMathLibrary.h"


//siempre los includes tienen que ir arriba de esta linea
#include "MyCharacterInC.generated.h"



UCLASS()
class PARCIAL2_API AMyCharacterInC : public ACharacter
{
	GENERATED_BODY()


public:
	// Sets default values for this character's properties
	AMyCharacterInC();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;


	//Movement
	void MoveForwardBackwards(float axisValue);
	void MoveSideways(float axisValue);
	
	//Jump
	void Salto();

	//Mouaw
	void MouseX(float axisValue);
	
	void MouseY(float axisValue);


	//Variables
	UPROPERTY(EditAnywhere, BlueprintReadWrite) //atributo, por eso va sin ; es para poder ver la variable desde blueprints
	float VerticalAxis;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float HorizontalAxis;
};
