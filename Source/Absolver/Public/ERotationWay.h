#pragma once
#include "CoreMinimal.h"
#include "ERotationWay.generated.h"

UENUM(BlueprintType)
enum class ERotationWay : uint8 {
    ClockWise,
    CounterClockWise,
    None,
};

