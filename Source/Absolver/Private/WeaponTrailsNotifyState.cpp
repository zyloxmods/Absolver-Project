#include "WeaponTrailsNotifyState.h"

UWeaponTrailsNotifyState::UWeaponTrailsNotifyState() {
    this->FirstSocketName = TEXT("TrailBegin");
    this->SecondSocketName = TEXT("TrailEnd");
    this->m_eWeaponSlot = EWeaponSlot::RightHand;
}


