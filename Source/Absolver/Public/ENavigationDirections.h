#pragma once
#include "CoreMinimal.h"
#include "ENavigationDirections.generated.h"

UENUM(BlueprintType)
enum class ENavigationDirections : uint8 {
    Up,
    Left,
    Right,
    Down,
    Count,
    None,
};

