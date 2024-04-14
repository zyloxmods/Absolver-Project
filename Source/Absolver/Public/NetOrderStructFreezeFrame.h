#pragma once
#include "CoreMinimal.h"
#include "NetOrderStruct.h"
#include "NetOrderStructFreezeFrame.generated.h"

USTRUCT(BlueprintType)
struct FNetOrderStructFreezeFrame : public FNetOrderStruct {
    GENERATED_BODY()
public:
    ABSOLVER_API FNetOrderStructFreezeFrame();
};

