// Property of Ilia Manikhin 2021


#include "MyGrassComponent.h"

UMyGrassComponent::UMyGrassComponent()
{
	PrimaryComponentTick.bCanEverTick = true;

}

void UMyGrassComponent::BeginPlay()
{
	Super::BeginPlay();

	SpawnGrass();

}

void UMyGrassComponent::SpawnGrass()
{
	for (size_t i = 0; i < SpawnCount; i++)
	{
		FVector Location = FMath::RandPointInBox(SpawningExtents);
		AddInstance(FTransform(Location));
	}
}

void UMyGrassComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
}

