#pragma once
#include "CoreMinimal.h"
#include "EMappableFieldScaleTypes.generated.h"

UENUM(BlueprintType)
enum class EMappableFieldScaleTypes : uint8 {
    PositiveScale,
    NegativeScale,
    Count,
    None,
};

