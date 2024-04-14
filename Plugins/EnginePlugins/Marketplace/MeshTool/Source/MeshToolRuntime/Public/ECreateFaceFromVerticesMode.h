#pragma once
#include "CoreMinimal.h"
#include "ECreateFaceFromVerticesMode.generated.h"

UENUM(BlueprintType)
enum class ECreateFaceFromVerticesMode : uint8 {
    Ordered,
    ViewBase,
};

