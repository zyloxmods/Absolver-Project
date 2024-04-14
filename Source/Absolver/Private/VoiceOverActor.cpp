#include "VoiceOverActor.h"

AVoiceOverActor::AVoiceOverActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_fDelayBetweenVoiceOvers = 5.00f;
}

void AVoiceOverActor::OnLoadingCompleted() {
}

void AVoiceOverActor::OnDelayAfterSequenceExpired() {
}

void AVoiceOverActor::OnCurrentSequenceFinished() {
}

void AVoiceOverActor::BPF_PlayVoiceOver(const FVoiceOver& _voiceOver) {
}



