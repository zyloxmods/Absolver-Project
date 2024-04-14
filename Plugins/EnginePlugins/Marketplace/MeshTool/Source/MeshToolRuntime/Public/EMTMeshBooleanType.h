#pragma once
#include "CoreMinimal.h"
#include "EMTMeshBooleanType.generated.h"

UENUM(BlueprintType)
enum class EMTMeshBooleanType : uint8 {
    Union,
    Substract,
    Intersect,
    XOR,
};

