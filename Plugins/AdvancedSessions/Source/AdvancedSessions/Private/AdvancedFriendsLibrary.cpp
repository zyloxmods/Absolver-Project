#include "AdvancedFriendsLibrary.h"

UAdvancedFriendsLibrary::UAdvancedFriendsLibrary() {
}

void UAdvancedFriendsLibrary::SendSessionInviteToFriends(APlayerController* PlayerController, const TArray<FBPUniqueNetId>& Friends, EBlueprintResultSwitch& Result) {
}

void UAdvancedFriendsLibrary::SendSessionInviteToFriend(APlayerController* PlayerController, const FBPUniqueNetId& FriendUniqueNetId, EBlueprintResultSwitch& Result) {
}

void UAdvancedFriendsLibrary::IsAFriend(APlayerController* PlayerController, const FBPUniqueNetId UniqueNetId, bool& IsFriend) {
}

void UAdvancedFriendsLibrary::GetStoredRecentPlayersList(FBPUniqueNetId UniqueNetId, TArray<FBPOnlineRecentPlayer>& PlayersList) {
}

void UAdvancedFriendsLibrary::GetStoredFriendsList(APlayerController* PlayerController, TArray<FBPFriendInfo>& FriendsList) {
}

UTexture2D* UAdvancedFriendsLibrary::GetFriendAvatar(const FBPUniqueNetId UniqueNetId, EBlueprintAsyncResultSwitch& Result, UFriendAvatarSize AvatarSize) {
    return NULL;
}

void UAdvancedFriendsLibrary::GetFriend(APlayerController* PlayerController, const FBPUniqueNetId FriendUniqueNetId, FBPFriendInfo& Friend) {
}


