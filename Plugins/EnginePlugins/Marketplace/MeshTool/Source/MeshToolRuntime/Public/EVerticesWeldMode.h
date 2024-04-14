#pragma once
#include "CoreMinimal.h"
#include "EVerticesWeldMode.generated.h"

UENUM(BlueprintType)
enum class EVerticesWeldMode : uint8 {
    CollapseToCenter,
    CollapseToFirst,
    CollapseToLast,
};

