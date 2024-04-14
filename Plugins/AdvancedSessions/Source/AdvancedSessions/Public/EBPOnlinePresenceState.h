#pragma once
#include "CoreMinimal.h"
#include "EBPOnlinePresenceState.generated.h"

UENUM(BlueprintType)
enum class EBPOnlinePresenceState : uint8 {
    Online,
    Offline,
    Away,
    ExtendedAway,
    DoNotDisturb,
    Chat,
};

