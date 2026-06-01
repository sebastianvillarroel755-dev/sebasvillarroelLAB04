#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Bloque.generated.h"

UCLASS()
class SEBASVILLARROELLAB04_API ABloque : public AActor
{
	GENERATED_BODY()

public:
	ABloque();

protected:
	virtual void BeginPlay() override;

public:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Bloque")
	class UStaticMeshComponent* MeshBloque;
};