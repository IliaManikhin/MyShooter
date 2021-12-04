// Property of Ilia Manikhin 2021

#pragma once

#include "CoreMinimal.h"
#include "MyShooterGameMode.h"
#include "InfiniteTerrainGameMode.generated.h"


/**
 * 
 */
UCLASS()
class MYSHOOTER_API AInfiniteTerrainGameMode : public AMyShooterGameMode
{
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintCallable, Category = "Bounds Pool")
	void PopulateBoundsVolumePool();


	void AddToPool(class ANavMeshBoundsVolume *VolumeToAdd);


};
