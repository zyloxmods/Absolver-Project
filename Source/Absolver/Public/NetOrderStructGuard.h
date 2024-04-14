#pragma once
#include "CoreMinimal.h"
#include "NetOrderStruct.h"
#include "NetOrderStructGuard.generated.h"

USTRUCT(BlueprintType)
struct FNetOrderStructGuard : public FNetOrderStruct {
    GENERATED_BODY()
public:
    ABSOLVER_API FNetOrderStructGuard();
};

