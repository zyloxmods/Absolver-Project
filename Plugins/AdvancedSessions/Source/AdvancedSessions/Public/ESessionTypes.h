#pragma once
#include "CoreMinimal.h"
#include "ESessionTypes.generated.h"

UENUM(BlueprintType)
enum class ESessionTypes : uint8 {
    Game,
    Party,
};

