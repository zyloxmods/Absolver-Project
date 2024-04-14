#include "BPFriendPresenceInfo.h"

FBPFriendPresenceInfo::FBPFriendPresenceInfo() {
    this->bIsOnline = false;
    this->bIsPlaying = false;
    this->bIsPlayingThisGame = false;
    this->bIsJoinable = false;
    this->bHasVoiceSupport = false;
    this->PresenceState = EBPOnlinePresenceState::Online;
}

