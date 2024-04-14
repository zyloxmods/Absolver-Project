#pragma once
#include "CoreMinimal.h"
#include "MenuAsyncActionBase.h"
#include "AsyncTaskCreateCoopSession.generated.h"

class UAsyncTaskCreateCoopSession;
class UObject;

UCLASS(Blueprintable)
class UAsyncTaskCreateCoopSession : public UMenuAsyncActionBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAsyncTaskCreateCoopSessionCompleted, const FText&, _error);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAsyncTaskCreateCoopSessionCompleted OnSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAsyncTaskCreateCoopSessionCompleted OnFail;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAsyncTaskCreateCoopSessionCompleted OnMenuTransition;
    
    UAsyncTaskCreateCoopSession();

    UFUNCTION(BlueprintCallable)
    static UAsyncTaskCreateCoopSession* BPF_CreateCoopSession(UObject* _menu);
    
};

