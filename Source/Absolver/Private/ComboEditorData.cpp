#include "ComboEditorData.h"

UComboEditorData::UComboEditorData() {
    this->m_ComboWidgetData = NULL;
    this->m_fMaxDamageVal = 150.00f;
    this->m_fMaxRangeVal = 400.00f;
    this->m_fMinSpeedVal = 0.00f;
    this->m_fMaxSpeedVal = 50.00f;
}

FText UComboEditorData::GetParryText(EParrySide _eParryType) const {
    return FText::GetEmpty();
}

FText UComboEditorData::GetAvoidText(EAvoidType _eAvoidType) const {
    return FText::GetEmpty();
}


