#pragma once
#include "CoreMinimal.h"
#include "ECycleDirection.generated.h"

UENUM(BlueprintType)
enum class ECycleDirection : uint8 {
    Next,
    Previous,
    None,
};

