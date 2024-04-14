#pragma once
#include "CoreMinimal.h"
#include "MarkedArchetype.generated.h"

class UArchetypeAsset;

USTRUCT(BlueprintType)
struct FMarkedArchetype {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UArchetypeAsset* m_Archetype;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iWeight;
    
    ABSOLVER_API FMarkedArchetype();
};

