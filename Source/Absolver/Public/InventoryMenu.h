#pragma once
#include "CoreMinimal.h"
#include "ECycleDirection.h"
#include "EEquipmentSlot.h"
#include "EWeaponFamilies.h"
#include "EquipmentStruct.h"
#include "MenuWidget.h"
#include "InventoryMenu.generated.h"

class UEquipmentData;
class UInventoryItemButton;
class UInventorySlotButton;
class UTableWidget;

UCLASS(Blueprintable, EditInlineNew)
class ABSOLVER_API UInventoryMenu : public UMenuWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EEquipmentSlot> m_Slots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EWeaponFamilies> m_eWeaponFamilies;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEquipmentData* m_NullData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FEquipmentStruct> m_PreviewOutfits;
    
public:
    UInventoryMenu();

    UFUNCTION(BlueprintCallable)
    void BPF_Unequip(EEquipmentSlot _eSlot, int32 _iItemSlotIndex);
    
    UFUNCTION(BlueprintCallable)
    void BPF_ResetPreviewEquipment();
    
    UFUNCTION(BlueprintCallable)
    void BPF_PreviewEquipmentCustomMaterial(int32 _iItemIndex, EEquipmentSlot _eSlot, int32 _iMaterialIndex);
    
    UFUNCTION(BlueprintCallable)
    void BPF_PreviewEquipment(int32 _iItemIndex, EEquipmentSlot _eSlot, bool _bPreviewClean);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UInventorySlotButton* BPF_GetSlotButton(EEquipmentSlot _slot, UTableWidget* _table, EWeaponFamilies _eWeaponFamily, int32 _itemSlot);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EWeaponFamilies BPF_GetNextWeapon(EWeaponFamilies _eWeapon, ECycleDirection _eDirection);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EEquipmentSlot BPF_GetNextSlot(EEquipmentSlot _eSlot, ECycleDirection _eDirection, int32 _iOffset);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UInventoryItemButton* BPF_GetEquippedItemButton(UTableWidget* _table);
    
    UFUNCTION(BlueprintCallable)
    void BPF_EquipEmote(const FName& _emoteName, const uint8 _uiEmoteSlotIndex);
    
    UFUNCTION(BlueprintCallable)
    void BPF_Equip(int32 _iItemIndex, int32 _iItemSlotIndex);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnItemButtonFocused(UInventoryItemButton* _button);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnItemButtonClicked(UInventoryItemButton* _button);
    
};

