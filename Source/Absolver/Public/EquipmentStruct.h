#pragma once
#include "CoreMinimal.h"
#include "ESchoolItemType.h"
#include "EquipmentStruct.generated.h"

class UBaseItemData;
class UMaterialInterface;

USTRUCT(BlueprintType)
struct ABSOLVER_API FEquipmentStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    UBaseItemData* m_EquipmentDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    ESchoolItemType m_eSchoolItemType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 m_iMaterialIndex;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInterface* m_BaseFXMaterials[10];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInterface*> m_VariationChosenMaterials;
    
    FEquipmentStruct();
};

