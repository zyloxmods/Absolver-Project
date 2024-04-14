#pragma once
#include "CoreMinimal.h"
#include "EGatherEndType.generated.h"

UENUM(BlueprintType)
enum class EGatherEndType : uint8 {
    None,
    Victory,
    Defeat,
};

