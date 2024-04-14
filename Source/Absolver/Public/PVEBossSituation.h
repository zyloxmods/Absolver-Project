#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PVEBossSituation.generated.h"

class APlayerStart;

UCLASS(Blueprintable)
class ABSOLVER_API APVEBossSituation : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> m_EndPositions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APlayerStart* m_RespawnPoint;
    
public:
    APVEBossSituation(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_SpawnBossSituation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool BPE_IsSituationSpawned();
    
};

