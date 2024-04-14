#pragma once
#include "CoreMinimal.h"
#include "EMatchMakingStatus.generated.h"

UENUM(BlueprintType)
enum class EMatchMakingStatus : uint8 {
    None,
    FindingSession,
    HostFound,
    Launching,
    WaitingForPlayers,
    WaitingForServer,
    Failed,
    Success,
    Canceled,
    Count,
};

