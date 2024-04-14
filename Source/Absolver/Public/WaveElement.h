#pragma once
#include "CoreMinimal.h"
#include "WaveElement.generated.h"

class UArchetypeAsset;

USTRUCT(BlueprintType)
struct FWaveElement {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iTotalNum[3];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iSpawnNum[3];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iMaxSimultaneous[3];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UArchetypeAsset* m_Archetype;
    
    ABSOLVER_API FWaveElement();
};

