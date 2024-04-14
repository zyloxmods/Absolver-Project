#pragma once
#include "CoreMinimal.h"
#include "EAttackTarget.generated.h"

UENUM(BlueprintType)
enum class EAttackTarget : uint8 {
    High,
    Mid_1,
    Mid_2,
    Low,
    Count,
    None,
};

