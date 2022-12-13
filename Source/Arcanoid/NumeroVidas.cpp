// Fill out your copyright notice in the Description page of Project Settings.


#include "NumeroVidas.h"
#include "Paddle.h"

// Sets default values
ANumeroVidas::ANumeroVidas()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ANumeroVidas::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ANumeroVidas::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ANumeroVidas::mostrarvida()
{
	
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, TEXT("Numero de vidas: %s"));
}

