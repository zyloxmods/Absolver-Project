#pragma once
#include "CoreMinimal.h"
#include "EEndGameResult.generated.h"

UENUM(BlueprintType)
enum class EEndGameResult : uint8 {
    Victory,
    Defeat,
    Draw,
    None,
};

