#pragma once
#include "CoreMinimal.h"
#include "EControllerNature.generated.h"

UENUM(BlueprintType)
enum class EControllerNature : uint8 {
    Player,
    AI,
    None,
};

