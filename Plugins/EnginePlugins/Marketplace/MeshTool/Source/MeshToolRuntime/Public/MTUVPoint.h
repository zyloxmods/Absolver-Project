#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MTUVPoint.generated.h"

USTRUCT(BlueprintType)
struct MESHTOOLRUNTIME_API FMTUVPoint {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 UVIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 WedgeIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D UV;
    
    FMTUVPoint();
};

