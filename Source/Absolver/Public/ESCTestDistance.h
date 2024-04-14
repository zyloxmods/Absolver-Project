#pragma once
#include "CoreMinimal.h"
#include "ESCTestDistance.generated.h"

UENUM(BlueprintType)
enum class ESCTestDistance : uint8 {
    Distance3D,
    Distance2D,
    DistanceZ,
};

