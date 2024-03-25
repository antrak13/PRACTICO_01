// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveTransporte.h"
#include "Transporte1.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_API ATransporte1 : public ANaveTransporte
{
	GENERATED_BODY()
private:
	int capacidad;
public:
	ATransporte1();
	FORCEINLINE int GetCapacidad() const { return capacidad; }
	FORCEINLINE void SetCapacidad(int _capacidad) { capacidad = _capacidad; }
protected:
	virtual void Mover();
	virtual void Descargar();
	virtual void Desaparecer();
};