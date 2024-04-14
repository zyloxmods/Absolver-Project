#pragma once
#include "CoreMinimal.h"
#include "ERematchMethod.generated.h"

UENUM(BlueprintType)
enum class ERematchMethod : uint8 {
    WinnerAndLoser,
    LoserOnly,
};

