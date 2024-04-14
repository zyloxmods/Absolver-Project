#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GatherTrapManager.generated.h"

UCLASS(Blueprintable)
class ABSOLVER_API AGatherTrapManager : public AActor {
    GENERATED_BODY()
public:
    AGatherTrapManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void BPF_SetRandomStream(int32 _iSeed);
    
    UFUNCTION(BlueprintCallable)
    void BPF_InitTrapZones();
    
};

