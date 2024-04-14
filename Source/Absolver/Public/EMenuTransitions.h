#pragma once
#include "CoreMinimal.h"
#include "EMenuTransitions.generated.h"

UENUM(BlueprintType)
enum class EMenuTransitions : uint8 {
    Push,
    Pop,
    Count,
    None,
};

