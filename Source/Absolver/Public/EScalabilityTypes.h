#pragma once
#include "CoreMinimal.h"
#include "EScalabilityTypes.generated.h"

UENUM(BlueprintType)
enum class EScalabilityTypes : uint8 {
    General,
    Textures,
    Shadows,
    ViewDistance,
    Effects,
    PostProcess,
    Foliage,
    AntiAliasing,
    Count,
    None,
};

