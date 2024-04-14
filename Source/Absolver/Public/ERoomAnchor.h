#pragma once
#include "CoreMinimal.h"
#include "ERoomAnchor.generated.h"

UENUM(BlueprintType)
enum class ERoomAnchor : uint8 {
    North,
    East,
    South,
    West,
    Count,
    None,
};

