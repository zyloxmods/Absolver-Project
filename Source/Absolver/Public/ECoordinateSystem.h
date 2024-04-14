#pragma once
#include "CoreMinimal.h"
#include "ECoordinateSystem.generated.h"

UENUM(BlueprintType)
enum class ECoordinateSystem : uint8 {
    World,
    Local,
};

