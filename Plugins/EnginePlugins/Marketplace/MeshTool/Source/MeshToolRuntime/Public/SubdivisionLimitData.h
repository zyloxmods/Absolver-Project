#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SubdividedWireEdge.h"
#include "SubdivisionLimitSection.h"
#include "SubdivisionLimitData.generated.h"

USTRUCT(BlueprintType)
struct FSubdivisionLimitData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector> VertexPositions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSubdivisionLimitSection> Sections;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSubdividedWireEdge> SubdividedWireEdges;
    
    MESHTOOLRUNTIME_API FSubdivisionLimitData();
};

