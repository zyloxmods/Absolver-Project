#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "BPFriendInfo.h"
#include "BPOnlineRecentPlayer.h"
#include "BPUniqueNetId.h"
#include "EBlueprintAsyncResultSwitch.h"
#include "EBlueprintResultSwitch.h"
#include "UFriendAvatarSize.h"
#include "AdvancedFriendsLibrary.generated.h"

class APlayerController;
class UTexture2D;

UCLASS(Blueprintable)
class UAdvancedFriendsLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UAdvancedFriendsLibrary();

    UFUNCTION(BlueprintCallable)
    static void SendSessionInviteToFriends(APlayerController* PlayerController, const TArray<FBPUniqueNetId>& Friends, EBlueprintResultSwitch& Result);
    
    UFUNCTION(BlueprintCallable)
    static void SendSessionInviteToFriend(APlayerController* PlayerController, const FBPUniqueNetId& FriendUniqueNetId, EBlueprintResultSwitch& Result);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void IsAFriend(APlayerController* PlayerController, const FBPUniqueNetId UniqueNetId, bool& IsFriend);
    
    UFUNCTION(BlueprintCallable)
    static void GetStoredRecentPlayersList(FBPUniqueNetId UniqueNetId, TArray<FBPOnlineRecentPlayer>& PlayersList);
    
    UFUNCTION(BlueprintCallable)
    static void GetStoredFriendsList(APlayerController* PlayerController, TArray<FBPFriendInfo>& FriendsList);
    
    UFUNCTION(BlueprintCallable)
    static UTexture2D* GetFriendAvatar(const FBPUniqueNetId UniqueNetId, EBlueprintAsyncResultSwitch& Result, UFriendAvatarSize AvatarSize);
    
    UFUNCTION(BlueprintCallable)
    static void GetFriend(APlayerController* PlayerController, const FBPUniqueNetId FriendUniqueNetId, FBPFriendInfo& Friend);
    
};

