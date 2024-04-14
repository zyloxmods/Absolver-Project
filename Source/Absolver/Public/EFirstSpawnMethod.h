#pragma once
#include "CoreMinimal.h"
#include "EFirstSpawnMethod.generated.h"

UENUM(BlueprintType)
enum class EFirstSpawnMethod : uint8 {
    AtTheBeginning,
    WithATimer,
    OnAnEvent,
    Count,
    Invalid,
};

