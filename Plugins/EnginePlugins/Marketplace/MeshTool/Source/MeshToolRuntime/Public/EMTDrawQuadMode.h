#pragma once
#include "CoreMinimal.h"
#include "EMTDrawQuadMode.generated.h"

UENUM(BlueprintType)
enum class EMTDrawQuadMode : uint8 {
    ClickDrag,
    ClickClickDrag,
    ClickOnGrid,
};

