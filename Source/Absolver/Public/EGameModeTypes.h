#pragma once
#include "CoreMinimal.h"
#include "EGameModeTypes.generated.h"

UENUM(BlueprintType)
enum class EGameModeTypes : uint8 {
    Mode1v1,
    Mode3v3,
    ModePVEMine,
    Count,
    None,
};

