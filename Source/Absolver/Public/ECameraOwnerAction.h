#pragma once
#include "CoreMinimal.h"
#include "ECameraOwnerAction.generated.h"

UENUM(BlueprintType)
enum class ECameraOwnerAction : uint8 {
    Dash,
    Jump,
    Jump2,
    Attack,
    Parry,
};

