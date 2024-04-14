#include "ComboEditorMenu.h"

UComboEditorMenu::UComboEditorMenu() {
    this->m_eState = EComboEditorState::None;
}

void UComboEditorMenu::OnStatsChanged(EStatsAppliedMode _eStatsMode) {
}

void UComboEditorMenu::BPF_StopPreview() {
}

void UComboEditorMenu::BPF_SetWeaponFamily(EWeaponFamilies _eWeaponFamily) {
}

void UComboEditorMenu::BPF_SetState(EComboEditorState _eState) {
}

void UComboEditorMenu::BPF_SetEditingQuadrant(EQuadrantTypes _eQuadrant) {
}

void UComboEditorMenu::BPF_ResetComboForEditingWeaponFamily() {
}

void UComboEditorMenu::BPF_PreviewCombo(int32 iAltIndex) {
}

void UComboEditorMenu::BPF_PreviewAttack(FName _attack, bool _bMirror, float _fStartTime) {
}

EWeaponFamilies UComboEditorMenu::BPF_GetWeaponFamily() {
    return EWeaponFamilies::BareHands;
}

EComboEditorState UComboEditorMenu::BPF_GetState() {
    return EComboEditorState::StanceSelection;
}

EQuadrantTypes UComboEditorMenu::BPF_GetEditingQuadrant() {
    return EQuadrantTypes::FrontLeft;
}

void UComboEditorMenu::BPF_BackupComboForEditingWeaponFamily() {
}








