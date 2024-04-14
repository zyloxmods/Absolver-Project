#pragma once
#include "CoreMinimal.h"
#include "EIntroButtonState.generated.h"

UENUM(BlueprintType)
enum class EIntroButtonState : uint8 {
    Equipped,
    NotEquipped,
    Locked,
};

