#pragma once
#include "CoreMinimal.h"
#include "ESCErrorType.generated.h"

UENUM(BlueprintType)
enum class ESCErrorType : uint8 {
    JoinInvitationError,
    NetworkServiceUnavailable,
    ConnectionError,
    Success,
    PlayerKicked,
    Unknown,
};

