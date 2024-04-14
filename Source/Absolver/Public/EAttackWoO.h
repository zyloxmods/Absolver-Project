#pragma once
#include "CoreMinimal.h"
#include "EAttackWoO.generated.h"

UENUM(BlueprintType)
enum class EAttackWoO : uint8 {
    Cancel,
    Combo,
    Count,
    None,
};

