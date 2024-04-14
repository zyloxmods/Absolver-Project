#pragma once
#include "CoreMinimal.h"
#include "EImpactType.generated.h"

UENUM(BlueprintType)
enum class EImpactType : uint8 {
    Hit,
    Fall,
    Suicide,
    Fake,
    Hurt,
    Count,
    None,
};

