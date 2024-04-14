#pragma once
#include "CoreMinimal.h"
#include "EShardGainCause.generated.h"

UENUM(BlueprintType)
enum class EShardGainCause : uint8 {
    Parry,
    Avoid,
    Absorb,
    Dodge,
    AttackHit,
    Hitted,
    Time,
    Count,
    None,
};

