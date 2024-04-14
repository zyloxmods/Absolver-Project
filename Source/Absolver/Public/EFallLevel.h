#pragma once
#include "CoreMinimal.h"
#include "EFallLevel.generated.h"

UENUM(BlueprintType)
enum class EFallLevel : uint8 {
    Light,
    Medium,
    Heavy,
    Count,
    None,
};

