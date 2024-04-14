#pragma once
#include "CoreMinimal.h"
#include "EWeightCategory.generated.h"

UENUM(BlueprintType)
enum class EWeightCategory : uint8 {
    Light,
    Normal,
    Heavy,
    Overweight,
    Count,
    None,
};

