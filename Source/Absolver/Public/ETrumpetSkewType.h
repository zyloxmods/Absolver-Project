#pragma once
#include "CoreMinimal.h"
#include "ETrumpetSkewType.generated.h"

UENUM(BlueprintType)
enum class ETrumpetSkewType : uint8 {
    HorizontalVertical,
    HorizontalVerticalDiagonals,
    Diagonals,
};

