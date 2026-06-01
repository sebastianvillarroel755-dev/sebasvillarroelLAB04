// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "sebasvillarroelLAB04GameMode.generated.h"

template <typename T>
class Nodo
{
public:
	T Dato;
	Nodo<T>* Siguiente;

	Nodo(T Valor)
	{
		Dato = Valor;
		Siguiente = nullptr;
	}
};

template <typename T>
class TLista
{
public:
	Nodo<T>* Cabeza;

	TLista()
	{
		Cabeza = nullptr;
	}

	void Agregar(T Valor)
	{
		Nodo<T>* Nuevo = new Nodo<T>(Valor);

		if (!Cabeza)
		{
			Cabeza = Nuevo;
			return;
		}

		Nodo<T>* Aux = Cabeza;

		while (Aux->Siguiente)
		{
			Aux = Aux->Siguiente;
		}

		Aux->Siguiente = Nuevo;
	}

	~TLista()
	{
		Nodo<T>* Actual = Cabeza;

		while (Actual)
		{
			Nodo<T>* Siguiente = Actual->Siguiente;
			delete Actual;
			Actual = Siguiente;
		}
	}
};

UCLASS(minimalapi)
class AsebasvillarroelLAB04GameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	AsebasvillarroelLAB04GameMode();

protected:
	virtual void BeginPlay() override;

private:
	TLista<FVector> ListaBloques;
};