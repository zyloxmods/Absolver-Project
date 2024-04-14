#pragma once
#include "CoreMinimal.h"
#include "EUIInputModes.generated.h"

UENUM(BlueprintType)
enum class EUIInputModes : uint8 {
    Controller,
    Mouse,
    Count,
    None,
};

