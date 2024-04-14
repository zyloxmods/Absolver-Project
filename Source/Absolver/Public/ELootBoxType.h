#pragma once
#include "CoreMinimal.h"
#include "ELootBoxType.generated.h"

UENUM(BlueprintType)
enum class ELootBoxType : uint8 {
    Default,
    Small,
    Big,
};

