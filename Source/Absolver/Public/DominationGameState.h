#pragma once
#include "CoreMinimal.h"
#include "DominationRoundInfo.h"
#include "EResourceAreaStatus.h"
#include "TeamGameState.h"
#include "DominationGameState.generated.h"

class ADominationArea;

UCLASS(Blueprintable)
class ABSOLVER_API ADominationGameState : public ATeamGameState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool m_bFirstWaveDone;
    
    UPROPERTY(EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TArray<int64> m_TimerNewAreaActivation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FDominationRoundInfo m_RoundInfo;
    
public:
    ADominationGameState(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void ResetRoundInfo();
    
    UFUNCTION(BlueprintCallable)
    FDominationRoundInfo GetRoundInfo();
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetFirstWaveDone(bool _bDone);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_IsFirstWaveDone() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 BPF_GetNumActiveZone();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_AreaNewStatus(ADominationArea* _dominationArea, EResourceAreaStatus _eStatus);
    
};

