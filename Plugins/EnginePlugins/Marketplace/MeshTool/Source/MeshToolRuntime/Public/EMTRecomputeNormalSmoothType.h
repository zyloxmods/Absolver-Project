#pragma once
#include "CoreMinimal.h"
#include "EMTRecomputeNormalSmoothType.generated.h"

UENUM(BlueprintType)
enum class EMTRecomputeNormalSmoothType : uint8 {
    SmoothingGroup,
    AutoSmooth,
    AutoSmoothSmoothingGroup0,
};

