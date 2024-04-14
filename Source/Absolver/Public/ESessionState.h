#pragma once
#include "CoreMinimal.h"
#include "ESessionState.generated.h"

UENUM(BlueprintType)
enum class ESessionState : uint8 {
    PVE,
    EnterPVP,
    InPVP,
    InPVPMigration,
    Count,
    None,
};

