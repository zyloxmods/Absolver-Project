#include "AdvancedVoiceLibrary.h"

UAdvancedVoiceLibrary::UAdvancedVoiceLibrary() {
}

bool UAdvancedVoiceLibrary::UnRegisterRemoteTalker(const FBPUniqueNetId& UniqueNetId) {
    return false;
}

void UAdvancedVoiceLibrary::UnRegisterLocalTalker(uint8 LocalPlayerNum) {
}

void UAdvancedVoiceLibrary::UnRegisterAllLocalTalkers() {
}

bool UAdvancedVoiceLibrary::UnMuteRemoteTalker(uint8 LocalUserNum, const FBPUniqueNetId& UniqueNetId, bool bIsSystemWide) {
    return false;
}

void UAdvancedVoiceLibrary::StopNetworkedVoice(uint8 LocalPlayerNum) {
}

void UAdvancedVoiceLibrary::StartNetworkedVoice(uint8 LocalPlayerNum) {
}

void UAdvancedVoiceLibrary::RemoveAllRemoteTalkers() {
}

bool UAdvancedVoiceLibrary::RegisterRemoteTalker(const FBPUniqueNetId& UniqueNetId) {
    return false;
}

bool UAdvancedVoiceLibrary::RegisterLocalTalker(uint8 LocalPlayerNum) {
    return false;
}

void UAdvancedVoiceLibrary::RegisterAllLocalTalkers() {
}

bool UAdvancedVoiceLibrary::MuteRemoteTalker(uint8 LocalUserNum, const FBPUniqueNetId& UniqueNetId, bool bIsSystemWide) {
    return false;
}

bool UAdvancedVoiceLibrary::IsRemotePlayerTalking(const FBPUniqueNetId& UniqueNetId) {
    return false;
}

bool UAdvancedVoiceLibrary::IsPlayerMuted(uint8 LocalUserNumChecking, const FBPUniqueNetId& UniqueNetId) {
    return false;
}

bool UAdvancedVoiceLibrary::IsLocalPlayerTalking(uint8 LocalPlayerNum) {
    return false;
}

void UAdvancedVoiceLibrary::IsHeadsetPresent(bool& bHasHeadset, uint8 LocalPlayerNum) {
}

void UAdvancedVoiceLibrary::GetNumLocalTalkers(int32& NumLocalTalkers) {
}


