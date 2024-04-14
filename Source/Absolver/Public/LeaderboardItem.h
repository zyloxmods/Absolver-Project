#pragma once
#include "CoreMinimal.h"
#include "BPUserID.h"
#include "LeaderboardItem.generated.h"

USTRUCT(BlueprintType)
struct ABSOLVER_API FLeaderboardItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBPUserID m_UserID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iScore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iRank;
    
    FLeaderboardItem();
};

