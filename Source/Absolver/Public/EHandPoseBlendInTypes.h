#pragma once
#include "CoreMinimal.h"
#include "EHandPoseBlendInTypes.generated.h"

UENUM(BlueprintType)
enum class EHandPoseBlendInTypes : uint8 {
    Attack,
    Hitted,
    ItemUse,
    Dodge,
    Count,
    None,
};

