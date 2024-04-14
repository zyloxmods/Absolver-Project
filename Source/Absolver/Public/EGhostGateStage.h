#pragma once
#include "CoreMinimal.h"
#include "EGhostGateStage.generated.h"

UENUM(BlueprintType)
enum class EGhostGateStage : uint8 {
    None,
    Light,
    Coop,
    Fight,
    Count,
    Invalid,
};

