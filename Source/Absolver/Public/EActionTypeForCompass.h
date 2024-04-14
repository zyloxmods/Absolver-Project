#pragma once
#include "CoreMinimal.h"
#include "EActionTypeForCompass.generated.h"

UENUM(BlueprintType)
enum class EActionTypeForCompass : uint8 {
    Attack,
    Dodge,
    ChangeQuadrant,
    Parried,
    Cancel,
    RegularSwitchIdle,
    Count,
    None,
};

