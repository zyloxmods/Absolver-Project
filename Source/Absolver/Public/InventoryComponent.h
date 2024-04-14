#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EEquipmentSlot.h"
#include "ELootBoxType.h"
#include "EWeaponFamilies.h"
#include "EquipmentPreset.h"
#include "EquipmentStruct.h"
#include "InventoryItem.h"
#include "LootBaseItemStruct.h"
#include "LootBoxInstancedData.h"
#include "ProgressionDoorStruct.h"
#include "InventoryComponent.generated.h"

class UBaseWeaponData;
class UEffectData;
class UEquipmentData;
class UGearData;
class ULootBoxDB;
class UProgressionDoorData;
class UQuestItemData;
class UWeaponDB;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ABSOLVER_API UInventoryComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnFulfillProgressionDoorCondition, UQuestItemData*, _fulfilledQuest, const FProgressionDoorStruct&, _relatedDoorStruct);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FEquipmentReplication);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FCurrentEquipmentPresetChanged);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULootBoxDB* m_LootBoxDB;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEquipmentReplication OnRepOutfitItemsDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCurrentEquipmentPresetChanged CurrentEquipmentPresetChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnFulfillProgressionDoorCondition OnFulfillProgressionDoorCondition;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_SetOutfitItems, meta=(AllowPrivateAccess=true))
    TArray<FEquipmentStruct> m_OutfitItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FInventoryItem> m_Inventory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UQuestItemData*> m_QuestInventory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_SetEquippedWeapon, meta=(AllowPrivateAccess=true))
    UBaseWeaponData* m_EquippedWeapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_uiNbDefaultEquippableItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    TArray<FInventoryItem> m_EquippedItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FEquipmentPreset> m_Presets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 m_iCurrentPreset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWeaponDB* m_WeaponDB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FLootBoxInstancedData> m_LootBoxes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bNewLootBox;
    
public:
    UInventoryComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerUnEquipOutfit(UEquipmentData* _equipmentData, bool _bChangePreset);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetEquippedUsableItems(const TArray<FInventoryItem>& _equippedUsableItems);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerEquipWeapon(UBaseWeaponData* _weaponData);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerEquipUsableItem(const FInventoryItem& _equippedUsableItem, uint8 _uiUsableItemSlot);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerEquipOutfit(const FEquipmentStruct& _equipmentData);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_SetOutfitItems();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_SetEquippedWeapon(UBaseWeaponData* _previousWeapon);
    
    UFUNCTION(BlueprintCallable)
    void OnEffectAddedOrRemovedCallback(bool _bAdded, UEffectData* _effectData);
    
    UFUNCTION(BlueprintCallable)
    void BPF_ShrinkLootBoxArray();
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetInventoryItemForPreset(int32 _iPresetIndex, EEquipmentSlot _eSlot, int32 _iItemIndex);
    
    UFUNCTION(BlueprintCallable)
    void BPF_RepairItem(int32 _iItemID);
    
    UFUNCTION(BlueprintCallable)
    void BPF_RemoveQuestItemAt(int32 _iQuestItemIndex);
    
    UFUNCTION(BlueprintCallable)
    void BPF_RemoveItemFromInventory(int32 _iItemIndex, bool _bForce);
    
    UFUNCTION(BlueprintCallable)
    void BPF_RemoveAllQuestItems();
    
    UFUNCTION(BlueprintCallable)
    void BPF_PreviewPresetStats(int32 _iPresetIndex);
    
    UFUNCTION(BlueprintCallable)
    void BPF_PastePreset(int32 _iPresetIndexFrom, int32 _iPresetIndexTo);
    
    UFUNCTION(BlueprintCallable)
    void BPF_OpenLootBoxes(ELootBoxType _Type, int32 _iCount, TArray<int32>& Out_NewItems);
    
    UFUNCTION(BlueprintCallable)
    void BPF_NotifyInventoryChanged(const TArray<int32>& _NewItems);
    
    UFUNCTION(BlueprintCallable)
    void BPF_NewLootBoxSeen();
    
    UFUNCTION(BlueprintCallable)
    bool BPF_IsThereNewLootBox();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_IsQuestFulfilledByPlayer(const UQuestItemData* _questToCheck);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_IsEquippedWeaponBroken();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_IsDummyWeaponEquipped() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_HasEquipmentInSlot(EEquipmentSlot _eEquipmentSlot) const;
    
    UFUNCTION(BlueprintCallable)
    UGearData* BPF_GetRepairedGearData(int32 _iItemID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_GetPlayerFulfillmentFromQuestList(const TArray<UQuestItemData*> _requiredQuests, TArray<bool>& _playerFulfillment);
    
    UFUNCTION(BlueprintCallable)
    void BPF_GetLootBoxLoot(ELootBoxType _Type, TArray<FLootBaseItemStruct>& Out_loots);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 BPF_GetLootBoxCount(ELootBoxType _Type) const;
    
    UFUNCTION(BlueprintCallable)
    void BPF_GetLootBoxArray(TArray<FLootBoxInstancedData>& Out_LootBoxArray);
    
    UFUNCTION(BlueprintCallable)
    void BPF_GetInventoryItemFromPreset(int32 _iPresetIndex, EEquipmentSlot _eSlot, FInventoryItem& Out_item);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void BPF_GetFulfilledQuestsByProgressionDoorData(const UProgressionDoorData* _door, TArray<UQuestItemData*>& _doorFulfilledQuest);
    
    UFUNCTION(BlueprintCallable)
    bool BPF_GetFirstLootBoxOfType(ELootBoxType _Type, FLootBoxInstancedData& Out_Data, int32& Out_Index);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EWeaponFamilies BPF_GetEquippedWeaponFamily() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UBaseWeaponData* BPF_GetEquippedWeapon() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void BPF_GetEquippedInventoryItemBySlot(EEquipmentSlot _eSlot, int32 _iItemIndex, FInventoryItem& _item, bool& _bOutIsempty);
    
    UFUNCTION(BlueprintCallable)
    void BPF_GetEquipmentPreset(int32 _iPresetIndex, FEquipmentPreset& Out_Preset);
    
    UFUNCTION(BlueprintCallable)
    int32 BPF_GetCurrentPreset();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UQuestItemData*> BPF_GetAllFulfilledQuests();
    
    UFUNCTION(BlueprintCallable)
    void BPF_EquipPreset(int32 _iPresetIndex);
    
    UFUNCTION(BlueprintCallable)
    bool BPF_EquipOutfit(const FEquipmentStruct& _newEquipement);
    
    UFUNCTION(BlueprintCallable)
    void BPF_DismissItemNewNotification(int32 _iItemID);
    
    UFUNCTION(BlueprintCallable)
    void BPF_DestroyLootBoxAt(int32 _iIndex, bool _bAllowShrinking);
    
    UFUNCTION(BlueprintCallable)
    void BPF_DestroyLootBox(const FLootBoxInstancedData& _data);
    
    UFUNCTION(BlueprintCallable)
    void BPF_ChangeEquipmentMaterial(int32 _iItemIndex, int32 _iMaterialIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_CanItemBeRemoved(int32 _iItemIndex);
    
    UFUNCTION(BlueprintCallable)
    void BPF_AddToQuestInventory(const UQuestItemData* _fulfillQuest);
    
    UFUNCTION(BlueprintCallable)
    void BPF_AddToInventory(const TArray<FLootBaseItemStruct>& _loots, TArray<int32>& Out_NewItems);
    
    UFUNCTION(BlueprintCallable)
    void BPF_AddLootBoxToInventory(const FLootBoxInstancedData& _data, int32 _iCount);
    
    UFUNCTION(BlueprintCallable)
    int32 BPF_AddItemToInventory(const FEquipmentStruct& _item, bool _bEquip, int32 _iCount, bool _bCallServer);
    
};

