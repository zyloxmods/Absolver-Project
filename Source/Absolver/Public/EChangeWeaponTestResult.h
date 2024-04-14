#pragma once
#include "CoreMinimal.h"
#include "EChangeWeaponTestResult.generated.h"

UENUM(BlueprintType)
enum class EChangeWeaponTestResult : uint8 {
    CanChangeWeapon,
    EquippedWeaponHandled,
    EquippedWeaponDisarmed,
};

