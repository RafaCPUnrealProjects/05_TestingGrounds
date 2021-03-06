// Copyright RafaCP

#pragma once

#include "CoreMinimal.h"
#include "S05_TestingGroundsGameMode.h"
#include "InfiniteTerrainGameMode.generated.h"

/**
 * 
 */
UCLASS()
class S05_TESTINGGROUNDS_API AInfiniteTerrainGameMode : public AS05_TestingGroundsGameMode
{
	GENERATED_BODY()

	AInfiniteTerrainGameMode();

public:
	UFUNCTION(BlueprintCallable, Category = "Bounds Pool")
	void PopulateBoundsVolumePool();
	
private:
	void AddToPool(class ANavMeshBoundsVolume *VolumeToAdd);

protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Pool")
	class UActorPool* NavMeshBoundsVolumePool;
};
