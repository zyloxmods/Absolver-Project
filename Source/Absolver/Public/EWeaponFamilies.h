#pragma once
#include "CoreMinimal.h"
#include "EWeaponFamilies.generated.h"

UENUM(BlueprintType)
enum class EWeaponFamilies : uint8 {
    BareHands,
    Sword,
    WarGloves,
    Count,
    None,
};

