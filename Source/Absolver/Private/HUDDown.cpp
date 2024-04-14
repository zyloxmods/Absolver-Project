#include "HUDDown.h"

UHUDDown::UHUDDown() {
    this->m_fVanishPercentage = 0.00f;
    this->m_iCanBeRevivedTimer = 5;
    this->m_eDownState = EDownState::None;
    this->m_iResourceBeforeDown = 0;
    this->m_iResourceLost = 0;
    this->m_bCanVanish = false;
    this->m_fTimeBeforeVanishActive = 0.00f;
    this->m_fRespawnTimeNoDown = 0.00f;
}

void UHUDDown::OnDownStateChanged(UHealthComponent* _healthComponent, EDownState _eNewDownState, bool _bInCoop) {
}

void UHUDDown::BPF_SetResourceLostFeedback(int32 _ResourceLost) {
}

void UHUDDown::BPF_SetResourceBeforeDownFeedback(int32 _ResourceBeforeDown) {
}








