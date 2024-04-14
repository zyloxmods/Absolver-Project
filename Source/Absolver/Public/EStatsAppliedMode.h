#pragma once
#include "CoreMinimal.h"
#include "EStatsAppliedMode.generated.h"

UENUM(BlueprintType)
enum class EStatsAppliedMode : uint8 {
    Current,
    Preview_1,
    Preview_2,
    Count,
    None,
};

