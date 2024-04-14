#pragma once
#include "CoreMinimal.h"
#include "ECoopUserDisplayType.generated.h"

UENUM()
enum class ECoopUserDisplayType : int32 {
    ForceSelf,
    SkipSelf,
    None,
};

