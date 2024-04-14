#pragma once
#include "CoreMinimal.h"
#include "EEquipmentStatType.generated.h"

UENUM(BlueprintType)
enum class EEquipmentStatType : uint8 {
    VitalityBonus,
    StaminaBonus,
    ShardBonus,
    ShardCost,
    Weight,
    GuardCoefficient,
    GuardSpecialCoefficient,
    AttackSpecialRatio,
    DefenseBonus,
    SpecialDefenseBonus,
    Count,
    None,
};

