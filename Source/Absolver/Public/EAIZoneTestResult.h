#pragma once
#include "CoreMinimal.h"
#include "EAIZoneTestResult.generated.h"

UENUM(BlueprintType)
enum class EAIZoneTestResult : uint8 {
    Outside,
    InBuffer,
    Inside,
};

