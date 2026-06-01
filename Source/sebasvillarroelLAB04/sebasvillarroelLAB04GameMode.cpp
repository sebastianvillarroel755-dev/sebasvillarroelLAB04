#include "sebasvillarroelLAB04GameMode.h"
#include "Bloque.h"
#include "Enemigo.h"
#include "Engine/World.h"
#include "Engine/Engine.h"

AsebasvillarroelLAB04GameMode::AsebasvillarroelLAB04GameMode()
{
}

void AsebasvillarroelLAB04GameMode::BeginPlay()
{
	Super::BeginPlay();

	for (int32 Fila = 0; Fila < 12; Fila++)
	{
		for (int32 Col = 0; Col < 10; Col++)
		{
			const bool EsBorde = Fila == 0 || Fila == 11 || Col == 0 || Col == 9;
			const bool EsEntrada = Fila == 0 && (Col == 4 || Col == 5);

			if (EsBorde && !EsEntrada)
			{
				const float PosX = -600.0f + (Fila * 100.0f);
				const float PosY = -450.0f + (Col * 100.0f);

				ListaBloques.Agregar(FVector(PosX, PosY, 100.0f));
			}
		}
	}

	float InternosX[] = { -350.0f, -350.0f, 0.0f, 0.0f, 350.0f, 350.0f, -150.0f, 150.0f, 10.0f };
	float InternosY[] = { -250.0f, 250.0f, -300.0f, 300.0f, -250.0f, 250.0f, 0.0f, 0.0f, -100.0f };

	for (int32 i = 0; i < 9; i++)
	{
		ListaBloques.Agregar(FVector(InternosX[i], InternosY[i], 100.0f));
	}

	Nodo<FVector>* Actual = ListaBloques.Cabeza;
	int32 ID = 0;

	while (Actual)
	{
		FActorSpawnParameters SpawnParams;
		SpawnParams.Name = FName(*FString::Printf(TEXT("Bloque_%d"), ID));
		SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

		ABloque* NuevoBloque = GetWorld()->SpawnActor<ABloque>(
			ABloque::StaticClass(),
			Actual->Dato,
			FRotator::ZeroRotator,
			SpawnParams
		);

		if (NuevoBloque)
		{
			NuevoBloque->SetActorScale3D(FVector(1.0f, 1.0f, 2.0f));
			ID++;
		}

		Actual = Actual->Siguiente;
	}

	FActorSpawnParameters EnemyParams;
	EnemyParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn;

	GetWorld()->SpawnActor<AEnemigo>(
		AEnemigo::StaticClass(),
		FVector(0.0f, 0.0f, 150.0f),
		FRotator::ZeroRotator,
		EnemyParams
	);

	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Cyan, TEXT("Escenario generado con TLista"));
	}
}