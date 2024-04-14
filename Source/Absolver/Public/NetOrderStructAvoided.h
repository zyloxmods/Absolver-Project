#pragma once
#include "CoreMinimal.h"
#include "NetOrderStruct.h"
#include "NetOrderStructAvoided.generated.h"

USTRUCT(BlueprintType)
struct FNetOrderStructAvoided : public FNetOrderStruct {
    GENERATED_BODY()
public:
    ABSOLVER_API FNetOrderStructAvoided();
};

