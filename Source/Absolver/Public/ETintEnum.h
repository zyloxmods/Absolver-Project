#pragma once
#include "CoreMinimal.h"
#include "ETintEnum.generated.h"

UENUM(BlueprintType)
enum class ETintEnum : uint8 {
    Base,
    Brighter,
    Darker,
    Warmer,
    Colder,
    ColorSwitch,
    Count,
    None,
};

