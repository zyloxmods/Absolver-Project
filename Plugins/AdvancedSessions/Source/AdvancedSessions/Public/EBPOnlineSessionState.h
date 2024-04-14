#pragma once
#include "CoreMinimal.h"
#include "EBPOnlineSessionState.generated.h"

UENUM(BlueprintType)
enum class EBPOnlineSessionState : uint8 {
    NoSession,
    Creating,
    Pending,
    Starting,
    InProgress,
    Ending,
    Ended,
    Destroying,
};

