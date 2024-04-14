#pragma once
#include "CoreMinimal.h"

#include "BPUniqueNetId.h"
#include "FindFriendSessionCallbackProxy.generated.h"

class APlayerController;
class UObject;

UCLASS(Blueprintable, MinimalAPI)
class UFindFriendSessionCallbackProxy : public UObject {
    GENERATED_BODY()
public:/*
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlueprintFindFriendSessionDelegate OnSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlueprintFindFriendSessionDelegate OnFailure;
    */
    UFindFriendSessionCallbackProxy();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UFindFriendSessionCallbackProxy* FindFriendSession(UObject* WorldContextObject, APlayerController* PlayerController, const FBPUniqueNetId& FriendUniqueNetId);
    
};

