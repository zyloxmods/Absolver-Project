#pragma once
#include "CoreMinimal.h"
#include "EAttackPowers.generated.h"

UENUM(BlueprintType)
enum class EAttackPowers : uint8 {
    Light,
    Medium,
    Strong,
    Count,
    None,
};

