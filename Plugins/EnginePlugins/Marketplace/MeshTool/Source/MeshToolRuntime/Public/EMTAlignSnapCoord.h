#pragma once
#include "CoreMinimal.h"
#include "EMTAlignSnapCoord.generated.h"

UENUM(BlueprintType)
enum class EMTAlignSnapCoord : uint8 {
    Auto,
    Local,
    World,
};

