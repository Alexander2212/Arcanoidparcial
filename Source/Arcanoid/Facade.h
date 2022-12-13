// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "Facade.generated.h"
#include "ContadorBrick.h"
#include "ContadorEnergia.h"
#include "NumeroVidas.h"


// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UFacade : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class ARCANOID_API IFacade
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	 
	AContadorBrick* mostrarBrick;
	AContadorEnergia* Energia;
	ANumeroVidas* Vidas;
};
