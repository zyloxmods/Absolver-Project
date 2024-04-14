#pragma once
#include "CoreMinimal.h"
#include "ESeasonRewardType.h"
#include "LeaderboardReward.generated.h"

USTRUCT(BlueprintType)
struct ABSOLVER_API FLeaderboardReward {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    uint32 m_uiCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    ESeasonRewardType m_eRewardType;
    
    FLeaderboardReward();
};

