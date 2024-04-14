#pragma once
#include "CoreMinimal.h"
#include "EWaveModeMusic.generated.h"

UENUM(BlueprintType)
enum class EWaveModeMusic : uint8 {
    FirstWaveStart,
    WaveStart,
    WavePause,
    WaveEnd,
    Count,
};

