#pragma once
#include "CoreMinimal.h"
#include "ComboSave.h"
#include "ComboSaveList.generated.h"

USTRUCT(BlueprintType)
struct FComboSaveList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FComboSave> m_Combos;
    
    ABSOLVER_API FComboSaveList();
};

