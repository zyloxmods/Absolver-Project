#pragma once
#include "CoreMinimal.h"
#include "EAutoUVScope.generated.h"

UENUM(BlueprintType)
enum class EAutoUVScope : uint8 {
    ModifiedOnly,
    Linked,
    All,
};

