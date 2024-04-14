#include "AIFeintBehaviourDataAsset.h"

UAIFeintBehaviourDataAsset::UAIFeintBehaviourDataAsset() {
    this->m_fDefaultFeintGaugeValue = 0.00f;
    this->m_fTriggerFeintThreshold = 100.00f;
    this->m_fFeintGaugeBonus[0] = 0.00f;
    this->m_fFeintGaugeBonus[1] = 0.00f;
    this->m_fFeintGaugeBonus[2] = 0.00f;
    this->m_fFeintGaugeBonus[3] = 0.00f;
    this->m_fFeintGaugeBonus[4] = 0.00f;
    this->m_bUseProbaToTriggerFeint = false;
}


