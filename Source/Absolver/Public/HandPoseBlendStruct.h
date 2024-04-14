#pragma once
#include "CoreMinimal.h"
#include "EBlendType.h"
#include "HandPoseBlendStruct.generated.h"

USTRUCT(BlueprintType)
struct ABSOLVER_API FHandPoseBlendStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBlendType m_eBlendType;
    
    FHandPoseBlendStruct();
};

