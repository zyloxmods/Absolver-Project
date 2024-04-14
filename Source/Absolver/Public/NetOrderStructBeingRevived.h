#pragma once
#include "CoreMinimal.h"
#include "NetOrderStruct.h"
#include "NetOrderStructBeingRevived.generated.h"

USTRUCT(BlueprintType)
struct FNetOrderStructBeingRevived : public FNetOrderStruct {
    GENERATED_BODY()
public:
    ABSOLVER_API FNetOrderStructBeingRevived();
};

