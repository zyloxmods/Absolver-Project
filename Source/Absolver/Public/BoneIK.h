#pragma once
#include "CoreMinimal.h"
#include "BoneContainer.h"
#include "BoneIK.generated.h"

USTRUCT(BlueprintType)
struct ABSOLVER_API FBoneIK {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FBoneReference m_Bone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fWeight;
    
    FBoneIK();
};

