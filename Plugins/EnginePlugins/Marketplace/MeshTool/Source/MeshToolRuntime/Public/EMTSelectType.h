#pragma once
#include "CoreMinimal.h"
#include "EMTSelectType.generated.h"

UENUM(BlueprintType)
enum class EMTSelectType : uint8 {
    ST_Vertex = 1,
    ST_Edge,
    ST_Face,
    ST_SubMesh = 5,
    ST_Object,
};

