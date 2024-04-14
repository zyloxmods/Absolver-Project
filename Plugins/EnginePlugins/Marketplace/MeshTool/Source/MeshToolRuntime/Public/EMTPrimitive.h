#pragma once
#include "CoreMinimal.h"
#include "EMTPrimitive.generated.h"

UENUM(BlueprintType)
enum class EMTPrimitive : uint8 {
    Quad,
    Cube,
    HollowCube,
    Cylinder,
    Sphere,
    Cone,
};

