#pragma once
#include "CoreMinimal.h"
#include "EDrawWeaponTestResult.h"
#include "EItemUsabilityTestResult.h"
#include "EStatsAppliedMode.h"
#include "EWeaponAction.h"
#include "EWeaponEvent.h"
#include "HUDUserWidget.h"
#include "InventoryItem.h"
#include "InventoryItemSlots.generated.h"

class UBaseWeaponData;

UCLASS(Blueprintable, EditInlineNew)
class ABSOLVER_API UInventoryItemSlots : public UHUDUserWidget {
    GENERATED_BODY()
public:
    UInventoryItemSlots();

    UFUNCTION(BlueprintCallable)
    void BPF_RefreshInventoryComponent();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_RefreshSlot(const FInventoryItem& _newItem, int32 _iSlotIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_PickedUpWeaponDurabilityChanged(float _fDurability);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnWeaponDrawFailedAttempt(EDrawWeaponTestResult _eDrawWeaponTestResult);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnWeaponDrawabilityChanged(bool _bDrawability, EDrawWeaponTestResult _eWeaponUsability);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnWeaponActionLaunched(EWeaponAction _eWeaponAction);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnUseItem(const FInventoryItem& _itemSlot, uint8 _uiItemSlotIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnItemUseFailedAttempt(uint8 _uiIndex, EItemUsabilityTestResult _eItemUsabilityTestResult);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnItemUsabilityChanged(uint8 _uiIndex, bool _bUsability, EItemUsabilityTestResult _eItemUsability);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnHandledWeaponChanged(EWeaponEvent _eWeaponEvent);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnEquippedWeaponSheathed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnEquippedWeaponChanged(UBaseWeaponData* _previousWeapon, EStatsAppliedMode _eStatsAppliedMode);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_EquippedWeaponDurabilityChanged(float _fDurability, bool _bBroken);
    
};

