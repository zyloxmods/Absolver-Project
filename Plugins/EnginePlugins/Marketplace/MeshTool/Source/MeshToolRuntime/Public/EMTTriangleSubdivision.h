#pragma once
#include "CoreMinimal.h"
#include "EMTTriangleSubdivision.generated.h"

UENUM(BlueprintType)
enum class EMTTriangleSubdivision : uint8 {
    TRI_SUB_CATMARK,
    TRI_SUB_SMOOTH,
};

