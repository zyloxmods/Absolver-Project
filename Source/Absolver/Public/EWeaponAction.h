#pragma once
#include "CoreMinimal.h"
#include "EWeaponAction.generated.h"

UENUM(BlueprintType)
enum class EWeaponAction : uint8 {
    Draw,
    Sheathe,
    PickUp,
    Drop,
    Count,
    None,
};

