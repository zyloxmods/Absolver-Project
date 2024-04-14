#pragma once
#include "CoreMinimal.h"
#include "EAvoidType.generated.h"

UENUM(BlueprintType)
enum class EAvoidType : uint8 {
    Duck,
    Jump,
    LeftSide,
    RightSide,
    Dodge,
    AllHitAvoid,
    DrunkenSouth,
    Count,
    None,
};

