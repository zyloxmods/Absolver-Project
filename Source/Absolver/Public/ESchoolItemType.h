#pragma once
#include "CoreMinimal.h"
#include "ESchoolItemType.generated.h"

UENUM(BlueprintType)
enum class ESchoolItemType : uint8 {
    Item1,
    Item2,
    Weapon,
    Mask,
    None,
};

