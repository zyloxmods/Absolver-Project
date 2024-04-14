#pragma once
#include "CoreMinimal.h"
#include "NetOrderStruct.h"
#include "NetOrderStructSpecialAbility.generated.h"

USTRUCT(BlueprintType)
struct FNetOrderStructSpecialAbility : public FNetOrderStruct {
    GENERATED_BODY()
public:
    ABSOLVER_API FNetOrderStructSpecialAbility();
};

