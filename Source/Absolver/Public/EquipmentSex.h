#pragma once
#include "CoreMinimal.h"
#include "ECharacterSex.h"
#include "EquipmentSex.generated.h"

class UEquipmentSelectionData;

USTRUCT(BlueprintType)
struct FEquipmentSex {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEquipmentSelectionData* m_EquipmentSelection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECharacterSex m_eSex;
    
    ABSOLVER_API FEquipmentSex();
};

