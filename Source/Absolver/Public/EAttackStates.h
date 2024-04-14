#pragma once
#include "CoreMinimal.h"
#include "EAttackStates.generated.h"

UENUM(BlueprintType)
enum class EAttackStates : uint8 {
    BuildUp,
    Strike,
    Release,
    InterStrike,
    Count,
    None,
};

