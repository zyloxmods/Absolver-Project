#pragma once
#include "CoreMinimal.h"
#include "EResourcesTypes.generated.h"

UENUM(BlueprintType)
enum class EResourcesTypes : uint8 {
    Money,
    Keys,
    Count,
    None,
};

