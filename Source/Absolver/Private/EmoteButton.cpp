#include "EmoteButton.h"

UEmoteButton::UEmoteButton() {
    this->bEmoteEquipped = false;
    this->bEmoteUnlocked = false;
    this->m_bCurrentSlotEmote = false;
}

void UEmoteButton::BPF_PlayEmoteAnim() {
}

bool UEmoteButton::BPF_IsPlayingEmoteAnim() {
    return false;
}

bool UEmoteButton::BPF_IsEmoteEquipped() const {
    return false;
}


