#pragma once
#include "CoreMinimal.h"
#include "EMirrorAnimBehavior.generated.h"

UENUM(BlueprintType)
enum class EMirrorAnimBehavior : uint8 {
    Twins,
    NoTwins,
    Count,
    None,
};

