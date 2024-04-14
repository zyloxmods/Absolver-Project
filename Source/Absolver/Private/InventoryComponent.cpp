#include "InventoryComponent.h"
#include "Net/UnrealNetwork.h"

UInventoryComponent::UInventoryComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    this->m_LootBoxDB = NULL;
    this->m_OutfitItems.AddDefaulted(10);
    this->m_EquippedWeapon = NULL;
    this->m_uiNbDefaultEquippableItems = 2;
    this->m_Presets.AddDefaulted(3);
    this->m_iCurrentPreset = 0;
    this->m_WeaponDB = NULL;
    this->m_bNewLootBox = false;
}

void UInventoryComponent::ServerUnEquipOutfit_Implementation(UEquipmentData* _equipmentData, bool _bChangePreset) {
}
bool UInventoryComponent::ServerUnEquipOutfit_Validate(UEquipmentData* _equipmentData, bool _bChangePreset) {
    return true;
}

void UInventoryComponent::ServerSetEquippedUsableItems_Implementation(const TArray<FInventoryItem>& _equippedUsableItems) {
}
bool UInventoryComponent::ServerSetEquippedUsableItems_Validate(const TArray<FInventoryItem>& _equippedUsableItems) {
    return true;
}

void UInventoryComponent::ServerEquipWeapon_Implementation(UBaseWeaponData* _weaponData) {
}
bool UInventoryComponent::ServerEquipWeapon_Validate(UBaseWeaponData* _weaponData) {
    return true;
}

void UInventoryComponent::ServerEquipUsableItem_Implementation(const FInventoryItem& _equippedUsableItem, uint8 _uiUsableItemSlot) {
}
bool UInventoryComponent::ServerEquipUsableItem_Validate(const FInventoryItem& _equippedUsableItem, uint8 _uiUsableItemSlot) {
    return true;
}

void UInventoryComponent::ServerEquipOutfit_Implementation(const FEquipmentStruct& _equipmentData) {
}
bool UInventoryComponent::ServerEquipOutfit_Validate(const FEquipmentStruct& _equipmentData) {
    return true;
}

void UInventoryComponent::OnRep_SetOutfitItems() {
}

void UInventoryComponent::OnRep_SetEquippedWeapon(UBaseWeaponData* _previousWeapon) {
}

void UInventoryComponent::OnEffectAddedOrRemovedCallback(bool _bAdded, UEffectData* _effectData) {
}

void UInventoryComponent::BPF_ShrinkLootBoxArray() {
}

void UInventoryComponent::BPF_SetInventoryItemForPreset(int32 _iPresetIndex, EEquipmentSlot _eSlot, int32 _iItemIndex) {
}

void UInventoryComponent::BPF_RepairItem(int32 _iItemID) {
}

void UInventoryComponent::BPF_RemoveQuestItemAt(int32 _iQuestItemIndex) {
}

void UInventoryComponent::BPF_RemoveItemFromInventory(int32 _iItemIndex, bool _bForce) {
}

void UInventoryComponent::BPF_RemoveAllQuestItems() {
}

void UInventoryComponent::BPF_PreviewPresetStats(int32 _iPresetIndex) {
}

void UInventoryComponent::BPF_PastePreset(int32 _iPresetIndexFrom, int32 _iPresetIndexTo) {
}

void UInventoryComponent::BPF_OpenLootBoxes(ELootBoxType _Type, int32 _iCount, TArray<int32>& Out_NewItems) {
}

void UInventoryComponent::BPF_NotifyInventoryChanged(const TArray<int32>& _NewItems) {
}

void UInventoryComponent::BPF_NewLootBoxSeen() {
}

bool UInventoryComponent::BPF_IsThereNewLootBox() {
    return false;
}

bool UInventoryComponent::BPF_IsQuestFulfilledByPlayer(const UQuestItemData* _questToCheck) {
    return false;
}

bool UInventoryComponent::BPF_IsEquippedWeaponBroken() {
    return false;
}

bool UInventoryComponent::BPF_IsDummyWeaponEquipped() const {
    return false;
}

bool UInventoryComponent::BPF_HasEquipmentInSlot(EEquipmentSlot _eEquipmentSlot) const {
    return false;
}

UGearData* UInventoryComponent::BPF_GetRepairedGearData(int32 _iItemID) {
    return NULL;
}

bool UInventoryComponent::BPF_GetPlayerFulfillmentFromQuestList(const TArray<UQuestItemData*> _requiredQuests, TArray<bool>& _playerFulfillment) {
    return false;
}

void UInventoryComponent::BPF_GetLootBoxLoot(ELootBoxType _Type, TArray<FLootBaseItemStruct>& Out_loots) {
}

int32 UInventoryComponent::BPF_GetLootBoxCount(ELootBoxType _Type) const {
    return 0;
}

void UInventoryComponent::BPF_GetLootBoxArray(TArray<FLootBoxInstancedData>& Out_LootBoxArray) {
}

void UInventoryComponent::BPF_GetInventoryItemFromPreset(int32 _iPresetIndex, EEquipmentSlot _eSlot, FInventoryItem& Out_item) {
}

void UInventoryComponent::BPF_GetFulfilledQuestsByProgressionDoorData(const UProgressionDoorData* _door, TArray<UQuestItemData*>& _doorFulfilledQuest) {
}

bool UInventoryComponent::BPF_GetFirstLootBoxOfType(ELootBoxType _Type, FLootBoxInstancedData& Out_Data, int32& Out_Index) {
    return false;
}

EWeaponFamilies UInventoryComponent::BPF_GetEquippedWeaponFamily() const {
    return EWeaponFamilies::BareHands;
}

UBaseWeaponData* UInventoryComponent::BPF_GetEquippedWeapon() const {
    return NULL;
}

void UInventoryComponent::BPF_GetEquippedInventoryItemBySlot(EEquipmentSlot _eSlot, int32 _iItemIndex, FInventoryItem& _item, bool& _bOutIsempty) {
}

void UInventoryComponent::BPF_GetEquipmentPreset(int32 _iPresetIndex, FEquipmentPreset& Out_Preset) {
}

int32 UInventoryComponent::BPF_GetCurrentPreset() {
    return 0;
}

TArray<UQuestItemData*> UInventoryComponent::BPF_GetAllFulfilledQuests() {
    return TArray<UQuestItemData*>();
}

void UInventoryComponent::BPF_EquipPreset(int32 _iPresetIndex) {
}

bool UInventoryComponent::BPF_EquipOutfit(const FEquipmentStruct& _newEquipement) {
    return false;
}

void UInventoryComponent::BPF_DismissItemNewNotification(int32 _iItemID) {
}

void UInventoryComponent::BPF_DestroyLootBoxAt(int32 _iIndex, bool _bAllowShrinking) {
}

void UInventoryComponent::BPF_DestroyLootBox(const FLootBoxInstancedData& _data) {
}

void UInventoryComponent::BPF_ChangeEquipmentMaterial(int32 _iItemIndex, int32 _iMaterialIndex) {
}

bool UInventoryComponent::BPF_CanItemBeRemoved(int32 _iItemIndex) {
    return false;
}

void UInventoryComponent::BPF_AddToQuestInventory(const UQuestItemData* _fulfillQuest) {
}

void UInventoryComponent::BPF_AddToInventory(const TArray<FLootBaseItemStruct>& _loots, TArray<int32>& Out_NewItems) {
}

void UInventoryComponent::BPF_AddLootBoxToInventory(const FLootBoxInstancedData& _data, int32 _iCount) {
}

int32 UInventoryComponent::BPF_AddItemToInventory(const FEquipmentStruct& _item, bool _bEquip, int32 _iCount, bool _bCallServer) {
    return 0;
}

void UInventoryComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UInventoryComponent, m_OutfitItems);
    DOREPLIFETIME(UInventoryComponent, m_EquippedWeapon);
    DOREPLIFETIME(UInventoryComponent, m_EquippedItems);
}


