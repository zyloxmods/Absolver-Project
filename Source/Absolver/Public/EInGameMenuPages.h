#pragma once
#include "CoreMinimal.h"
#include "EInGameMenuPages.generated.h"

UENUM(BlueprintType)
enum class EInGameMenuPages : uint8 {
    Status,
    CombatDeck,
    Equipment,
    Options,
    Invite,
    Quit,
    Count,
    None,
};

