#pragma once
#include "CoreMinimal.h"
#include "EWeaponEquipmentSlot.generated.h"

UENUM(BlueprintType)
enum class EWeaponEquipmentSlot : uint8 {
    PrimaryWeapon,
    Legs,
    Arms,
    Count,
    None,
};

