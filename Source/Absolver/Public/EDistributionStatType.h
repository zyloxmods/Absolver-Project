#pragma once
#include "CoreMinimal.h"
#include "EDistributionStatType.generated.h"

UENUM(BlueprintType)
enum class EDistributionStatType : uint8 {
    Vitality,
    Strength,
    Agility,
    Endurance,
    Faith,
    Count,
    None,
};

