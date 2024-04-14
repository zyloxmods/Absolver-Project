#pragma once
#include "CoreMinimal.h"
#include "WaveSpawner.h"
#include "StatueWaveSpawner.generated.h"

UCLASS(Blueprintable)
class ABSOLVER_API AStatueWaveSpawner : public AWaveSpawner {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fWaveActivationDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_TimerStarted, meta=(AllowPrivateAccess=true))
    bool m_bTimerStarted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool m_bWaveLaunched;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fChangeTargetThreshMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fChangeTargetThreshMax;
    
public:
    AStatueWaveSpawner(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_TimerStarted();
    
};

