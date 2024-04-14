#pragma once
#include "CoreMinimal.h"
#include "ButtonUserWidget.h"
#include "EEquipmentSlot.h"
#include "EWeaponFamilies.h"
#include "InventoryItem.h"
#include "InventorySlotButton.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ABSOLVER_API UInventorySlotButton : public UButtonUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEquipmentSlot m_eSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWeaponFamilies m_eWeaponFamily;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iItemSlot;
    
public:
    UInventorySlotButton();

    UFUNCTION(BlueprintCallable)
    void BPF_SetSlot(EEquipmentSlot _eSlot, EWeaponFamilies _eWeaponFamily, int32 _iItemSlot);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_IsEquipped();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_IsEmpty();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EEquipmentSlot BPF_GetSlot() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void BPF_GetItem(FInventoryItem& _item);
    
};

