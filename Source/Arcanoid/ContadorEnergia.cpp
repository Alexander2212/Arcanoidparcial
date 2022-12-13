// Fill out your copyright notice in the Description page of Project Settings.


#include "ContadorEnergia.h"

// Sets default values
AContadorEnergia::AContadorEnergia()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AContadorEnergia::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AContadorEnergia::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
}

void AContadorEnergia::mostrarEnergia()
{
	GEngine->AddOnScreenDebugMessage(-2, 15.f, FColor::Yellow, TEXT("Energia disponible: %s"));
}

