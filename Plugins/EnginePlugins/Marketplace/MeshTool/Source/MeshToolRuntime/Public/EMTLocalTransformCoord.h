#pragma once
#include "CoreMinimal.h"
#include "EMTLocalTransformCoord.generated.h"

UENUM(BlueprintType)
enum class EMTLocalTransformCoord : uint8 {
    Auto,
    Local,
    World,
    Normal,
};

