#pragma once
#include "CoreMinimal.h"
#include "EAttackFilterSpecialAbilities.generated.h"

UENUM(BlueprintType)
enum class EAttackFilterSpecialAbilities : uint8 {
    None,
    Parry,
    Avoid,
    Absorb,
    GuardBreak,
    Interrupt,
};

