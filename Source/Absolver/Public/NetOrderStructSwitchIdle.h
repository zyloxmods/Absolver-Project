#pragma once
#include "CoreMinimal.h"
#include "NetOrderStruct.h"
#include "NetOrderStructSwitchIdle.generated.h"

USTRUCT(BlueprintType)
struct FNetOrderStructSwitchIdle : public FNetOrderStruct {
    GENERATED_BODY()
public:
    ABSOLVER_API FNetOrderStructSwitchIdle();
};

