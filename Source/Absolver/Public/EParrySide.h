#pragma once
#include "CoreMinimal.h"
#include "EParrySide.generated.h"

UENUM(BlueprintType)
enum class EParrySide : uint8 {
    Left,
    Right,
    Count,
    None,
};

