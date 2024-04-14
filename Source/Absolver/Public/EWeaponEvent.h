#pragma once
#include "CoreMinimal.h"
#include "EWeaponEvent.generated.h"

UENUM(BlueprintType)
enum class EWeaponEvent : uint8 {
    Draw,
    Sheathe,
    PickUp,
    Drop,
    Disarmed,
    Broken,
    Travel,
    Count,
    None,
};

