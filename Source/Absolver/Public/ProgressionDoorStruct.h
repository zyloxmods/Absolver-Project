#pragma once
#include "CoreMinimal.h"
#include "ProgressionDoorStruct.generated.h"

class UProgressionDoorData;
class UQuestItemData;

USTRUCT(BlueprintType)
struct ABSOLVER_API FProgressionDoorStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UProgressionDoorData* m_ProgressionDoorData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UQuestItemData*> m_Conditions;
    
    FProgressionDoorStruct();
};

