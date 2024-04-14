#pragma once
#include "CoreMinimal.h"
#include "EBlueprintAsyncResultSwitch.generated.h"

UENUM(BlueprintType)
enum class EBlueprintAsyncResultSwitch : uint8 {
    OnSuccess,
    AsyncLoading,
    OnFailure,
};

