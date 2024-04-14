#pragma once
#include "CoreMinimal.h"
#include "ETutorialHUDState.generated.h"

UENUM(BlueprintType)
enum class ETutorialHUDState : uint8 {
    TutorialSelection,
    TutorialDisplayed,
    TriggerTutorialDisplayed,
    Exit,
    Count,
    None,
};

