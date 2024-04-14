#include "DummiesDB.h"

UDummiesDB::UDummiesDB() {
    this->m_DummyWeapons[0] = NULL;
    this->m_DummyWeapons[1] = NULL;
    this->m_DummyWeapons[2] = NULL;
}

UBaseWeaponData* UDummiesDB::BPF_GetDummyForWeaponFamily(EWeaponFamilies _eFamily) {
    return NULL;
}


