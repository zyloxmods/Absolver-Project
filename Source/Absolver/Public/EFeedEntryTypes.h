#pragma once
#include "CoreMinimal.h"
#include "EFeedEntryTypes.generated.h"

UENUM(BlueprintType)
enum class EFeedEntryTypes : uint8 {
    CustomFeedEntry01,
    CustomFeedEntry02,
    CustomFeedEntry03,
    CustomFeedEntry04,
    CustomFeedEntry05,
    CustomFeedEntry06,
    CustomFeedEntry07,
    CustomFeedEntry08,
    CustomFeedEntry09,
    CustomFeedEntry10,
    CoopRequest,
    CoopRequestRefused,
    Cooperating,
    StopCoop,
    StopFightRequest,
    StopFightRequestRefused,
    StopFight,
    Fight,
    EnteredArea,
    EnteredGameMode,
    LeftArea,
    LeftGameMode,
    FightDetectionWarning,
    Death,
    Kill,
    SessionInvitationSent,
    Kill_Sword,
    Kill_WarGloves,
    Revive,
    Kill_Spikes,
    Count,
    None,
};

