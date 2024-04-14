#pragma once
#include "CoreMinimal.h"
#include "EBlendingStateSteps.generated.h"

UENUM(BlueprintType)
enum class EBlendingStateSteps : uint8 {
    Current,
    Previous,
    PreviousPrevious,
    Count,
    None,
};

