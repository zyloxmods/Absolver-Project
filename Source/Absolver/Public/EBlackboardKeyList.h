#pragma once
#include "CoreMinimal.h"
#include "EBlackboardKeyList.generated.h"

UENUM(BlueprintType)
enum class EBlackboardKeyList : uint8 {
    Bool,
    Class,
    Enum,
    Float,
    Int,
    Name,
    NativeEnum,
    Object,
    Rotator,
    String,
    Vector,
    Count,
    None,
};

