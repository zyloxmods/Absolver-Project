#pragma once
#include "CoreMinimal.h"
#include "EObjectiveAvailability.generated.h"

UENUM(BlueprintType)
enum class EObjectiveAvailability : uint8 {
    NotAvailable,
    Available,
};

