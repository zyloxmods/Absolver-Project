#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "VertexTransformPoint.generated.h"

USTRUCT(BlueprintType)
struct MESHTOOLRUNTIME_API FVertexTransformPoint {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 VertexIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector DeltaPosition;
    
    FVertexTransformPoint();
};

