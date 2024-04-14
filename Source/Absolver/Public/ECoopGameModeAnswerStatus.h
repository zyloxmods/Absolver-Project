#pragma once
#include "CoreMinimal.h"
#include "ECoopGameModeAnswerStatus.generated.h"

UENUM(BlueprintType)
enum class ECoopGameModeAnswerStatus : uint8 {
    None,
    YesOnTheWay,
    Yes,
    No,
    Leader,
    Count,
};

