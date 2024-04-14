#pragma once
#include "CoreMinimal.h"
#include "EObjectiveType.generated.h"

UENUM(BlueprintType)
enum class EObjectiveType : uint8 {
    None,
    KillAllAI,
    ProtectStatue,
    ClearWave,
    KillMarkedOne,
    Boss,
    EObjectiveType_Count,
};

