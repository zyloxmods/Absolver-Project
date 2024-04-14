#pragma once
#include "CoreMinimal.h"
#include "ESpeedState.generated.h"

UENUM(BlueprintType)
enum class ESpeedState : uint8 {
    V0,
    V1,
    V2,
    V3,
    Count,
};

