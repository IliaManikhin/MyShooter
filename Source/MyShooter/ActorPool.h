// Property of Ilia Manikhin 2021

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ActorPool.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class MYSHOOTER_API UActorPool : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UActorPool();


	AActor* Checkout();

	void Return(AActor* ActorToReturn);

	void Add(AActor* ActorToAdd);

private:
	TArray<AActor*> Pool;

};
