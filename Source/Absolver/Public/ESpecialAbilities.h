#pragma once
#include "CoreMinimal.h"
#include "ESpecialAbilities.generated.h"

UENUM(BlueprintType)
enum class ESpecialAbilities : uint8 {
    Parry,
    Avoid,
    Absorb,
    Drunken,
    Count,
    None,
};

