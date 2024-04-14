#pragma once
#include "CoreMinimal.h"
#include "EMTEditType.generated.h"

UENUM(BlueprintType)
enum class EMTEditType : uint8 {
    ET_Vertex = 1,
    ET_Edge,
    ET_Face,
    ET_Quad,
    ET_SubMesh,
    ET_Object,
};

