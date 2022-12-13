// Fill out your copyright notice in the Description page of Project Settings.


#include "ContadorBrick.h"

// Sets default values
AContadorBrick::AContadorBrick()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AContadorBrick::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AContadorBrick::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
}

void AContadorBrick::mostrarBrick()
{
	GEngine->AddOnScreenDebugMessage(-3, 15.f, FColor::Yellow, TEXT("Numero de bricks destruidos: %s"));
}

