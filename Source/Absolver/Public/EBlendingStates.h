#pragma once
#include "CoreMinimal.h"
#include "EBlendingStates.generated.h"

UENUM(BlueprintType)
enum class EBlendingStates : uint8 {
    FullyBlended,
    FullyNotBlended,
    BlendIn,
    BlendOut,
    Count,
    None,
};

