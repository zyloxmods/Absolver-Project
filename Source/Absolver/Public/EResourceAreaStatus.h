#pragma once
#include "CoreMinimal.h"
#include "EResourceAreaStatus.generated.h"

UENUM(BlueprintType)
enum class EResourceAreaStatus : uint8 {
    None,
    Team1Capturing,
    Team2Capturing,
    CapturedByTeam1,
    CapturedByTeam2,
    Contested,
    Count,
};

