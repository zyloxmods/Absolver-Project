#pragma once
#include "CoreMinimal.h"
#include "EMeshBodyParts.generated.h"

UENUM(BlueprintType)
enum class EMeshBodyParts : uint8 {
    Head,
    UpperArms,
    LowerArms,
    Hands,
    Body,
    Legs,
    Feet,
    Neck,
    Count,
};

