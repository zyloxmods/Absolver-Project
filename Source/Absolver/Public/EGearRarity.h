#pragma once
#include "CoreMinimal.h"
#include "EGearRarity.generated.h"

UENUM(BlueprintType)
enum class EGearRarity : uint8 {
    Common,
    Uncommon,
    Rare,
    Epic,
    Legendary,
    Count,
    None,
};

