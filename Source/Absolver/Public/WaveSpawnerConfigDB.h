#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "WavesPerNumberOfPlayers.h"
#include "WaveSpawnerConfigDB.generated.h"

UCLASS(Blueprintable)
class ABSOLVER_API UWaveSpawnerConfigDB : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fTotalDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fChangeTargetThreshMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fChangeTargetThreshMax;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FWavesPerNumberOfPlayers m_WavesConfigs[3];
    
    UWaveSpawnerConfigDB();

};

