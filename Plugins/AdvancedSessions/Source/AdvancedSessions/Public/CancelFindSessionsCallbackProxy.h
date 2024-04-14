#pragma once
#include "CoreMinimal.h"


#include "CancelFindSessionsCallbackProxy.generated.h"

class APlayerController;
class UObject;

UCLASS(Blueprintable, MinimalAPI)
class UCancelFindSessionsCallbackProxy : public UObject {
    GENERATED_BODY()
public:/*
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEmptyOnlineDelegate OnSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEmptyOnlineDelegate OnFailure;
    */
    UCancelFindSessionsCallbackProxy();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UCancelFindSessionsCallbackProxy* CancelFindSessions(UObject* WorldContextObject, APlayerController* PlayerController);
    
};

