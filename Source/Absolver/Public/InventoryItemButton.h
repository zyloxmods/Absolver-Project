#pragma once
#include "CoreMinimal.h"
#include "ButtonUserWidget.h"
#include "EEquipmentSlot.h"
#include "InventoryItem.h"
#include "InventoryItemButton.generated.h"

class UInventoryItemButton;
class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class ABSOLVER_API UInventoryItemButton : public UButtonUserWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FInventoryItemButtonInput, UInventoryItemButton*, _button);
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bUseEquippedOnInvalidIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bIgnoreMentoringItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 m_iItemID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 m_iItemSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EEquipmentSlot m_eSlot;
    
public:
    UInventoryItemButton();

    UFUNCTION(BlueprintCallable)
    void BPF_SetItem(int32 _iItemID, EEquipmentSlot _eSlot, int32 _iItemSlot);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetIgnoreMentoringItems(bool _bIgnore);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_IsEquipped();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_IsEmpty();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void BPF_GetItem(FInventoryItem& _outItem);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void BPF_GetInventoryIcon(TSoftObjectPtr<UTexture2D>& _icon);
    
};

