#pragma once
#include "CoreMinimal.h"
#include "EShardChangeCause.generated.h"

UENUM(BlueprintType)
enum class EShardChangeCause : uint8 {
    SpecialAbility,
    Dodge,
    AttackHit,
    Hitted,
    Time,
    Consume,
    Cheat,
    Count,
    None,
};

