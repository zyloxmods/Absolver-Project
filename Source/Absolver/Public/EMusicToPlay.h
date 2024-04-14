#pragma once
#include "CoreMinimal.h"
#include "EMusicToPlay.generated.h"

UENUM(BlueprintType)
enum class EMusicToPlay : uint8 {
    Tension,
    Fighting,
    GreatWin,
    CloseWin,
    NoStatue,
    Count,
};

