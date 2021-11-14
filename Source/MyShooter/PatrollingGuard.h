// Property of Ilia Manikhin 2021

#pragma once

#include "CoreMinimal.h"
#include "TP_ThirdPerson/TP_ThirdPersonCharacter.h"
#include "PatrollingGuard.generated.h"

/**
 * 
 */
UCLASS()
class MYSHOOTER_API APatrollingGuard : public ATP_ThirdPersonCharacter
{
	GENERATED_BODY()

public: 
	UPROPERTY(EditInstanceOnly, Category = "Patrol Route")
	TArray <AActor*> PatrolPointsCPP;
	
};
