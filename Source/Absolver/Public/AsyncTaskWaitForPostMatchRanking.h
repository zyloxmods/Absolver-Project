#pragma once
#include "CoreMinimal.h"
#include "MenuAsyncActionBase.h"
#include "AsyncTaskWaitForPostMatchRanking.generated.h"

class UAsyncTaskWaitForPostMatchRanking;
class UObject;

UCLASS(Blueprintable)
class UAsyncTaskWaitForPostMatchRanking : public UMenuAsyncActionBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FAsyncTaskCompleted);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAsyncTaskCompleted Completed;
    
    UAsyncTaskWaitForPostMatchRanking();

    UFUNCTION(BlueprintCallable)
    static UAsyncTaskWaitForPostMatchRanking* BPF_WaitForPostMatchRanking(UObject* _menu);
    
};

