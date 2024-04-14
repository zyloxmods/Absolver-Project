#pragma once
#include "CoreMinimal.h"

#include "BlueprintGetFriendsListDelegateDelegate.h"
#include "GetFriendsCallbackProxy.generated.h"

class APlayerController;
class UGetFriendsCallbackProxy;
class UObject;

UCLASS(Blueprintable, MinimalAPI)
class UGetFriendsCallbackProxy : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlueprintGetFriendsListDelegate OnSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlueprintGetFriendsListDelegate OnFailure;
    
    UGetFriendsCallbackProxy();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UGetFriendsCallbackProxy* GetAndStoreFriendsList(UObject* WorldContextObject, APlayerController* PlayerController);
    
};

