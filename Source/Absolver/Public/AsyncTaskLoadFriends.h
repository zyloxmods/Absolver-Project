#pragma once
#include "CoreMinimal.h"
#include "MenuAsyncActionBase.h"
#include "SocialLoadFriendsErrorDelegateDelegate.h"
#include "AsyncTaskLoadFriends.generated.h"

class UAsyncTaskLoadFriends;
class UObject;

UCLASS(Blueprintable)
class UAsyncTaskLoadFriends : public UMenuAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSocialLoadFriendsErrorDelegate OnSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSocialLoadFriendsErrorDelegate OnFail;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSocialLoadFriendsErrorDelegate OnMenuTransition;
    
    UAsyncTaskLoadFriends();

    UFUNCTION(BlueprintCallable)
    static UAsyncTaskLoadFriends* BPF_LoadFriendsAsync(UObject* _menu);
    
};

