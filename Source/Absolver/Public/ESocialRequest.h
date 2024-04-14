#pragma once
#include "CoreMinimal.h"
#include "ESocialRequest.generated.h"

UENUM(BlueprintType)
enum class ESocialRequest : uint8 {
    Coop,
    StopFight,
    PlayGameMode_1V1_Coop,
    PlayGameMode_3V3_Coop,
    PlayGameMode_PvE_Coop,
    Count,
    None,
};

