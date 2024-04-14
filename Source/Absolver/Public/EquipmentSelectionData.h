#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "EquipmentSelectionData.generated.h"

class UBaseWeaponData;
class UEquipmentData;
class USkeletalMesh;

UCLASS(Blueprintable)
class ABSOLVER_API UEquipmentSelectionData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    UEquipmentData* m_CharacterEquipments[10];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int8 m_EquipmentMaterials[10];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBaseWeaponData* m_Weapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeletalMesh* m_CharacterMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_uiSkinToneIndex;
    
    UEquipmentSelectionData();

};

