#pragma once
#include "CoreMinimal.h"
#include "EMTRotationOrder.generated.h"

UENUM(BlueprintType)
enum class EMTRotationOrder : uint8 {
    XYZ,
    XZY,
    YXZ,
    YZX,
    ZXY,
    ZYX,
};

