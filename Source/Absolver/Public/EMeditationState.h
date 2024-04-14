#pragma once
#include "CoreMinimal.h"
#include "EMeditationState.generated.h"

UENUM(BlueprintType)
enum class EMeditationState : uint8 {
    EnterSheatheWeapon,
    EnterMeditation1,
    EnterMeditation2,
    InMeditation,
    ExitMeditation1,
    ExitMeditation2,
    Count,
    None,
};

