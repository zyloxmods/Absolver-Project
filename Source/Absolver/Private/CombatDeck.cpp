#include "CombatDeck.h"

UCombatDeck::UCombatDeck() {
    this->m_OpeningEquippedWeapon = NULL;
    this->m_bOpeningWithWeaponDrawn = false;
    this->m_DummiesDB = NULL;
    this->m_SaveSlotClass = NULL;
}

void UCombatDeck::BPF_UpdateDeckDetailsFromCurrentSlot() {
}

void UCombatDeck::BPF_UpdateDeckDetailsFromCurrentFamily() {
}

void UCombatDeck::BPF_SetCurrentWeaponFamily(EWeaponFamilies family, UTexture2D* icon) {
}

void UCombatDeck::BPF_SetCurrentSlot(FComboSave _slot) {
}

void UCombatDeck::BPF_SetCanExitMenu(bool _bCanExitMenu) {
}

void UCombatDeck::BPF_SetActiveSlot(EWeaponFamilies _eFamily, FName _slotName) {
}

void UCombatDeck::BPF_RenameComboSlot(EWeaponFamilies _eFamily, FName _fromName, FName _toName, UCombatDeckSlotWidget* _slot) {
}

void UCombatDeck::BPF_PasteSlotFromClipboard(UPanelWidget* _slotPanel, FName _name, EWeaponFamilies _eFamily) {
}

void UCombatDeck::BPF_LaunchComboEditorOpening() {
}

bool UCombatDeck::BPF_IsClipboardEmpty() {
    return false;
}

bool UCombatDeck::BPF_IsClipboardCompatibleWithFamily(EWeaponFamilies _eFamily) {
    return false;
}

UCombatDeckSlotWidget* UCombatDeck::BPF_GetSlotWidgetBySlotName(UPanelWidget* _panelWidget, const FName _slotName) {
    return NULL;
}

EWeaponFamilies UCombatDeck::BPF_GetCurrentWeaponFamily() const {
    return EWeaponFamilies::BareHands;
}

FComboSave UCombatDeck::BPF_GetCurrentSlot() const {
    return FComboSave{};
}

void UCombatDeck::BPF_GetClipboardInfos(EWeaponFamilies& _eOutFamily, FComboSave& _outSlot, bool& _bOutIsFilled) {
}

FName UCombatDeck::BPF_GetActiveSlotName(const EWeaponFamilies _eFamily) const {
    return NAME_None;
}

bool UCombatDeck::BPF_FindSlotByName(FName _name, EWeaponFamilies _eFamily, FComboSave& _out_slot) {
    return false;
}

UCombatDeckFamilyWidget* UCombatDeck::BPF_FindFamilyWidgetByFamily(UVerticalBox* _verticalBox, EWeaponFamilies _eFamily) {
    return NULL;
}

void UCombatDeck::BPF_FillComboSlotPanel(UPanelWidget* _panelWidget) {
}

void UCombatDeck::BPF_EmptyClipboard(FComboSave _destination) {
}

void UCombatDeck::BPF_CopySlotToClipboard(EWeaponFamilies _eFamily, FComboSave _slot) {
}

bool UCombatDeck::BPF_ComboAlreadyExist(FName _comboName) {
    return false;
}












