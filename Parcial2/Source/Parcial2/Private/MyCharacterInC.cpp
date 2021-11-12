// Fill out your copyright notice in the Description page of Project Settings.


#include "MyCharacterInC.h"


// Sets default values
AMyCharacterInC::AMyCharacterInC()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMyCharacterInC::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyCharacterInC::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AMyCharacterInC::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	//como tiene * es un puntero, entonces para acceder a propiedades o fnes de puntero usamos -> en vez de .
	PlayerInputComponent ->BindAxis("MoveForward", this, &AMyCharacterInC::MoveForwardBackwards); //sin el & no funciona porque debe acceder a la reserva en memoria de la fn, tampoco lleva parámetros ni paréntesis aca
	PlayerInputComponent->BindAxis("MoveRight", this, &AMyCharacterInC::MoveSideways);
	PlayerInputComponent->BindAction("Jump", EInputEvent::IE_Pressed, this, &AMyCharacterInC::Salto);
	PlayerInputComponent->BindAxis("MouseX", this, &AMyCharacterInC::MouseX);
	PlayerInputComponent->BindAxis("MouseY", this, &AMyCharacterInC::MouseY);
}

void AMyCharacterInC::MoveForwardBackwards(float axisValue)
{
	//if (GEngine)
	//{
	//	GEngine ->AddOnScreenDebugMessage(-1, 5.0f, FColor::Yellow, "MovingForward!");
	//}

	FRotator PlayerRotation = FRotator(0, GetActorRotation().Yaw, 0);// los ejes son: Y, Z , X	
	FVector FowardVector = UKismetMathLibrary::GetForwardVector(PlayerRotation);
	AddMovementInput(FowardVector, axisValue);

	VerticalAxis = axisValue;
}

void AMyCharacterInC::MoveSideways(float axisValue)
{
	FRotator PlayerRotation = FRotator(0, GetActorRotation().Yaw, 0);
	FVector RightVector = UKismetMathLibrary::GetRightVector(PlayerRotation);
	AddMovementInput(RightVector, axisValue);

	HorizontalAxis= axisValue;
	
}

void AMyCharacterInC::Salto()
{
	Jump();
}

void AMyCharacterInC::MouseX(float axisValue)
{
	AddControllerYawInput(axisValue);
}

void AMyCharacterInC::MouseY(float axisValue)
{
	AddControllerPitchInput(axisValue);
}
