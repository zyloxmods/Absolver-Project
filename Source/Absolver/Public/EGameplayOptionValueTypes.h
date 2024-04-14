#pragma once
#include "CoreMinimal.h"
#include "EGameplayOptionValueTypes.generated.h"

UENUM(BlueprintType)
enum class EGameplayOptionValueTypes : uint8 {
    MinValue,
    MaxValue,
    DefaultValue,
    Count,
    None,
};

