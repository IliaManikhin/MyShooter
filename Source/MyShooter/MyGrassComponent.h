// Property of Ilia Manikhin 2021

#pragma once

#include "CoreMinimal.h"
#include "Components/HierarchicalInstancedStaticMeshComponent.h"
#include "MyGrassComponent.generated.h"

/**
 * 
 */
UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class MYSHOOTER_API UMyGrassComponent : public UHierarchicalInstancedStaticMeshComponent
{
	GENERATED_BODY()

		UMyGrassComponent();

	UPROPERTY(EditDefaultsOnly, Category = "Spawning")
		FBox SpawningExtents;

	UPROPERTY(EditDefaultsOnly, Category = "Spawning")
		int SpawnCount;

protected:
	virtual void BeginPlay() override;

public:

	virtual void TickComponent
	(
		float DeltaTime,
		enum ELevelTick TickType,
		FActorComponentTickFunction* ThisTickFunction
	) override;

private:
	void SpawnGrass();
	
};
