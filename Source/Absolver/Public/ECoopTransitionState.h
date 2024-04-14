#pragma once
#include "CoreMinimal.h"
#include "ECoopTransitionState.generated.h"

UENUM(BlueprintType)
enum class ECoopTransitionState : uint8 {
    WaitingForPlayersToJoin,
    WaitingForPlayersToStopFight,
    Count,
    None,
};

