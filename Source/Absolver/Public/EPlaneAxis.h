#pragma once
#include "CoreMinimal.h"
#include "EPlaneAxis.generated.h"

UENUM(BlueprintType)
enum class EPlaneAxis : uint8 {
    XY,
    XZ,
    YZ,
    Count,
    None,
};

