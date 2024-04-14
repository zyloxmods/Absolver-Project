#pragma once
#include "CoreMinimal.h"
#include "ESeasonRewardType.generated.h"

UENUM(BlueprintType)
enum class ESeasonRewardType : uint8 {
    FRAGMENTS,
    RIFT,
    CRYSTALS,
    Count,
    None,
};

