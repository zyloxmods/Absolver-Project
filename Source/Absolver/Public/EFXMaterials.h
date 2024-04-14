#pragma once
#include "CoreMinimal.h"
#include "EFXMaterials.generated.h"

UENUM(BlueprintType)
enum class EFXMaterials : uint8 {
    GuardBreak,
    Absorb,
    Interrupt,
    Cancel,
    Parry,
    SuccessfullAvoid,
    Spawn,
    Unbreakable,
    ShadowAvoid,
    SharpImpact,
    Count,
    None,
    Invalid,
};

