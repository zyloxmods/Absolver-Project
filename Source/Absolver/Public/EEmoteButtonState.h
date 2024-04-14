#pragma once
#include "CoreMinimal.h"
#include "EEmoteButtonState.generated.h"

UENUM(BlueprintType)
enum class EEmoteButtonState : uint8 {
    CurrentEquipped,
    Equipped,
    NotEquipped,
    Locked,
};

