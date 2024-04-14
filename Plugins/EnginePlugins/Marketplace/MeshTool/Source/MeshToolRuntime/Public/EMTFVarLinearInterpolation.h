#pragma once
#include "CoreMinimal.h"
#include "EMTFVarLinearInterpolation.generated.h"

UENUM(BlueprintType)
enum class EMTFVarLinearInterpolation : uint8 {
    FVAR_LINEAR_NONE,
    FVAR_LINEAR_CORNERS_ONLY,
    FVAR_LINEAR_CORNERS_PLUS1,
    FVAR_LINEAR_CORNERS_PLUS2,
    FVAR_LINEAR_BOUNDARIES,
    FVAR_LINEAR_ALL,
};

