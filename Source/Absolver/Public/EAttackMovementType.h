#pragma once
#include "CoreMinimal.h"
#include "EAttackMovementType.generated.h"

UENUM(BlueprintType)
enum class EAttackMovementType : uint8 {
    Thrust,
    Horizontal,
    Vertical,
    Count,
    None,
};

