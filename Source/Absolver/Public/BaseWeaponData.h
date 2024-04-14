#pragma once
#include "CoreMinimal.h"
#include "EWeaponEquipmentSlot.h"
#include "EWeaponFamilies.h"
#include "GearData.h"
#include "WeaponInfo.h"
#include "BaseWeaponData.generated.h"

UCLASS(Blueprintable)
class ABSOLVER_API UBaseWeaponData : public UGearData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWeaponInfo> m_WeaponInformations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWeaponEquipmentSlot m_WeaponEquipmentSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWeaponFamilies m_eWeaponFamily;
    
    UBaseWeaponData();

};

