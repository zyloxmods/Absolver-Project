#pragma once
#include "CoreMinimal.h"
#include "EOrderSubType.generated.h"

UENUM(BlueprintType)
enum class EOrderSubType : uint8 {
    None,
    Parallelizable,
    BoundToAnimState,
};

