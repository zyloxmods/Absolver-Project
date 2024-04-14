#pragma once
#include "CoreMinimal.h"
#include "EEffectTarget.h"
#include "ItemEffects.generated.h"

class UEffectData;

USTRUCT(BlueprintType)
struct FItemEffects {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEffectTarget m_eEffectTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEffectData* m_EffectData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iAOEWantedRelations;
    
    ABSOLVER_API FItemEffects();
};

