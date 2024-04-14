#pragma once
#include "CoreMinimal.h"
#include "EProceduralRewardType.generated.h"

UENUM(BlueprintType)
enum class EProceduralRewardType : uint8 {
    LOOT,
    UNUSED,
    BANK,
    HEALSTONE,
    COUNT,
};

