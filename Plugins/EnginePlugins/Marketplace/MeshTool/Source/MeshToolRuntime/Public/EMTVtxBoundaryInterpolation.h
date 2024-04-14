#pragma once
#include "CoreMinimal.h"
#include "EMTVtxBoundaryInterpolation.generated.h"

UENUM(BlueprintType)
enum class EMTVtxBoundaryInterpolation : uint8 {
    VTX_BOUNDARY_NONE,
    VTX_BOUNDARY_EDGE_ONLY,
    VTX_BOUNDARY_EDGE_AND_CORNER,
};

