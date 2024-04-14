#pragma once
#include "CoreMinimal.h"
#include "EComboAttackValidationStates.generated.h"

UENUM(BlueprintType)
enum class EComboAttackValidationStates : uint8 {
    Success,
    WrongEndQuadrant,
    PreviousAttackIsEmpty,
    PreviousAttackHasWrongEndQuadrant,
    CannotBeEmpty,
    AttackLocked,
};

