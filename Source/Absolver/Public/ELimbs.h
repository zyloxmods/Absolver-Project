#pragma once
#include "CoreMinimal.h"
#include "ELimbs.generated.h"

UENUM(BlueprintType)
enum class ELimbs : uint8 {
    LeftArm,
    RightArm,
    LeftLeg,
    RightLeg,
    Count,
    None,
};

