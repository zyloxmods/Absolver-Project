#pragma once
#include "CoreMinimal.h"
#include "EInputDataTutorialDisplayConstraints.generated.h"

UENUM(BlueprintType)
enum class EInputDataTutorialDisplayConstraints : uint8 {
    KeyboardMouseOnly,
    GamepadOnly,
    Both,
    Count,
    None,
};

