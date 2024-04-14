#pragma once
#include "CoreMinimal.h"
#include "EMTPlaneType.generated.h"

UENUM(BlueprintType)
enum class EMTPlaneType : uint8 {
    XY,
    ZY,
    ZX,
};

