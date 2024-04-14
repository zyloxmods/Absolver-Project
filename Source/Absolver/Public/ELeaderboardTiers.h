#pragma once
#include "CoreMinimal.h"
#include "ELeaderboardTiers.generated.h"

UENUM(BlueprintType)
enum class ELeaderboardTiers : uint8 {
    High,
    Medium,
    Low,
    Count,
    None,
};

