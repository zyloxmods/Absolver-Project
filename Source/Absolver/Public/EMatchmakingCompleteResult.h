#pragma once
#include "CoreMinimal.h"
#include "EMatchmakingCompleteResult.generated.h"

UENUM(BlueprintType)
enum class EMatchmakingCompleteResult : uint8 {
    NotStarted,
    Cancelled,
    NoResults,
    Failure,
    CreateFailure,
    Success,
    Count,
};

