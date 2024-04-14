#pragma once
#include "CoreMinimal.h"
#include "EReviveState.generated.h"

UENUM(BlueprintType)
enum class EReviveState : uint8 {
    In,
    Loop,
    Success,
    Fail,
    Count,
    None,
};

