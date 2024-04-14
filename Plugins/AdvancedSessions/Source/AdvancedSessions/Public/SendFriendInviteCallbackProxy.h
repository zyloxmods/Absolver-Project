#pragma once
#include "CoreMinimal.h"

#include "BPUniqueNetId.h"
#include "BlueprintSendFriendInviteDelegateDelegate.h"
#include "SendFriendInviteCallbackProxy.generated.h"

class APlayerController;
class UObject;
class USendFriendInviteCallbackProxy;

UCLASS(Blueprintable, MinimalAPI)
class USendFriendInviteCallbackProxy : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlueprintSendFriendInviteDelegate OnSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlueprintSendFriendInviteDelegate OnFailure;
    
    USendFriendInviteCallbackProxy();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USendFriendInviteCallbackProxy* SendFriendInvite(UObject* WorldContextObject, APlayerController* PlayerController, const FBPUniqueNetId& UniqueNetIDInvited);
    
};

