#pragma once
#include "CoreMinimal.h"
#include "ELockAction.generated.h"

UENUM(BlueprintType)
enum class ELockAction : uint8 {
    PreciseLock,
    SwitchTarget,
    LockFromPreviewTargetWhenAttacking,
    LockFromDesignatedTargetWhenAttacking,
    LockFromLandingHit,
    LockFromReceivingHit,
    LockFromPreviousTargetDisappearing,
    AttackDesignatedTarget,
    Count,
};

