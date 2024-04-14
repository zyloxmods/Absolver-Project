#pragma once
#include "CoreMinimal.h"
#include "NetOrderStruct.h"
#include "NetOrderStructRevive.generated.h"

USTRUCT(BlueprintType)
struct FNetOrderStructRevive : public FNetOrderStruct {
    GENERATED_BODY()
public:
    ABSOLVER_API FNetOrderStructRevive();
};

