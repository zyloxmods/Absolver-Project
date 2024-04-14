#pragma once
#include "CoreMinimal.h"
#include "EMTDrawPolygonType.generated.h"

UENUM(BlueprintType)
enum class EMTDrawPolygonType : uint8 {
    Quad,
    Circle,
    Box,
};

