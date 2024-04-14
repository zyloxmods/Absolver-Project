#include "AttackProgressNotification.h"

UAttackProgressNotification::UAttackProgressNotification() {
    this->m_bDiscovered = false;
    this->m_bUnlocked = false;
    this->m_iBaseXP = 0;
    this->m_iGainedXP = 0;
}

UAttackProgressNotification* UAttackProgressNotification::BPF_InitUnlocked(FName _attack) {
    return NULL;
}

UAttackProgressNotification* UAttackProgressNotification::BPF_InitProgress(FName _attack, int32 _iBaseXP, int32 _iGainedXP) {
    return NULL;
}

UAttackProgressNotification* UAttackProgressNotification::BPF_InitDiscovered(FName _attack) {
    return NULL;
}


