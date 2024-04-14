#pragma once
#include "CoreMinimal.h"
#include "EMTPlaneDir.generated.h"

UENUM(BlueprintType)
enum class EMTPlaneDir : uint8 {
    U,
    NegU,
    V,
    NegV,
    W,
    NegW,
};

