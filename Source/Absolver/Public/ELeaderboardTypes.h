#pragma once
#include "CoreMinimal.h"
#include "ELeaderboardTypes.generated.h"

UENUM(BlueprintType)
enum class ELeaderboardTypes : uint8 {
    SchoolTop,
    SchoolTotal,
    Player,
    Count,
};

