#pragma once
#include "CoreMinimal.h"
#include "EEffectTarget.generated.h"

UENUM(BlueprintType)
enum class EEffectTarget : uint8 {
    Self,
    Target,
    AOE,
};

