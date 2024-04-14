#pragma once
#include "CoreMinimal.h"
#include "EItemUsabilityTestResult.generated.h"

UENUM(BlueprintType)
enum class EItemUsabilityTestResult : uint8 {
    CanUse,
    NotEquipped,
    OnCoolDown,
    NoItemLeft,
    InsufficientShards,
    TargetRecquirementsNotMet,
    ShardsFrozen,
};

