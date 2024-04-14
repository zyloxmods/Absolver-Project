#pragma once
#include "CoreMinimal.h"
#include "EStatBonusComputation.generated.h"

UENUM(BlueprintType)
enum class EStatBonusComputation : uint8 {
    AdditionBonusPerLevel,
    DirectBonusAtLevel,
    Count,
    None,
};

