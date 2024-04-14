#include "PickableWeaponSource.h"

FPickableWeaponSource::FPickableWeaponSource() {
    this->m_bIsVolontaryDrop = false;
    this->m_fDurabilityGauge = 0.00f;
    this->m_uiZoneID = 0;
    this->m_bActivateLyingTimeout = false;
}

