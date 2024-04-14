#pragma once
#include "CoreMinimal.h"
#include "EEquipmentQuality.generated.h"

UENUM(BlueprintType)
enum class EEquipmentQuality : uint8 {
    Clean,
    Dirty,
    Gold,
};

