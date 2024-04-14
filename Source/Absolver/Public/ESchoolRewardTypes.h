#pragma once
#include "CoreMinimal.h"
#include "ESchoolRewardTypes.generated.h"

UENUM(BlueprintType)
enum class ESchoolRewardTypes : uint8 {
    CombatDeck,
    Item,
    FightingStyle,
    Disciple,
    Weapon,
    Mask,
    Count,
    None,
};

