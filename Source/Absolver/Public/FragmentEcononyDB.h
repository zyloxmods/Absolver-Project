#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "EEquipmentSlot.h"
#include "EGearRarity.h"
#include "ELootBoxType.h"
#include "SlotEquipmentValues.h"
#include "FragmentEcononyDB.generated.h"

UCLASS(Blueprintable)
class ABSOLVER_API UFragmentEcononyDB : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EEquipmentSlot, FSlotEquipmentValues> m_SlotEquipmentsValues;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iPrestigePointValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ELootBoxType, int32> m_LootBoxesValues;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iApperacenChangeCost;
    
    UFragmentEcononyDB();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 BPF_GetRepairCost(EEquipmentSlot _eSlot, EGearRarity _eRarity) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 BPF_GetFragmentValue(EEquipmentSlot _eSlot, bool _bIsDirty, EGearRarity _eRarity) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 BPF_GetDyeCost(EEquipmentSlot _eSlot, EGearRarity _eRarity) const;
    
};

