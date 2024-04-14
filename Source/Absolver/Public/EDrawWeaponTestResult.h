#pragma once
#include "CoreMinimal.h"
#include "EDrawWeaponTestResult.generated.h"

UENUM(BlueprintType)
enum class EDrawWeaponTestResult : uint8 {
    CanDrawWeapon,
    EquippedWeaponHandled,
    EquippedWeaponDisarmed,
    EquippedWeaponBroken,
    InsufficientShards,
    NoEquippedWeaponFound,
    ShardsFrozen,
};

