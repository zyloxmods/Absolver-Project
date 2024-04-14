#pragma once
#include "CoreMinimal.h"
#include "EWeaponSlot.generated.h"

UENUM(BlueprintType)
enum class EWeaponSlot : uint8 {
    LeftHand,
    RightHand,
    LeftLeg,
    RightLeg,
    LeftArm,
    RightArm,
    Count,
    None,
};

