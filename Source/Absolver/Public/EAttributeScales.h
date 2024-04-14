#pragma once
#include "CoreMinimal.h"
#include "EAttributeScales.generated.h"

UENUM(BlueprintType)
enum class EAttributeScales : uint8 {
    S,
    A,
    B,
    C,
    D,
    E,
    Count,
    None,
};

