#pragma once
#include "CoreMinimal.h"
#include "ESwitchIdleType.generated.h"

UENUM(BlueprintType)
enum class ESwitchIdleType : uint8 {
    RegularWithReorientation,
    RegularWithoutReorientation,
    AttackEarlyBlendOut,
    Parried,
    Cancel,
    ChangeQuadrant,
    AttackPreview,
    Hitted,
    None,
};

