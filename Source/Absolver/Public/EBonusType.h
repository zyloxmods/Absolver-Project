#pragma once
#include "CoreMinimal.h"
#include "EBonusType.generated.h"

UENUM(BlueprintType)
enum class EBonusType : uint8 {
    Vitality,
    Stamina,
    Shard,
    Count,
    None,
};

