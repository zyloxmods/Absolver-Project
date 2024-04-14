#pragma once
#include "CoreMinimal.h"
#include "EAttackSequenceUseCaseType.generated.h"

UENUM(BlueprintType)
enum class EAttackSequenceUseCaseType : uint8 {
    Attack,
    CounterStrike_SpecialAbility,
    CounterStrike_Dodge,
    CounterStrike_Power,
    CounterStrike_GuardBroken,
    Count,
};

