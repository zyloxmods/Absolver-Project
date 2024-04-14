#pragma once
#include "CoreMinimal.h"
#include "EEquipmentSlot.generated.h"

UENUM(BlueprintType)
enum class EEquipmentSlot : uint8 {
    Mask,
    ElbowArmor,
    ShoulderArmor,
    UnderTop,
    OverTop,
    Gloves,
    Belt,
    Trousers,
    Shoes,
    Hair,
    Weapon,
    Item,
    Count,
    FullSet,
    Temporary,
    None,
};

