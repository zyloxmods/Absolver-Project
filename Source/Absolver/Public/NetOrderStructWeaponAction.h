#pragma once
#include "CoreMinimal.h"
#include "NetOrderStruct.h"
#include "NetOrderStructWeaponAction.generated.h"

USTRUCT(BlueprintType)
struct FNetOrderStructWeaponAction : public FNetOrderStruct {
    GENERATED_BODY()
public:
    ABSOLVER_API FNetOrderStructWeaponAction();
};

