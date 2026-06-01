#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Enemigo.generated.h"

UCLASS()
class SEBASVILLARROELLAB04_API AEnemigo : public AActor
{
	GENERATED_BODY()

public:
	AEnemigo();

protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Visual")
	class UStaticMeshComponent* MallaEnemigo;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movimiento")
	float Velocidad;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movimiento")
	FVector DireccionMovimiento;

private:
	FVector SpawnLocation;

	int32 RebotesTotales;

	UPROPERTY(EditAnywhere, Category = "Movimiento")
	int32 LimiteRebotes;
};