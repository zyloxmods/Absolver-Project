#pragma once
#include "CoreMinimal.h"
#include "NetOrderStruct.h"
#include "NetOrderStructAltarInteraction.generated.h"

USTRUCT(BlueprintType)
struct FNetOrderStructAltarInteraction : public FNetOrderStruct {
    GENERATED_BODY()
public:
    ABSOLVER_API FNetOrderStructAltarInteraction();
};

