#pragma once
#include "CoreMinimal.h"
#include "MenuAsyncActionBase.h"
#include "AsyncTaskJoinCoopSession.generated.h"

class UAsyncTaskJoinCoopSession;
class UObject;

UCLASS(Blueprintable)
class UAsyncTaskJoinCoopSession : public UMenuAsyncActionBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAsyncTaskJoinCoopSessionCompleted, const FText&, _error);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAsyncTaskJoinCoopSessionCompleted OnSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAsyncTaskJoinCoopSessionCompleted OnFail;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAsyncTaskJoinCoopSessionCompleted OnMenuTransition;
    
    UAsyncTaskJoinCoopSession();

    UFUNCTION(BlueprintCallable)
    static UAsyncTaskJoinCoopSession* BPF_JoinCoopSession(UObject* _menu, FText _password);
    
};

