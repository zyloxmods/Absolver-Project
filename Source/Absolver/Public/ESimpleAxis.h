#pragma once
#include "CoreMinimal.h"
#include "ESimpleAxis.generated.h"

UENUM(BlueprintType)
enum class ESimpleAxis : uint8 {
    X,
    Y,
    Z,
    Count,
    None,
};

