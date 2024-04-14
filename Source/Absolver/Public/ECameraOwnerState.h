#pragma once
#include "CoreMinimal.h"
#include "ECameraOwnerState.generated.h"

UENUM(BlueprintType)
enum class ECameraOwnerState : uint8 {
    Dead,
    Fighting,
};

