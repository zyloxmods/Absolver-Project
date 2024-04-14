#pragma once
#include "CoreMinimal.h"
#include "NetOrderStruct.h"
#include "NetOrderStructMeditation.generated.h"

USTRUCT(BlueprintType)
struct FNetOrderStructMeditation : public FNetOrderStruct {
    GENERATED_BODY()
public:
    ABSOLVER_API FNetOrderStructMeditation();
};

