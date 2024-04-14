#pragma once
#include "CoreMinimal.h"
#include "NetOrderStruct.h"
#include "NetOrderStructEmote.generated.h"

USTRUCT(BlueprintType)
struct FNetOrderStructEmote : public FNetOrderStruct {
    GENERATED_BODY()
public:
    ABSOLVER_API FNetOrderStructEmote();
};

