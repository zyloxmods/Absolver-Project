#pragma once
#include "CoreMinimal.h"
#include "ELeaderboardTypes.h"
#include "LeaderboardItem.h"
#include "MenuAsyncActionBase.h"
#include "School.h"
#include "SchoolMember.h"
#include "AsyncTaskGetLeaderboard.generated.h"

class UAsyncTaskGetLeaderboard;
class UMenuWidget;

UCLASS(Blueprintable)
class UAsyncTaskGetLeaderboard : public UMenuAsyncActionBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_SevenParams(FAsyncTaskGetLeaderboardCompleted, const TArray<FLeaderboardItem>&, _ownerLeaderboard, const TArray<FLeaderboardItem>&, _leaderboard, int32, _iMyScore, int32, _iMyRank, int32, _iCount, int32, _iSeasonID, const FText&, _error);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAsyncTaskGetLeaderboardCompleted OnSchoolInexistant;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAsyncTaskGetLeaderboardCompleted OnSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAsyncTaskGetLeaderboardCompleted OnFail;
    
    UAsyncTaskGetLeaderboard();

    UFUNCTION(BlueprintCallable)
    static UAsyncTaskGetLeaderboard* BPF_GetLeaderboard(UMenuWidget* _menu, const FSchool& _school, const FSchoolMember& _member, ELeaderboardTypes _eLeaderboard, int32 _iSeasonID, int32 _iIndex, int32 _iCount);
    
};

