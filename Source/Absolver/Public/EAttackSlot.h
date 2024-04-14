#pragma once
#include "CoreMinimal.h"
#include "EAttackSlot.generated.h"

UENUM(BlueprintType)
enum class EAttackSlot : uint8 {
    Regular,
    Alternative,
    Count,
    None,
};

