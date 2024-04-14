#pragma once
#include "CoreMinimal.h"
#include "EOpenedStatus.generated.h"

UENUM(BlueprintType)
enum class EOpenedStatus : uint8 {
    Open,
    Close,
};

