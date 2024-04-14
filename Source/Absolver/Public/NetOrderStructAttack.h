#pragma once
#include "CoreMinimal.h"
#include "NetOrderStruct.h"
#include "NetOrderStructAttack.generated.h"

USTRUCT(BlueprintType)
struct FNetOrderStructAttack : public FNetOrderStruct {
    GENERATED_BODY()
public:
    ABSOLVER_API FNetOrderStructAttack();
};

