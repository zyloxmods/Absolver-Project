#pragma once
#include "CoreMinimal.h"
#include "EInventorySearchOrder.generated.h"

UENUM(BlueprintType)
enum class EInventorySearchOrder : uint8 {
    EquippedFirst,
    MentoringItemFirst,
    AcquisitionDate,
    Weight,
    DamageBluntReduce,
    DamageCutReduce,
    Shards,
    FragmentCost,
    PrestigePointCost,
    Name,
    None,
    Count,
};

