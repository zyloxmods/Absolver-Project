#pragma once
#include "CoreMinimal.h"
#include "EBPUserPrivileges.generated.h"

UENUM(BlueprintType)
enum class EBPUserPrivileges : uint8 {
    CanPlay,
    CanPlayOnline,
    CanCommunicateOnline,
    CanUseUserGeneratedContent,
};

