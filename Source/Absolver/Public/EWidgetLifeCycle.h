#pragma once
#include "CoreMinimal.h"
#include "EWidgetLifeCycle.generated.h"

UENUM(BlueprintType)
enum class EWidgetLifeCycle : uint8 {
    ReleaseOnPop,
    NeverReleased,
};

