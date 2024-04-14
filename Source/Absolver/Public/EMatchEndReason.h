#pragma once
#include "CoreMinimal.h"
#include "EMatchEndReason.generated.h"

UENUM(BlueprintType)
enum class EMatchEndReason : uint8 {
    ScoreReached,
    TimeLimit,
    Forfeit,
    None,
};

