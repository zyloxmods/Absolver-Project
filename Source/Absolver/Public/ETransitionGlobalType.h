#pragma once
#include "CoreMinimal.h"
#include "ETransitionGlobalType.generated.h"

UENUM(BlueprintType)
enum class ETransitionGlobalType : uint8 {
    Start,
    Stop,
    UTurn,
    Landing,
    Count,
    None,
};

