#pragma once
#include "CoreMinimal.h"
#include "ECardinalPoints.generated.h"

UENUM(BlueprintType)
enum class ECardinalPoints : uint8 {
    North,
    East,
    South,
    West,
    Count,
    None,
};

