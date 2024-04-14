#pragma once
#include "CoreMinimal.h"
#include "EMTEditingToggle.generated.h"

UENUM(BlueprintType)
enum class EMTEditingToggle : uint8 {
    None,
    TransformPivot,
    DrawPolygon,
    DrawPlane,
    SlabMode,
    PlaneCut,
    Knife,
    EditUV,
    EditUVPlane,
    MatchUV,
};

