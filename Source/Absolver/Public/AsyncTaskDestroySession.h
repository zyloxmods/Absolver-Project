#pragma once
#include "CoreMinimal.h"
//#include "ESessionTypes.h"
#include "MenuAsyncActionBase.h"
#include "AsyncTaskDestroySession.generated.h"

class UAsyncTaskDestroySession;
class UObject;

UCLASS(Blueprintable)
class UAsyncTaskDestroySession : public UMenuAsyncActionBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAsyncTaskDestroySessionErrorDelegate, const FString&, _error);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAsyncTaskDestroySessionErrorDelegate OnSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAsyncTaskDestroySessionErrorDelegate OnFail;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAsyncTaskDestroySessionErrorDelegate OnMenuTransition;
    
    UAsyncTaskDestroySession();

    //UFUNCTION(BlueprintCallable)
  //  static UAsyncTaskDestroySession* BPF_DestroySessionAsync(UObject* _menu, ESessionTypes _eSessionType);
    
};

