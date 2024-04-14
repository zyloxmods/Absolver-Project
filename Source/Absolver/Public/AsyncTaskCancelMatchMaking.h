#pragma once
#include "CoreMinimal.h"
#include "MenuAsyncActionBase.h"
#include "AsyncTaskCancelMatchMaking.generated.h"

class UAsyncTaskCancelMatchMaking;
class UObject;

UCLASS(Blueprintable)
class UAsyncTaskCancelMatchMaking : public UMenuAsyncActionBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FAsyncTaskCancelMatchMakingCompleted);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAsyncTaskCancelMatchMakingCompleted OnSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAsyncTaskCancelMatchMakingCompleted OnFail;
    
    UAsyncTaskCancelMatchMaking();

    UFUNCTION(BlueprintCallable)
    static UAsyncTaskCancelMatchMaking* BPF_CancelMatchMaking(UObject* _menu);
    
};

