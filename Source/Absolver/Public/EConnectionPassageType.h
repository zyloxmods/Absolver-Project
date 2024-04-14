#pragma once
#include "CoreMinimal.h"
#include "EConnectionPassageType.generated.h"

UENUM(BlueprintType)
enum class EConnectionPassageType : uint8 {
    TWO_WAYS,
    PREVIOUS_NEXT,
    NEXT_PREVIOUS,
};

