#include "MenuDB.h"

UMenuDB::UMenuDB() {
    this->m_QuadrantSelectionIcons[0] = NULL;
    this->m_QuadrantSelectionIcons[1] = NULL;
    this->m_QuadrantSelectionIcons[2] = NULL;
    this->m_QuadrantSelectionIcons[3] = NULL;
}

TSoftObjectPtr<UTexture2D> UMenuDB::BPF_LeaderboardTierIcons(ELeaderboardTypes _eType, ELeaderboardTiers _eTier) const {
    return NULL;
}

TSoftObjectPtr<UTexture2D> UMenuDB::BPF_GetWeaponIcon(AFightingCharacter* Character, bool _bSelected, EWeaponFamilies _eWeaponFamily, bool _bUseEquipmentIconIfEquipped) {
    return NULL;
}

UTexture2D* UMenuDB::BPF_GetStanceIcon(EQuadrantTypes _eQuadrant, EIconStyle _eIconStyle) const {
    return NULL;
}

UTexture2D* UMenuDB::BPF_GetQuadrantSelectionIcon(EQuadrantTypes _eQuadrant) const {
    return NULL;
}

UTexture2D* UMenuDB::BPF_GetQuadrantIcon(EQuadrantTypes _eQuadrant, EIconStyle _eIconStyle) const {
    return NULL;
}

FText UMenuDB::BPF_GetMatchMakingStatusDescription(EMatchMakingStatus _eStatus) const {
    return FText::GetEmpty();
}

void UMenuDB::BPF_GetGameModeInfos(const EGameModeTypes _eGameMode, FEquipmentCategoryInfos& _OutInfos) const {
}

void UMenuDB::BPF_GetEquipmentCategoryInfos(FEquipmentCategoryInfos& _OutCategoryInfos, EEquipmentSlot _eEquipmentSlot, EWeaponFamilies _eWeaponFamily, int32 _itemIndex) {
}

TSoftObjectPtr<UTexture2D> UMenuDB::BPF_GetAttackParryIcon(EParrySide _eParrySide) const {
    return NULL;
}

TSoftObjectPtr<UTexture2D> UMenuDB::BPF_GetAttackAvoidIcon(EAvoidType _eAvoidType) const {
    return NULL;
}


