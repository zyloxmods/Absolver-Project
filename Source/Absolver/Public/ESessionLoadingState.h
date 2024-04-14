#pragma once
#include "CoreMinimal.h"
#include "ESessionLoadingState.generated.h"

UENUM(BlueprintType)
enum class ESessionLoadingState : uint8 {
    Idle,
    Loading,
    Error,
    Loaded,
};

