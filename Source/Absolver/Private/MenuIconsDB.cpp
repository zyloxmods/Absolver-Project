#include "MenuIconsDB.h"

UMenuIconsDB::UMenuIconsDB() {
}

FControllerIcons UMenuIconsDB::GetControllerIcons(FName _controllerType) const {
    return FControllerIcons{};
}

TSoftObjectPtr<UTexture2D> UMenuIconsDB::BPF_GetMiniIconForFightingStyle(int32 _iFightingStyle) {
    return NULL;
}

TSoftObjectPtr<UTexture2D> UMenuIconsDB::BPF_GetIconForEquipmentSlot(EEquipmentSlot _eEquipmentSlot, bool _bSelected, EWeaponFamilies _eWeaponFamily, int32 _itemIndex) {
    return NULL;
}


