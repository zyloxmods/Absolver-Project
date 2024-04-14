#pragma once
#include "CoreMinimal.h"
#include "BlendSpaceContainer.generated.h"

class UBlendSpaceBase;

USTRUCT(BlueprintType)
struct ABSOLVER_API FBlendSpaceContainer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBlendSpaceBase* m_BlendSpace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bMirror;
    
    FBlendSpaceContainer();
};

