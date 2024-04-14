#pragma once
#include "CoreMinimal.h"
#include "EEquipmentSlot.h"
#include "EquipmentBindings.h"
#include "InventoryItem.h"
#include "SCUserWidget.h"
#include "EquipmentInfosWidget.generated.h"

class UBaseItemData;
class URarityDB;
class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class ABSOLVER_API UEquipmentInfosWidget : public USCUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URarityDB* m_RarityDB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FEquipmentBindings m_EquipmentBindings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FEquipmentBindings m_CurrentEquipmentBindings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FInventoryItem m_CompareWithItem;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bCompareWithEquipped;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FInventoryItem m_Equipment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EEquipmentSlot m_eSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 m_iItemSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> m_EmptyItemTexture;
    
public:
    UEquipmentInfosWidget();

    UFUNCTION(BlueprintCallable)
    void BPF_SetRarityItemData(const FInventoryItem& _equipment);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetInventoryItem(const FInventoryItem& _equipment, EEquipmentSlot _eSlot, int32 _iItemSlot);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetGear(UBaseItemData* _item);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetCompareWithEquipped(bool _bCompareWithEquipped);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_IsEquipped();
    
};

