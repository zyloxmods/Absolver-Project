#include "FidgetDB.h"

UFidgetDB::UFidgetDB() {
    this->m_fLowerBoundTimer = 5.00f;
    this->m_fUpperBoundTimer = 10.00f;
}

UAnimationAsset* UFidgetDB::BPF_GetAnim(int32 _iStyleNb, EWeaponFamilies _eWeapon, EQuadrantTypes _eCurrentQuadrant) {
    return NULL;
}

float UFidgetDB::BPF_ComputeTimer() {
    return 0.0f;
}


