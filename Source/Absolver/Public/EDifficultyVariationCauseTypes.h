#pragma once
#include "CoreMinimal.h"
#include "EDifficultyVariationCauseTypes.generated.h"

UENUM(BlueprintType)
enum class EDifficultyVariationCauseTypes : uint8 {
    GuardSuccess,
    DodgeSuccess,
    AbilitySuccess,
    AttackBlocked,
    AttackDodged,
    AttackAbsorbed,
    AttackAvoided,
    AttackParried,
    Count,
    None,
};

