#pragma once
#include "CoreMinimal.h"
#include "WaveSpawnerConfig.generated.h"

class UWaveDescriptionDB;

USTRUCT(BlueprintType)
struct FWaveSpawnerConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iPlayerLevelMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iPlayerLevelMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UWaveDescriptionDB*> m_Waves;
    
    ABSOLVER_API FWaveSpawnerConfig();
};

