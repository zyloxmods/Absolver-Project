#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MTWedgeTexCoords.generated.h"

USTRUCT(BlueprintType)
struct MESHTOOLRUNTIME_API FMTWedgeTexCoords {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector2D> WedgeTexCoords;
    
    FMTWedgeTexCoords();
};

