#pragma once
#include "CoreMinimal.h"
#include "ETutorialUnlockState.generated.h"

UENUM(BlueprintType)
enum class ETutorialUnlockState : uint8 {
    Locked,
    Unlocked,
    NewlyUnlocked,
    Invalid,
    Count,
    None,
};

