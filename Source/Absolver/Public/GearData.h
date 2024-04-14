#pragma once
#include "CoreMinimal.h"
#include "BaseItemData.h"
#include "EEquipmentQuality.h"
#include "EEquipmentStatType.h"
#include "GearDataRow.h"
#include "GearData.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class ABSOLVER_API UGearData : public UBaseItemData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_GearDataRowName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEquipmentQuality m_eEquipmentQuality;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* m_GearDataTable;
    
public:
    UGearData();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    float BPF_GetGearStat(EEquipmentStatType _eEquipmentStatType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void BPF_GetGearDataRow(FGearDataRow& _dataRow);
    
};

