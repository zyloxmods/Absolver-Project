#pragma once
#include "CoreMinimal.h"
#include "MenuAsyncActionBase.h"
#include "SeasonRewards.h"
#include "AsyncTaskMentoringGetPendingRewards.generated.h"

class UAsyncTaskMentoringGetPendingRewards;
class UMenuWidget;

UCLASS(Blueprintable)
class UAsyncTaskMentoringGetPendingRewards : public UMenuAsyncActionBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_SixParams(FAsyncTaskClaimRewardsCompleted, const TArray<FSeasonRewards>&, _rewards, const int32&, _iRewardID, int32, _iFragments, int32, _iRifts, int32, _iCrystals, const FText&, _error);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAsyncTaskClaimRewardsCompleted OnSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAsyncTaskClaimRewardsCompleted OnFail;
    
    UAsyncTaskMentoringGetPendingRewards();

    UFUNCTION(BlueprintCallable)
    static UAsyncTaskMentoringGetPendingRewards* BPF_MentoringGetPendingRewards(UMenuWidget* _menu);
    
};

