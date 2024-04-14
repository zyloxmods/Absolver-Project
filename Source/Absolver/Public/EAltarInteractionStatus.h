#pragma once
#include "CoreMinimal.h"
#include "EAltarInteractionStatus.generated.h"

UENUM(BlueprintType)
enum class EAltarInteractionStatus : uint8 {
    None,
    WantsInteraction,
    EnteringInteraction,
    Interacting,
    WantsLeavingInteraction,
    LeavingInteraction,
};

