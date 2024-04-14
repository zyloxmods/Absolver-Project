#pragma once
#include "CoreMinimal.h"
#include "EBlockerSate.generated.h"

UENUM(BlueprintType)
enum class EBlockerSate : uint8 {
    Blocked,
    Open,
    Locked,
    CantBeOpened,
    NoDoor,
    WaitingForPlayers,
    WaitingForInteraction,
    AlreadyCleared,
    None,
};

