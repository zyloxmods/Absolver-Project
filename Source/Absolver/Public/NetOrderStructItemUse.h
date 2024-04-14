#pragma once
#include "CoreMinimal.h"
#include "NetOrderStruct.h"
#include "NetOrderStructItemUse.generated.h"

USTRUCT(BlueprintType)
struct FNetOrderStructItemUse : public FNetOrderStruct {
    GENERATED_BODY()
public:
    ABSOLVER_API FNetOrderStructItemUse();
};

