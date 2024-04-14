#pragma once
#include "CoreMinimal.h"
#include "ArchetypeSituationDescription.generated.h"

class UArchetypeAsset;

USTRUCT(BlueprintType)
struct FArchetypeSituationDescription {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UArchetypeAsset* m_Archetype;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iLevelMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iLevelMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_uiWeightLevel;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 m_uiAppearanceProbabilities;
    
    ABSOLVER_API FArchetypeSituationDescription();
};

