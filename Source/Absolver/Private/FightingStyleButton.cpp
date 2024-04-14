#include "FightingStyleButton.h"

UFightingStyleButton::UFightingStyleButton() {
    this->m_iFightingStyleProgressionIndex = 0;
    this->m_bIgnoreMentorStyle = false;
    this->m_FightingStyleDB = NULL;
    this->m_iFightingStyleID = -1;
}

void UFightingStyleButton::OnStatsUpdated(EStatsAppliedMode _eMode) {
}

void UFightingStyleButton::BPF_SetIgnoreMentorStyle(bool _bIgnoreMentorStyle) {
}

void UFightingStyleButton::BPF_SetFightingStyleProgressionIndex(int32 _iProgressionIndex) {
}

void UFightingStyleButton::BPF_SetFightingStyleID(int32 _iID) {
}

bool UFightingStyleButton::BPF_IsCurrentFS() {
    return false;
}


