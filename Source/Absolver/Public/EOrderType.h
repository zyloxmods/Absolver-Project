#pragma once
#include "CoreMinimal.h"
#include "EOrderType.generated.h"

UENUM(BlueprintType)
enum class EOrderType : uint8 {
    None,
    Attack,
    Dodge,
    SpecialAbility,
    Parried,
    Hitted,
    SwitchIdle,
    Guard,
    Cancel,
    Meditate,
    ChangeQuadrant,
    Avoided,
    FreezeFrame,
    WeaponAction,
    Spawn,
    ItemUse,
    Emote,
    AltarInteraction,
    Revive,
    BeingRevived,
};

