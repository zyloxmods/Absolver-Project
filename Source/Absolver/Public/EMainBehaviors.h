#pragma once
#include "CoreMinimal.h"
#include "EMainBehaviors.generated.h"

UENUM(BlueprintType)
enum class EMainBehaviors : uint8 {
    Agressive,
    Defensive,
    Observe,
    Safe,
    Count,
    Invalid,
};

