#pragma once
#include "CoreMinimal.h"
#include "EPushVerticesMode.generated.h"

UENUM(BlueprintType)
enum class EPushVerticesMode : uint8 {
    FromMeshPivot,
    FromWidgetLocation,
    AvergeNormal,
};

