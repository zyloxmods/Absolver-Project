#pragma once
#include "CoreMinimal.h"
#include "EMTRuntimeThirdPartyFeatures.generated.h"

UENUM(BlueprintType)
enum class EMTRuntimeThirdPartyFeatures : uint8 {
    POLYINSET = 1,
    FILLHOLE,
    OPENSUBDIV = 4,
    MESHBOOLEAN = 8,
};

