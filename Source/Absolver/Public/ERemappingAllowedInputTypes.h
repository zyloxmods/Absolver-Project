#pragma once
#include "CoreMinimal.h"
#include "ERemappingAllowedInputTypes.generated.h"

UENUM(BlueprintType)
enum class ERemappingAllowedInputTypes : uint8 {
    KeyboardMouse,
    Gamepad,
    Both,
    Count,
    None,
};

