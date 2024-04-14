#pragma once
#include "CoreMinimal.h"
#include "EquipmentStruct.h"
#include "EquipmentPreset.generated.h"

USTRUCT(BlueprintType)
struct ABSOLVER_API FEquipmentPreset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FEquipmentStruct m_Items[9];
    
    UPROPERTY(EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    uint8 m_IsEmpty[9];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool m_Init;
    
    FEquipmentPreset();
};

