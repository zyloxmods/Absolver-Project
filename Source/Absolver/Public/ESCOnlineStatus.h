#pragma once
#include "CoreMinimal.h"
#include "ESCOnlineStatus.generated.h"

UENUM(BlueprintType)
enum class ESCOnlineStatus : uint8 {
    LOG_OUT,
    LOG_ASK,
    LOG_WAIT,
    LOG_IN,
    SERVER_DOWN,
    SERVER_FULL,
    USER_BAN,
    CONNECTION_LOST,
    VERSION_MISMATCH,
    ACCOUNT_UPGRADE_UI,
    ACCOUNT_TYPE_FAILURE,
    REQUIRED_SYSTEM_UPDATE,
    REQUIRED_PATCH_AVAILABLE,
    AGE_RESTRICTION_FAILURE,
    USER_NOT_FOUND,
    GENERIC_FAILURE,
};

