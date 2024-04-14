#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PrestigeMaterialParameters.generated.h"

USTRUCT(BlueprintType)
struct ABSOLVER_API FPrestigeMaterialParameters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor m_baseColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor m_coloredSparkles;
    
    FPrestigeMaterialParameters();
};

