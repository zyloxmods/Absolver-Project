#pragma once
#include "CoreMinimal.h"
#include "MappableInputStruct.h"
#include "RemappingSectionStruct.generated.h"

USTRUCT(BlueprintType)
struct ABSOLVER_API FRemappingSectionStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText m_SectionDisplayText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMappableInputStruct> m_RemappableActions;
    
    FRemappingSectionStruct();
};

