#pragma once
#include "CoreMinimal.h"


#include "LogoutUserCallbackProxy.generated.h"

class APlayerController;
class ULogoutUserCallbackProxy;
class UObject;

UCLASS(Blueprintable, MinimalAPI)
class ULogoutUserCallbackProxy : public UObject {
    GENERATED_BODY()
public:
 /*   UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEmptyOnlineDelegate OnSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEmptyOnlineDelegate OnFailure;
    */
    ULogoutUserCallbackProxy();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static ULogoutUserCallbackProxy* LogoutUser(UObject* WorldContextObject, APlayerController* PlayerController);
    
};

