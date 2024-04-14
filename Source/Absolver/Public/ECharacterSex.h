#pragma once
#include "CoreMinimal.h"
#include "ECharacterSex.generated.h"

UENUM(BlueprintType)
enum class ECharacterSex : uint8 {
    Man,
    Woman,
    Count,
    None,
};

