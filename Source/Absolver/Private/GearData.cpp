#include "GearData.h"

UGearData::UGearData() {
    this->m_eEquipmentQuality = EEquipmentQuality::Clean;
    this->m_GearDataTable = NULL;
}

float UGearData::BPF_GetGearStat(EEquipmentStatType _eEquipmentStatType) {
    return 0.0f;
}

void UGearData::BPF_GetGearDataRow(FGearDataRow& _dataRow) {
}


