#pragma once
#include "CoreMinimal.h"
#include "EAttackLearningState.generated.h"

UENUM(BlueprintType)
enum class EAttackLearningState : uint8 {
    Unknown,
    Learning,
    Unlocked,
    MentoringUnlocked,
    Count,
    None,
};

