#pragma once
#include "CoreMinimal.h"
#include "MenuAsyncActionBase.h"
#include "AsyncTaskFetchPlayerMentoringInfos.generated.h"

class UAsyncTaskFetchPlayerMentoringInfos;
class UObject;

UCLASS(Blueprintable)
class UAsyncTaskFetchPlayerMentoringInfos : public UMenuAsyncActionBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAsyncTaskFetchplayerMentoringInfosCompleted, const FText&, _error);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAsyncTaskFetchplayerMentoringInfosCompleted OnSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAsyncTaskFetchplayerMentoringInfosCompleted OnFail;
    
    UAsyncTaskFetchPlayerMentoringInfos();

    UFUNCTION(BlueprintCallable)
    static UAsyncTaskFetchPlayerMentoringInfos* BPF_FetchPlayerMentoringInfos(UObject* _menu);
    
};

