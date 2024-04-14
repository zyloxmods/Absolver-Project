#pragma once
#include "CoreMinimal.h"
#include "NetOrderStruct.h"
#include "NetOrderStructParried.generated.h"

USTRUCT(BlueprintType)
struct FNetOrderStructParried : public FNetOrderStruct {
    GENERATED_BODY()
public:
    ABSOLVER_API FNetOrderStructParried();
};

