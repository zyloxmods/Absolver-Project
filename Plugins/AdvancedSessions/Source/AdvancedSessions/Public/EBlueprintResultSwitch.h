#pragma once
#include "CoreMinimal.h"
#include "EBlueprintResultSwitch.generated.h"

UENUM(BlueprintType)
enum class EBlueprintResultSwitch : uint8 {
    OnSuccess,
    OnFailure,
};

