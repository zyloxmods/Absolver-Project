#pragma once
#include "CoreMinimal.h"


#include "BPUniqueNetId.h"
#include "BlueprintGetUserPrivilegeDelegateDelegate.h"
#include "EBPUserPrivileges.h"
#include "GetUserPrivilegeCallbackProxy.generated.h"

class UGetUserPrivilegeCallbackProxy;
class UObject;

UCLASS(Blueprintable, MinimalAPI)
class UGetUserPrivilegeCallbackProxy : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlueprintGetUserPrivilegeDelegate OnSuccess;
    
  //  UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
//    FEmptyOnlineDelegate OnFailure;
    
    UGetUserPrivilegeCallbackProxy();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UGetUserPrivilegeCallbackProxy* GetUserPrivilege(UObject* WorldContextObject, const EBPUserPrivileges& PrivilegeToCheck, const FBPUniqueNetId& PlayerUniqueNetID);
    
};

