#include "Enemigo.h"
#include "Components/StaticMeshComponent.h"
#include "UObject/ConstructorHelpers.h"
#include "Engine/World.h"

AEnemigo::AEnemigo()
{
	PrimaryActorTick.bCanEverTick = true;

	MallaEnemigo = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MallaEnemigo"));
	RootComponent = MallaEnemigo;

	MallaEnemigo->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	MallaEnemigo->SetCollisionResponseToAllChannels(ECR_Block);

	static ConstructorHelpers::FObjectFinder<UStaticMesh> EsferaAsset(
		TEXT("StaticMesh'/Engine/BasicShapes/Sphere.Sphere'")
	);

	if (EsferaAsset.Succeeded())
	{
		MallaEnemigo->SetStaticMesh(EsferaAsset.Object);
	}

	Velocidad = 450.0f;
	DireccionMovimiento = FVector(1.0f, 1.0f, 0.0f).GetSafeNormal();

	RebotesTotales = 0;
	LimiteRebotes = 20;
}

void AEnemigo::BeginPlay()
{
	Super::BeginPlay();

	SpawnLocation = GetActorLocation();
}

void AEnemigo::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	const FVector ActualLocation = GetActorLocation();
	const FVector NuevaPosicion = ActualLocation + (DireccionMovimiento * Velocidad * DeltaTime);

	FHitResult Hit;
	FCollisionQueryParams Params;
	Params.AddIgnoredActor(this);

	if (GetWorld()->LineTraceSingleByChannel(Hit, ActualLocation, NuevaPosicion, ECC_WorldStatic, Params))
	{
		RebotesTotales++;

		if (RebotesTotales >= LimiteRebotes)
		{
			SetActorLocation(SpawnLocation);
			RebotesTotales = 0;
		}
		else
		{
			DireccionMovimiento = DireccionMovimiento.MirrorByVector(Hit.Normal);
			SetActorLocation(Hit.Location + (Hit.Normal * 15.0f));
		}
	}
	else
	{
		SetActorLocation(NuevaPosicion);
	}
}