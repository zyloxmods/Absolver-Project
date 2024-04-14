#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SkyLightParametersStruct.generated.h"

USTRUCT(BlueprintType)
struct FSkyLightParametersStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Intensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FColor SkyLightColor;
    
    ABSOLVER_API FSkyLightParametersStruct();
};

