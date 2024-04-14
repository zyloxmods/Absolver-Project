#pragma once
#include "CoreMinimal.h"
#include "ERemappingAllowedInputTypes.h"
#include "MappableInputStruct.generated.h"

USTRUCT(BlueprintType)
struct ABSOLVER_API FMappableInputStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_UnrealMappingName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERemappingAllowedInputTypes m_eRemappingAllowedInputType;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FText m_DisplayedMappingNameText[2];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bIsAxisMappingAllowed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bCheckDuplicateKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bForceDisplayAsSingleField;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fKeyToAxisMultScaleFactor;
    
    FMappableInputStruct();
};

