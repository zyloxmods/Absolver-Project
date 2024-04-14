#pragma once
#include "CoreMinimal.h"
#include "EMeditationExitReason.generated.h"

UENUM(BlueprintType)
enum class EMeditationExitReason : uint8 {
    NO_Exit,
    MenuLeave,
    EditCombo,
};

