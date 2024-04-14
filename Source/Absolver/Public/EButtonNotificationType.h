#pragma once
#include "CoreMinimal.h"
#include "EButtonNotificationType.generated.h"

UENUM(BlueprintType)
enum class EButtonNotificationType : uint8 {
    NewTrial_1V1,
    NewTrial_3V3,
    NewSparePoints,
    NewAttacks,
    NewInventoryItems,
    NewLootBox,
    NewEmote,
    NewIntro1v1,
    NewTrial_PvE,
};

