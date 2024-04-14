#pragma once
#include "CoreMinimal.h"
#include "EMTOpenSubdivRefineOption.generated.h"

UENUM(BlueprintType)
enum class EMTOpenSubdivRefineOption : uint8 {
    Uniform,
    Adaptive,
};

