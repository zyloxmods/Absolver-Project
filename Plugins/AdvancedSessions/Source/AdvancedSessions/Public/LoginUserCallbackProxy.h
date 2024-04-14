#pragma once
#include "CoreMinimal.h"


#include "LoginUserCallbackProxy.generated.h"

class APlayerController;
class ULoginUserCallbackProxy;
class UObject;

UCLASS(Blueprintable, MinimalAPI)
class ULoginUserCallbackProxy : public UObject {
    GENERATED_BODY()
public:
/*    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEmptyOnlineDelegate OnSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEmptyOnlineDelegate OnFailure;*/
    
    ULoginUserCallbackProxy();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static ULoginUserCallbackProxy* LoginUser(UObject* WorldContextObject, APlayerController* PlayerController, const FString& UserID, const FString& UserToken);
    
};

