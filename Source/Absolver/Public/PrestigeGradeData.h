#pragma once
#include "CoreMinimal.h"
#include "PrestigeMaterialParameters.h"
#include "PrestigeGradeData.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct ABSOLVER_API FPrestigeGradeData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> m_Icon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPrestigeMaterialParameters m_materialParameters;
    
    FPrestigeGradeData();
};

