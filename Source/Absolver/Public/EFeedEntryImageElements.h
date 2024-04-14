#pragma once
#include "CoreMinimal.h"
#include "EFeedEntryImageElements.generated.h"

UENUM(BlueprintType)
enum class EFeedEntryImageElements : uint8 {
    Picto_Custom01,
    Picto_Custom02,
    Picto_Custom03,
    Picto_Custom04,
    Picto_Custom05,
    Picto_Custom06,
    Picto_Custom07,
    Picto_Custom08,
    Picto_Custom09,
    Picto_Custom10,
    Picto_Arrow,
    Picto_EnteredArea,
    Picto_EnteredGame,
    Picto_LeftArea,
    Picto_LeftGame,
    Picto_Died,
    Picto_KilledBy,
    Picto_Coop,
    Picto_StopFight,
    Picto_Fight,
    Picto_StopCoop,
    Picto_CoopRequest,
    Picto_StopFightRequest,
    Picto_CoopRequestRefused,
    Picto_StopFightRequestRefused,
    Picto_FightDetectionWarning,
    Picto_KilledBy_Sword,
    Picto_KilledBy_WarGloves,
    Picto_Revive,
    Picto_KilledBy_Spikes,
    Count,
    None,
};

