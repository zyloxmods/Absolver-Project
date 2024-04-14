#include "CharacterBuildDB.h"

UCharacterBuildDB::UCharacterBuildDB() {
    this->m_CombatSyleDisplayName = FText::FromString(TEXT("Combat Syle Display Name"));
    this->m_fDifficulty = 0.50f;
    this->m_AbilityDisplayName = FText::FromString(TEXT("Ability Display Name"));
    this->m_AbilityDescription = FText::FromString(TEXT("Ability Description"));
    this->m_Description = FText::FromString(TEXT("Build Description"));
    this->m_eSex = ECharacterSex::None;
    this->m_uiSkinToneIndex = 0;
    this->m_EquippedWeapon = NULL;
    this->m_uiCombatStyle = 3;
}


