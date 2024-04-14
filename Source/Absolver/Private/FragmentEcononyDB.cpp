#include "FragmentEcononyDB.h"

UFragmentEcononyDB::UFragmentEcononyDB() {
    this->m_iPrestigePointValue = 0;
    this->m_iApperacenChangeCost = 0;
}

int32 UFragmentEcononyDB::BPF_GetRepairCost(EEquipmentSlot _eSlot, EGearRarity _eRarity) const {
    return 0;
}

int32 UFragmentEcononyDB::BPF_GetFragmentValue(EEquipmentSlot _eSlot, bool _bIsDirty, EGearRarity _eRarity) const {
    return 0;
}

int32 UFragmentEcononyDB::BPF_GetDyeCost(EEquipmentSlot _eSlot, EGearRarity _eRarity) const {
    return 0;
}


