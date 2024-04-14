#pragma once
#include "CoreMinimal.h"
#include "EAimIKSolverType.generated.h"

UENUM(BlueprintType)
enum class EAimIKSolverType : uint8 {
    Quaternion,
    NoRoll,
};

