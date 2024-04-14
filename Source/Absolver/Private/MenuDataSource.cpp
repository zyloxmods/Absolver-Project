#include "MenuDataSource.h"
#include "Templates/SubclassOf.h"

UMenuDataSource::UMenuDataSource() {
}

UInventorySlotButton* UMenuDataSource::BPF_GetSlotButton(EEquipmentSlot _slot, UTableWidget* _table, EWeaponFamilies _eWeaponFamily, int32 _itemSlot) {
    return NULL;
}

void UMenuDataSource::BPF_FillTableWithCombatDecks(UUserWidget* _owner, UTableWidget* _table, TSubclassOf<UCombatDeckButton> _widgetClass, EWeaponFamilies _eWeaponFamily) {
}

void UMenuDataSource::BPF_FillScrollBoxWithWeaponsByFamily(USCUserWidget* _owner, FInventorySearchFilter _filter, const TArray<EWeaponFamilies>& _weaponFamilies, const TArray<EInventorySearchOrder>& _order, UPagingScrollBox* _pagingBox, bool _bFocusEquipped, int32 _iFocusedEquipment, bool _bFocusLastItem, EWeaponFamilies _eFamily, bool _bFocusFirstItem) {
}

void UMenuDataSource::BPF_FillScrollBoxWithShopWeapon(USCUserWidget* _owner, UPagingScrollBox* _pagingBox, UDataTable* _dataTable, const TArray<EWeaponFamilies>& _weaponFamilies, const TArray<EInventorySearchOrder>& _order, bool _bFocusFirstItem) {
}

void UMenuDataSource::BPF_FillScrollBoxWithShopIntro(USCUserWidget* _owner, UPagingScrollBox* _pagingBox, UDataTable* _introDataTable, UDataTable* _ShopIntroDataTable, const TArray<EInventorySearchOrder>& _order, bool _bFocusFirstItem, bool _bFocusLastItem) {
}

void UMenuDataSource::BPF_FillScrollBoxWithShopEquipment(USCUserWidget* _owner, UPagingScrollBox* _pagingBox, UDataTable* _dataTable, EEquipmentSlot _slot, const TArray<EInventorySearchOrder>& _order, bool _bFocusFirstItem, bool& _IsEmpty) {
}

void UMenuDataSource::BPF_FillScrollBoxWithShopEmote(USCUserWidget* _owner, UPagingScrollBox* _pagingBox, UDataTable* _EmoteDataTable, UDataTable* _ShopEmoteDataTable, const TArray<EInventorySearchOrder>& _order, bool _bFocusFirstItem, bool _bFocusLastItem) {
}

void UMenuDataSource::BPF_FillScrollBoxWithSchoolMembers(USCUserWidget* _owner, const FSchool& _school, USchoolMemberList* _members, UPagingScrollBox* _pagingBox, bool _bReset) {
}

void UMenuDataSource::BPF_FillScrollBoxWithPowers(USCUserWidget* _owner, UPagingScrollBox* _pagingBox, UDataTable* _PowerDataTable, const TArray<EInventorySearchOrder>& _order, bool _bFocusFirstItem, bool _bFocusLastItem, bool& _IsEmpty) {
}

void UMenuDataSource::BPF_FillScrollBoxWithIntros(UUserWidget* _owner, UPagingScrollBox* _ScrollBox, const FName& _currentIntro, int32 _iFightingStyle, UDataTable* _introDataTable, bool _bFocusEquipped) {
}

void UMenuDataSource::BPF_FillScrollBoxWithEquipmentItems(USCUserWidget* _owner, FInventorySearchFilter _filter, const TArray<EInventorySearchOrder>& _order, UPagingScrollBox* _pagingBox, int32 _iItemSlot, bool _bIncludeEmptyItem, bool _bFocusEquippedItem, int32 _iFocusedItemIndex, bool _bFocusLastItem, bool _bFocusFirstItem) {
}

void UMenuDataSource::BPF_FillScrollBoxWithEmotes(UUserWidget* _owner, UPagingScrollBox* _ScrollBox, const FName& _currentEmote, bool _bFocusEquipped) {
}

void UMenuDataSource::BPF_FillScrollBoxWithCombosFromSchoolByFilter(UUserWidget* _owner, UPagingScrollBox* _ScrollBox, const FSchool& _school, EWeaponFamilies _eWeaponFamily, TArray<EQuadrantTypes> _quadrants) {
}

void UMenuDataSource::BPF_FillScrollBoxWithAttacksFromSchoolByFilter(UUserWidget* _owner, UPagingScrollBox* _ScrollBox, const FSchool& _school, TArray<FAttackFilter> _filters, const TArray<EAttackSortingMethods>& _sorting) {
}

void UMenuDataSource::BPF_FillScrollBoxWithAttacksFromComboByStyle(UUserWidget* _owner, UPagingScrollBox* _ScrollBox, TArray<int32> _styles, const FComboSave& _combo, const TArray<EAttackSortingMethods>& _sorting, EWeaponFamilies _eCurrentWeaponFamily) {
}

void UMenuDataSource::BPF_FillScrollBoxWithAttackSections(UUserWidget* _owner, UPagingScrollBox* _ScrollBox, TArray<EWeaponFamilies> _weaponFamilies, const FAttackFilter& _attackFilter, const TArray<EAttackSortingMethods>& _sorting, EQuadrantTypes _eCurrentQuadrant, EWeaponFamilies _eCurrentWeaponFamily, int32 _iCurrentComboIndex, FName _currentAttackName, bool _bFocusEquipped) {
}

void UMenuDataSource::BPF_FillScrollBoxWithAttacksByStyle(UUserWidget* _owner, UPagingScrollBox* _ScrollBox, TArray<int32> _styles, const FAttackFilter& _attackFilter, const TArray<EAttackSortingMethods>& _sorting, EQuadrantTypes _eCurrentQuadrant, EWeaponFamilies _eCurrentWeaponFamily, int32 _iCurrentComboIndex, FName _currentAttackName, bool _bFocusEquipped) {
}

void UMenuDataSource::BPF_FillScrollBoxWithAttacksByFilter(UUserWidget* _owner, UPagingScrollBox* _ScrollBox, TArray<FAttackFilter> _filters, const TArray<EAttackSortingMethods>& _sorting, EQuadrantTypes _eCurrentQuadrant, EWeaponFamilies _eCurrentWeaponFamily, int32 _iCurrentComboIndex, FName _currentAttackName, bool _bFocusEquipped) {
}

void UMenuDataSource::BPF_FillScrollBoxWithAttacks(UUserWidget* _owner, UPagingScrollBox* _ScrollBox, const FAttackFilter& _attackFilter, const TArray<EAttackSortingMethods>& _sorting, EQuadrantTypes _eCurrentQuadrant, EWeaponFamilies _eCurrentWeaponFamily, int32 _iCurrentComboIndex, FName _currentAttackName, bool _bFocusEquipped) {
}

void UMenuDataSource::BPF_FillScrollBoxWithAttackByEndQuadrant(UUserWidget* _owner, UPagingScrollBox* _ScrollBox, TArray<EQuadrantTypes> _quadrants, const FAttackFilter& _attackFilter, const TArray<EAttackSortingMethods>& _sorting, EQuadrantTypes _eCurrentQuadrant, EWeaponFamilies _eCurrentWeaponFamily, int32 _iCurrentComboIndex, FName _currentAttackName, bool _bFocusEquipped, bool _bScroll) {
}


