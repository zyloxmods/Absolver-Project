#pragma once
#include "CoreMinimal.h"
#include "EUVAlign.generated.h"

UENUM(BlueprintType)
enum class EUVAlign : uint8 {
    PlanarAuto,
    PlanarWall,
    PlanarFloor,
    Box,
    Fit,
    CustomPlane,
};

