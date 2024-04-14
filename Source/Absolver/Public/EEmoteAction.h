#pragma once
#include "CoreMinimal.h"
#include "EEmoteAction.generated.h"

UENUM(BlueprintType)
enum class EEmoteAction : uint8 {
    RequestCoop,
    AcceptCoop,
    StopCoop,
    DeclareFight,
    RequestStopFight,
    StopFight,
    Refuse,
    RequestPlayGameMode_1V1_Coop,
    RequestPlayGameMode_3V3_Coop,
    AcceptPlayGameModeCoop,
    RefusePlayGameModeCoop,
    RequestPlayGameMode_PvE_Coop,
    Count,
    None,
};

