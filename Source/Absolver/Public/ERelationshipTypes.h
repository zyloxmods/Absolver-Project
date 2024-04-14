#pragma once
#include "CoreMinimal.h"
#include "ERelationshipTypes.generated.h"

UENUM(BlueprintType)
enum class ERelationshipTypes : uint8 {
    Enemy,
    Fight,
    Object,
    Neutral,
    Coop,
    Ally,
    Count,
    None,
};

