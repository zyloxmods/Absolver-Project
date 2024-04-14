#pragma once
#include "CoreMinimal.h"
#include "LeaderboardReward.h"
#include "LeaderboardInfos.generated.h"

USTRUCT(BlueprintType)
struct ABSOLVER_API FLeaderboardInfos {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    uint32 m_RankPerRewardTier[2];
    
    UPROPERTY(EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FLeaderboardReward m_LeaderboardReward[3];
    
    FLeaderboardInfos();
};

