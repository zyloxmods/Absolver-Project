#pragma once
#include "CoreMinimal.h"
#include "Phase.generated.h"

class UArchetypeAsset;

USTRUCT(BlueprintType)
struct FPhase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UArchetypeAsset*> m_Archetypes;
    
    ABSOLVER_API FPhase();
};

