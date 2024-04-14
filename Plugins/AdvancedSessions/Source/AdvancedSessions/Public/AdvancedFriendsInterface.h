#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"

#include "BPUniqueNetId.h"
#include "EBPLoginStatus.h"
#include "AdvancedFriendsInterface.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UAdvancedFriendsInterface : public UInterface {
    GENERATED_BODY()
};

class IAdvancedFriendsInterface : public IInterface {
    GENERATED_BODY()
public:/*
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSessionInviteReceived(FBPUniqueNetId PersonInviting, const FBlueprintSessionResult& SearchResult);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSessionInviteAccepted(FBPUniqueNetId PersonInviting, const FBlueprintSessionResult& SearchResult);
    */
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayerVoiceStateChanged(FBPUniqueNetId PlayerId, bool bIsTalking);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayerLoginStatusChanged(EBPLoginStatus& PreviousStatus, EBPLoginStatus& NewStatus, FBPUniqueNetId& PlayerUniqueNetID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayerLoginChanged(int32 PlayerNum);
    
};

