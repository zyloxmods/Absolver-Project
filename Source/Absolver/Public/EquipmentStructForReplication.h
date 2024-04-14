#pragma once
#include "CoreMinimal.h"
#include "ESchoolItemType.h"
#include "EquipmentStructForReplication.generated.h"

class UBaseItemData;

USTRUCT(BlueprintType)
struct ABSOLVER_API FEquipmentStructForReplication {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBaseItemData* m_EquipmentDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESchoolItemType m_eSchoolItemType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iMaterialIndex;
    
    FEquipmentStructForReplication();
};

