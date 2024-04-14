#pragma once
#include "CoreMinimal.h"
#include "EIntergerGameplayOptionTypes.generated.h"

UENUM(BlueprintType)
enum class EIntergerGameplayOptionTypes : uint8 {
    CameraSpeed,
    MusicVolume,
    SoundEffectsVolume,
    VibrationStrength,
    CameraShake,
    MouseSensitivity,
    CameraAcceleration,
    Count,
    None,
};

