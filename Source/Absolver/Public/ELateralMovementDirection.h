#pragma once
#include "CoreMinimal.h"
#include "ELateralMovementDirection.generated.h"

UENUM(BlueprintType)
enum class ELateralMovementDirection : uint8 {
    Left,
    Right,
    None,
    Count,
};

