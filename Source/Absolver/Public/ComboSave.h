#pragma once
#include "CoreMinimal.h"
#include "AttacksCombo.h"
#include "ComboSave.generated.h"

USTRUCT(BlueprintType)
struct ABSOLVER_API FComboSave {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FName m_ComboName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FAttacksCombo m_SavedCombo;
    
    FComboSave();
};

