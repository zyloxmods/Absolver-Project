#pragma once
#include "CoreMinimal.h"
#include "EStatsWeaponComputingMethod.generated.h"

UENUM(BlueprintType)
enum class EStatsWeaponComputingMethod : uint8 {
    Normal,
    ForceEquippedWeapon,
    PreventWeapon,
};

