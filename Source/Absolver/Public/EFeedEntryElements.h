#pragma once
#include "CoreMinimal.h"
#include "EFeedEntryElements.generated.h"

UENUM(BlueprintType)
enum class EFeedEntryElements : uint8 {
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
    Text_Custom01 = 128,
    Text_Custom02,
    Text_Custom03,
    Text_Custom04,
    Text_Custom05,
    Text_Custom06,
    Text_Custom07,
    Text_Custom08,
    Text_Custom09,
    Text_Custom10,
    Text_MyNickname,
    Text_OtherNickName,
    Text_OtherNickName2,
    Text_You,
    Text_EnteredArea,
    Text_EnteredGame,
    Text_LeftArea,
    Text_LeftGame,
    Text_Died,
    Text_KilledBy,
    Text_Coop,
    Text_StopFight,
    Text_Fight,
    Text_StopCoop,
    Text_CoopRequest,
    Text_StopFightRequest,
    Text_CoopRequestRefused,
    Text_StopFightRequestRefused,
    Text_FightDetectionWarning,
    Text_KilledBy_Sword,
    Text_KilledBy_WarGloves,
    Text_Revive,
    CustomBackground_Begin = 241,
    CustomBackground_End,
    CustomFeedEntryElement01,
    CustomFeedEntryElement02,
    CustomFeedEntryElement03,
    CustomFeedEntryElement04,
    CustomFeedEntryElement05,
    CustomFeedEntryElement06,
    CustomFeedEntryElement07,
    CustomFeedEntryElement08,
    CustomFeedEntryElement09,
    CustomFeedEntryElement10,
    Count,
    None,
};
