#pragma once
#include "CoreMinimal.h"
#include "EPlayerNumber.generated.h"

UENUM(BlueprintType)
enum class EPlayerNumber : uint8 {
    One,
    Two,
    Three,
    EPlayerNumber_Count,
};

