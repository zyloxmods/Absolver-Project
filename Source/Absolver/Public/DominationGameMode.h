#pragma once
#include "CoreMinimal.h"
#include "SCTeamGameMode.h"
#include "DominationGameMode.generated.h"

UCLASS(Blueprintable, NonTransient)
class ABSOLVER_API ADominationGameMode : public ASCTeamGameMode {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fDelayToLaunchNewArea;
    
public:
    ADominationGameMode(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void BPF_SetNumAreaActiveAtTheSameTime(int32 _iNbAreaActive);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_LaunchFirstWave();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_ChooseNewAreaToActivate();
    
};

