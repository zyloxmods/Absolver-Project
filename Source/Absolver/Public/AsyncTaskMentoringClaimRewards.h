#pragma once
#include "CoreMinimal.h"
#include "MenuAsyncActionBase.h"
#include "SeasonRewards.h"
#include "AsyncTaskMentoringClaimRewards.generated.h"

class UAsyncTaskMentoringClaimRewards;
class UMenuWidget;

UCLASS(Blueprintable)
class UAsyncTaskMentoringClaimRewards : public UMenuAsyncActionBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAsyncTaskClaimRewardsCompleted, const FText&, _error);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAsyncTaskClaimRewardsCompleted OnSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAsyncTaskClaimRewardsCompleted OnFail;
    
    UAsyncTaskMentoringClaimRewards();

    UFUNCTION(BlueprintCallable)
    static UAsyncTaskMentoringClaimRewards* BPF_MentoringClaimRewards(UMenuWidget* _menu, TArray<FSeasonRewards> _rewards, const int32& _rewardID);
    
};

