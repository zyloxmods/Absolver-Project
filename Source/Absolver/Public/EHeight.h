#pragma once
#include "CoreMinimal.h"
#include "EHeight.generated.h"

UENUM(BlueprintType)
enum class EHeight : uint8 {
    High,
    Mid,
    Low,
    Count,
    None,
};

