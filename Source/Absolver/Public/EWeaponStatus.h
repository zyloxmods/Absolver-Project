#pragma once
#include "CoreMinimal.h"
#include "EWeaponStatus.generated.h"

UENUM(BlueprintType)
enum class EWeaponStatus : uint8 {
    Handled,
    Falling,
    Lying,
};

