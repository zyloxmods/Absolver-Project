#pragma once
#include "CoreMinimal.h"


#include "EndSessionCallbackProxy.generated.h"

class APlayerController;
class UEndSessionCallbackProxy;
class UObject;

UCLASS(Blueprintable, MinimalAPI)
class UEndSessionCallbackProxy : public UObject {
    GENERATED_BODY()
public:
 /*   UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEmptyOnlineDelegate OnSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEmptyOnlineDelegate OnFailure;
    */
    UEndSessionCallbackProxy();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UEndSessionCallbackProxy* EndSession(UObject* WorldContextObject, APlayerController* PlayerController);
    
};

