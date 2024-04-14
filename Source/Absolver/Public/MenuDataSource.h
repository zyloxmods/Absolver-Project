#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "AttackFilter.h"
#include "ComboSave.h"
#include "EAttackSortingMethods.h"
#include "EEquipmentSlot.h"
#include "EInventorySearchOrder.h"
#include "EQuadrantTypes.h"
#include "EWeaponFamilies.h"
#include "InventorySearchFilter.h"
#include "School.h"
#include "Templates/SubclassOf.h"
#include "MenuDataSource.generated.h"

class UCombatDeckButton;
class UDataTable;
class UInventorySlotButton;
class UPagingScrollBox;
class USCUserWidget;
class USchoolMemberList;
class UTableWidget;
class UUserWidget;

UCLASS(Blueprintable)
class ABSOLVER_API UMenuDataSource : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UMenuDataSource();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UInventorySlotButton* BPF_GetSlotButton(EEquipmentSlot _slot, UTableWidget* _table, EWeaponFamilies _eWeaponFamily, int32 _itemSlot);
    
    UFUNCTION(BlueprintCallable)
    static void BPF_FillTableWithCombatDecks(UUserWidget* _owner, UTableWidget* _table, TSubclassOf<UCombatDeckButton> _widgetClass, EWeaponFamilies _eWeaponFamily);
    
    UFUNCTION(BlueprintCallable)
    static void BPF_FillScrollBoxWithWeaponsByFamily(USCUserWidget* _owner, FInventorySearchFilter _filter, const TArray<EWeaponFamilies>& _weaponFamilies, const TArray<EInventorySearchOrder>& _order, UPagingScrollBox* _pagingBox, bool _bFocusEquipped, int32 _iFocusedEquipment, bool _bFocusLastItem, EWeaponFamilies _eFamily, bool _bFocusFirstItem);
    
    UFUNCTION(BlueprintCallable)
    static void BPF_FillScrollBoxWithShopWeapon(USCUserWidget* _owner, UPagingScrollBox* _pagingBox, UDataTable* _dataTable, const TArray<EWeaponFamilies>& _weaponFamilies, const TArray<EInventorySearchOrder>& _order, bool _bFocusFirstItem);
    
    UFUNCTION(BlueprintCallable)
    static void BPF_FillScrollBoxWithShopIntro(USCUserWidget* _owner, UPagingScrollBox* _pagingBox, UDataTable* _introDataTable, UDataTable* _ShopIntroDataTable, const TArray<EInventorySearchOrder>& _order, bool _bFocusFirstItem, bool _bFocusLastItem);
    
    UFUNCTION(BlueprintCallable)
    static void BPF_FillScrollBoxWithShopEquipment(USCUserWidget* _owner, UPagingScrollBox* _pagingBox, UDataTable* _dataTable, EEquipmentSlot _slot, const TArray<EInventorySearchOrder>& _order, bool _bFocusFirstItem, bool& _IsEmpty);
    
    UFUNCTION(BlueprintCallable)
    static void BPF_FillScrollBoxWithShopEmote(USCUserWidget* _owner, UPagingScrollBox* _pagingBox, UDataTable* _EmoteDataTable, UDataTable* _ShopEmoteDataTable, const TArray<EInventorySearchOrder>& _order, bool _bFocusFirstItem, bool _bFocusLastItem);
    
    UFUNCTION(BlueprintCallable)
    static void BPF_FillScrollBoxWithSchoolMembers(USCUserWidget* _owner, const FSchool& _school, USchoolMemberList* _members, UPagingScrollBox* _pagingBox, bool _bReset);
    
    UFUNCTION(BlueprintCallable)
    static void BPF_FillScrollBoxWithPowers(USCUserWidget* _owner, UPagingScrollBox* _pagingBox, UDataTable* _PowerDataTable, const TArray<EInventorySearchOrder>& _order, bool _bFocusFirstItem, bool _bFocusLastItem, bool& _IsEmpty);
    
    UFUNCTION(BlueprintCallable)
    static void BPF_FillScrollBoxWithIntros(UUserWidget* _owner, UPagingScrollBox* _ScrollBox, const FName& _currentIntro, int32 _iFightingStyle, UDataTable* _introDataTable, bool _bFocusEquipped);
    
    UFUNCTION(BlueprintCallable)
    static void BPF_FillScrollBoxWithEquipmentItems(USCUserWidget* _owner, FInventorySearchFilter _filter, const TArray<EInventorySearchOrder>& _order, UPagingScrollBox* _pagingBox, int32 _iItemSlot, bool _bIncludeEmptyItem, bool _bFocusEquippedItem, int32 _iFocusedItemIndex, bool _bFocusLastItem, bool _bFocusFirstItem);
    
    UFUNCTION(BlueprintCallable)
    static void BPF_FillScrollBoxWithEmotes(UUserWidget* _owner, UPagingScrollBox* _ScrollBox, const FName& _currentEmote, bool _bFocusEquipped);
    
    UFUNCTION(BlueprintCallable)
    static void BPF_FillScrollBoxWithCombosFromSchoolByFilter(UUserWidget* _owner, UPagingScrollBox* _ScrollBox, const FSchool& _school, EWeaponFamilies _eWeaponFamily, TArray<EQuadrantTypes> _quadrants);
    
    UFUNCTION(BlueprintCallable)
    static void BPF_FillScrollBoxWithAttacksFromSchoolByFilter(UUserWidget* _owner, UPagingScrollBox* _ScrollBox, const FSchool& _school, TArray<FAttackFilter> _filters, const TArray<EAttackSortingMethods>& _sorting);
    
    UFUNCTION(BlueprintCallable)
    static void BPF_FillScrollBoxWithAttacksFromComboByStyle(UUserWidget* _owner, UPagingScrollBox* _ScrollBox, TArray<int32> _styles, const FComboSave& _combo, const TArray<EAttackSortingMethods>& _sorting, EWeaponFamilies _eCurrentWeaponFamily);
    
    UFUNCTION(BlueprintCallable)
    static void BPF_FillScrollBoxWithAttackSections(UUserWidget* _owner, UPagingScrollBox* _ScrollBox, TArray<EWeaponFamilies> _weaponFamilies, const FAttackFilter& _attackFilter, const TArray<EAttackSortingMethods>& _sorting, EQuadrantTypes _eCurrentQuadrant, EWeaponFamilies _eCurrentWeaponFamily, int32 _iCurrentComboIndex, FName _currentAttackName, bool _bFocusEquipped);
    
    UFUNCTION(BlueprintCallable)
    static void BPF_FillScrollBoxWithAttacksByStyle(UUserWidget* _owner, UPagingScrollBox* _ScrollBox, TArray<int32> _styles, const FAttackFilter& _attackFilter, const TArray<EAttackSortingMethods>& _sorting, EQuadrantTypes _eCurrentQuadrant, EWeaponFamilies _eCurrentWeaponFamily, int32 _iCurrentComboIndex, FName _currentAttackName, bool _bFocusEquipped);
    
    UFUNCTION(BlueprintCallable)
    static void BPF_FillScrollBoxWithAttacksByFilter(UUserWidget* _owner, UPagingScrollBox* _ScrollBox, TArray<FAttackFilter> _filters, const TArray<EAttackSortingMethods>& _sorting, EQuadrantTypes _eCurrentQuadrant, EWeaponFamilies _eCurrentWeaponFamily, int32 _iCurrentComboIndex, FName _currentAttackName, bool _bFocusEquipped);
    
    UFUNCTION(BlueprintCallable)
    static void BPF_FillScrollBoxWithAttacks(UUserWidget* _owner, UPagingScrollBox* _ScrollBox, const FAttackFilter& _attackFilter, const TArray<EAttackSortingMethods>& _sorting, EQuadrantTypes _eCurrentQuadrant, EWeaponFamilies _eCurrentWeaponFamily, int32 _iCurrentComboIndex, FName _currentAttackName, bool _bFocusEquipped);
    
    UFUNCTION(BlueprintCallable)
    static void BPF_FillScrollBoxWithAttackByEndQuadrant(UUserWidget* _owner, UPagingScrollBox* _ScrollBox, TArray<EQuadrantTypes> _quadrants, const FAttackFilter& _attackFilter, const TArray<EAttackSortingMethods>& _sorting, EQuadrantTypes _eCurrentQuadrant, EWeaponFamilies _eCurrentWeaponFamily, int32 _iCurrentComboIndex, FName _currentAttackName, bool _bFocusEquipped, bool _bScroll);
    
};

