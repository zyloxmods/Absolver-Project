#pragma once
#include "CoreMinimal.h"
#include "WaveSpawnerConfig.h"
#include "WavesPerNumberOfPlayers.generated.h"

USTRUCT(BlueprintType)
struct FWavesPerNumberOfPlayers {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWaveSpawnerConfig> m_WavesConfig;
    
    ABSOLVER_API FWavesPerNumberOfPlayers();
};

