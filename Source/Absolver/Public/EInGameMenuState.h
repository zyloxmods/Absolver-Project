#pragma once
#include "CoreMinimal.h"
#include "EInGameMenuState.generated.h"

UENUM(BlueprintType)
enum class EInGameMenuState : uint8 {
    BeforeOpen,
    Open,
    IdleMenuAction,
    BeforeClosed,
    Closed,
    Disable,
};

