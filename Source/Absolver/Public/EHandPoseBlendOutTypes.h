#pragma once
#include "CoreMinimal.h"
#include "EHandPoseBlendOutTypes.generated.h"

UENUM(BlueprintType)
enum class EHandPoseBlendOutTypes : uint8 {
    Meditation,
    Dodge,
    ChangeQuadrant,
    Hitted,
    Attack,
    Special,
    Parried,
    Cancel,
    ItemUse,
    Emote,
    Count,
    None,
};

