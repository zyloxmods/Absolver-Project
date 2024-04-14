#pragma once
#include "CoreMinimal.h"
#include "EHUDUserWidgetVisibility.generated.h"

UENUM(BlueprintType)
enum class EHUDUserWidgetVisibility : uint8 {
    Visible,
    Hidden,
    None,
};

