#pragma once
#include "CoreMinimal.h"
#include "NetOrderStruct.h"
#include "NetOrderStructHitted.generated.h"

USTRUCT(BlueprintType)
struct FNetOrderStructHitted : public FNetOrderStruct {
    GENERATED_BODY()
public:
    ABSOLVER_API FNetOrderStructHitted();
};

