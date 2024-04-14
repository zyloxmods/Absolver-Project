#pragma once
#include "CoreMinimal.h"
#include "EHandPoses.generated.h"

UENUM(BlueprintType)
enum class EHandPoses : uint8 {
    HammerGrip,
    BrokenGrip,
    ReverseHammerGrip,
    ReverseBrokenGrip,
    Count,
    None,
};

