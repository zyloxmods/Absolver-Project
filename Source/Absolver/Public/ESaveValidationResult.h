#pragma once
#include "CoreMinimal.h"
#include "ESaveValidationResult.generated.h"

UENUM(BlueprintType)
enum class ESaveValidationResult : uint8 {
    Valid,
    Empty,
    ContainsNonAlphaNumeric,
    AlreadyExist,
    TooLong,
};

