// Fill out your copyright notice in the Description page of Project Settings.


#include "IncreaseVelocity.h"

void AIncreaseVelocity::BeginPlay()
{
	Super::BeginPlay();
	//Set the ingredients
	PowerName = "capsula de velocidad";
}

void AIncreaseVelocity::construir()
{
	//Log the brewing type
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, TEXT("se construlle"));
	
}