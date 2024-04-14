#pragma once
#include "CoreMinimal.h"
#include "AdversarialGameMode.h"
#include "OneVersusOneGameMode.generated.h"

class AController;
class UCurveFloat;

UCLASS(Blueprintable, NonTransient)
class ABSOLVER_API AOneVersusOneGameMode : public AAdversarialGameMode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* m_HealthRefillCoeff;
    
public:
    AOneVersusOneGameMode(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BPF_StorePlayersHealthRatio();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float BPF_GetHealthKillBonusRatio(AController* _playerController);
    
};

