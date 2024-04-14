#pragma once
#include "CoreMinimal.h"
#include "EStatsDisplayEnum.generated.h"

UENUM(BlueprintType)
enum class EStatsDisplayEnum : uint8 {
    All,
    FightingStyleOnly,
    CharacterOnly,
    Count,
    None,
};

