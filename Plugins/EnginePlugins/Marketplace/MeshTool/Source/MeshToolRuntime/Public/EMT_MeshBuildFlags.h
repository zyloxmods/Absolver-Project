#pragma once
#include "CoreMinimal.h"
#include "EMT_MeshBuildFlags.generated.h"

UENUM(BlueprintType)
enum class EMT_MeshBuildFlags : uint8 {
    Default,
    SkipDistanceFieldsGeneration,
    SkipGenerateLightmapUV = 16,
};

