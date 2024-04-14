#pragma once
#include "CoreMinimal.h"
#include "EAnimMetaState.generated.h"

UENUM(BlueprintType)
enum class EAnimMetaState : uint8 {
    Idle,
    Meditation,
    Dodge,
    ChangeQuadrant,
    Hitted,
    Attack,
    Special,
    Parried,
    Cancel,
    Spawn,
    ItemUse,
    Emote,
    AltarInteraction,
    WeaponAction,
    Revive,
    BeingRevived,
    Count,
    None,
};

