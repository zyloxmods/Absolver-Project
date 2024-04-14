#pragma once
#include "CoreMinimal.h"
#include "EAttackSequenceSelectionMode.generated.h"

UENUM(BlueprintType)
enum class EAttackSequenceSelectionMode : uint8 {
    Linear,
    Random,
    Invalid,
};

