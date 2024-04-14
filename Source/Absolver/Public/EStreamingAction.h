#pragma once
#include "CoreMinimal.h"
#include "EStreamingAction.generated.h"

UENUM(BlueprintType)
enum class EStreamingAction : uint8 {
    UnLoaded,
    Load,
    LoadAndVisible,
    ForceLoadAndVisible,
};

