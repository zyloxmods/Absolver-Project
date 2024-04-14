#pragma once
#include "CoreMinimal.h"
#include "EDefenseTactics.generated.h"

UENUM(BlueprintType)
enum class EDefenseTactics : uint8 {
    Guard,
    Dodge,
    Special,
    Count,
    Invalid,
};

