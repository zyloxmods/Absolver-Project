#pragma once
#include "CoreMinimal.h"
#include "EFeedEntryTextElements.generated.h"

UENUM(BlueprintType)
enum class EFeedEntryTextElements : uint8 {
    Text_Custom01,
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
    Count,
    None,
};

