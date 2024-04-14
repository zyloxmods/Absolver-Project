#pragma once
#include "CoreMinimal.h"
#include "EAttackSortingMethods.generated.h"

UENUM(BlueprintType)
enum class EAttackSortingMethods : uint8 {
    ID,
    Damage,
    CurrentDamage,
    None,
};

