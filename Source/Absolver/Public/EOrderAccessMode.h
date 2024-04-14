#pragma once
#include "CoreMinimal.h"
#include "EOrderAccessMode.generated.h"

UENUM(BlueprintType)
enum class EOrderAccessMode : uint8 {
    RunningOnly,
    PendingOnly,
    RunningOrPending,
    Old,
    All,
};

