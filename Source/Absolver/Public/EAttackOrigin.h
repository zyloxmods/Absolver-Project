#pragma once
#include "CoreMinimal.h"
#include "EAttackOrigin.generated.h"

UENUM(BlueprintType)
enum class EAttackOrigin : uint8 {
    Left,
    Middle,
    Right,
    Up,
    Down,
    Count,
    None,
};

