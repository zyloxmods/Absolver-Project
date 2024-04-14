#pragma once
#include "CoreMinimal.h"
#include "InputBehavior.generated.h"

UENUM(BlueprintType)
enum class InputBehavior : uint8 {
    JustPressed,
    Pressed,
    PressedShorterThan,
    JustReleased,
    JustReleasedBefore,
};

