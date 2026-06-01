#include "Bloque.h"
#include "Components/StaticMeshComponent.h"
#include "UObject/ConstructorHelpers.h"

ABloque::ABloque()
{
	PrimaryActorTick.bCanEverTick = false;

	MeshBloque = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshBloque"));
	RootComponent = MeshBloque;

	MeshBloque->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	MeshBloque->SetCollisionResponseToAllChannels(ECR_Block);

	static ConstructorHelpers::FObjectFinder<UStaticMesh> CuboAsset(
		TEXT("StaticMesh'/Engine/BasicShapes/Cube.Cube'")
	);

	if (CuboAsset.Succeeded())
	{
		MeshBloque->SetStaticMesh(CuboAsset.Object);
	}
}

void ABloque::BeginPlay()
{
	Super::BeginPlay();
}