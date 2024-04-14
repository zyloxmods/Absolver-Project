#pragma once
#include "CoreMinimal.h"
#include "ETrainingRequest.generated.h"

UENUM(BlueprintType)
enum class ETrainingRequest : uint8 {
    None,
    Open,
    Close,
};

