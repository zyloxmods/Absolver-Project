#pragma once
#include "CoreMinimal.h"
#include "EPendingttackXPType.generated.h"

UENUM(BlueprintType)
enum class EPendingttackXPType : uint8 {
    DefenseAttack,
    OffenseAttack,
    Num,
};

