// Property of Ilia Manikhin 2021

#include "InfiniteTerrainGameMode.h"
#include "NavMesh/NavMeshBoundsVolume.h"
#include "EngineUtils.h"

AInfiniteTerrainGameMode::AInfiniteTerrainGameMode()
{
	NavMeshBoundsVolumePool = CreateDefaultSubobject<UActorPool>(FName("Nav Mesh Bounds Volume Pool"));
}

void AInfiniteTerrainGameMode::PopulateBoundsVolumePool()
{
	//Create pull of objects
	// Pick all actors from world to this List
	auto VolumeIterator = TActorIterator<ANavMeshBoundsVolume>(GetWorld());

	//While in the world exists any actor that we didnt iterate, we do something 
	while (VolumeIterator)
	{
		AddToPool(*VolumeIterator);
		++VolumeIterator;
	}
}

void AInfiniteTerrainGameMode::AddToPool(class ANavMeshBoundsVolume *VolumeToAdd)
{
	UE_LOG(LogTemp, Warning, TEXT("Found Volume: %s"), *VolumeToAdd->GetName())
}

