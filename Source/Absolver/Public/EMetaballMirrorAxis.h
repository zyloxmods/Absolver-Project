#pragma once
#include "CoreMinimal.h"
#include "EMetaballMirrorAxis.generated.h"

UENUM(BlueprintType)
enum class EMetaballMirrorAxis : uint8 {
    VE_None,
    VE_XAxis,
    VE_YAxis,
    VE_ZAxis,
};

