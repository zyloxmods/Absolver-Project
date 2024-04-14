#pragma once
#include "CoreMinimal.h"
#include "ECharacterProgressionRewardConditions.generated.h"

UENUM(BlueprintType)
enum class ECharacterProgressionRewardConditions : uint8 {
    Level,
    Tutorial,
    School_Level,
    Absolver,
    Gleam,
    GleamLvl,
    GameModeLvl,
    Count,
    None,
};

