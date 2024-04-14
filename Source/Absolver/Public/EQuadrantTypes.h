#pragma once
#include "CoreMinimal.h"
#include "EQuadrantTypes.generated.h"

UENUM(BlueprintType)
enum class EQuadrantTypes : uint8 {
    FrontLeft,
    FrontRight,
    BackRight,
    BackLeft,
    Count,
    None,
};

