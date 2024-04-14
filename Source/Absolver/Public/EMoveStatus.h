#pragma once
#include "CoreMinimal.h"
#include "EMoveStatus.generated.h"

UENUM(BlueprintType)
enum class EMoveStatus : uint8 {
    Exploration,
    Combat,
    None,
};

