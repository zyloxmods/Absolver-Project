#pragma once
#include "CoreMinimal.h"
#include "EFeintGaugeVariationType.generated.h"

UENUM(BlueprintType)
enum class EFeintGaugeVariationType : uint8 {
    Bonus_Avoided,
    Bonus_Parried,
    Bonus_Absorbed,
    Bonus_Dodged,
    Malus_AttackSucceed,
    Count,
    Reset,
};

