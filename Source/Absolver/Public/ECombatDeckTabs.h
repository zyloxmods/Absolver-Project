#pragma once
#include "CoreMinimal.h"
#include "ECombatDeckTabs.generated.h"

UENUM(BlueprintType)
enum class ECombatDeckTabs : uint8 {
    BareHands,
    EngravedEquipped,
    BareHandsWeapon,
    Sword,
    Count,
};

