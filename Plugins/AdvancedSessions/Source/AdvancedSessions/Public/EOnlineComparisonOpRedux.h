#pragma once
#include "CoreMinimal.h"
#include "EOnlineComparisonOpRedux.generated.h"

UENUM(BlueprintType)
enum class EOnlineComparisonOpRedux : uint8 {
    Equals,
    NotEquals,
    GreaterThan,
    GreaterThanEquals,
    LessThan,
    LessThanEquals,
};

