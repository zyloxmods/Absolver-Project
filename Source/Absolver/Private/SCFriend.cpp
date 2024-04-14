#include "SCFriend.h"

USCFriend::USCFriend() {
}

void USCFriend::BPF_SendInvitation(float _repeatDelay) {
}

bool USCFriend::BPF_IsPlayingThisGame() {
    return false;
}

bool USCFriend::BPF_IsPlaying() {
    return false;
}

bool USCFriend::BPF_IsOnline() {
    return false;
}

bool USCFriend::BPF_IsJoinable() {
    return false;
}

bool USCFriend::BPF_GetUserAttribute(const FString& _attribute, FString& _result) {
    return false;
}

FString USCFriend::BPF_GetStatus() {
    return TEXT("");
}

EBPOnlinePresenceState USCFriend::BPF_GetState() {
    return EBPOnlinePresenceState::Online;
}

EInvitationState USCFriend::BPF_GetInvitationState() {
    return EInvitationState::None;
}

FBPUniqueNetId USCFriend::BPF_GetID() {
    return FBPUniqueNetId{};
}

FString USCFriend::BPF_GetError() {
    return TEXT("");
}

FString USCFriend::BPF_GetDisplayName() {
    return TEXT("");
}


