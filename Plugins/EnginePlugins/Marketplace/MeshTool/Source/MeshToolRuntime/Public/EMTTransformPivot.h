#pragma once
#include "CoreMinimal.h"
#include "EMTTransformPivot.generated.h"

UENUM(BlueprintType)
enum class EMTTransformPivot : uint8 {
    Center,
    First,
    Last,
    MeshPivot,
    Custom,
};

