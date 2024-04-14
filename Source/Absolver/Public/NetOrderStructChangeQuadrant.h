#pragma once
#include "CoreMinimal.h"
#include "NetOrderStruct.h"
#include "NetOrderStructChangeQuadrant.generated.h"

USTRUCT(BlueprintType)
struct FNetOrderStructChangeQuadrant : public FNetOrderStruct {
    GENERATED_BODY()
public:
    ABSOLVER_API FNetOrderStructChangeQuadrant();
};

