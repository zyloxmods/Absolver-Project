#pragma once
#include "CoreMinimal.h"
#include "NetOrderStruct.h"
#include "NetOrderStructDodge.generated.h"

USTRUCT(BlueprintType)
struct FNetOrderStructDodge : public FNetOrderStruct {
    GENERATED_BODY()
public:
    ABSOLVER_API FNetOrderStructDodge();
};

