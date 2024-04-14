#pragma once
#include "CoreMinimal.h"
#include "EDownState.generated.h"

UENUM(BlueprintType)
enum class EDownState : uint8 {
    Down,
    WaitingForReviveTarget,
    Revivable,
    CoopWaitingEndOfFight,
    CoopRevivable,
    WaitingForRespawn,
    DownNoRespawn,
    BeingRevived,
    Death,
    DeathWaitingRespawn,
    DeathRespawn,
    DeathNoRespawn,
    RespawningAlone,
    WaitingForRespawnAnswer,
    GameEnded,
    DownSpectator,
    DeathSpectator,
    Count,
    None,
};

