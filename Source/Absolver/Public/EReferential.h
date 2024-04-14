#pragma once
#include "CoreMinimal.h"
#include "EReferential.generated.h"

UENUM(BlueprintType)
enum class EReferential : uint8 {
    Absolute,
    Relative,
};

