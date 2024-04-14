#pragma once
#include "CoreMinimal.h"
#include "EInvitationState.generated.h"

UENUM(BlueprintType)
enum class EInvitationState : uint8 {
    None,
    Sent,
    Failed,
    Succeeded,
};

