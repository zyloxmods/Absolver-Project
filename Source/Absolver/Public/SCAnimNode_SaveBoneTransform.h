#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNodeBase.h"
#include "BoneContainer.h"
#include "Animation/AnimNodeBase.h"
#include "ECoordinateSystem.h"
#include "ESaveBone.h"
#include "SCAnimNode_SaveBoneTransform.generated.h"

USTRUCT(BlueprintType)
struct ABSOLVER_API FSCAnimNode_SaveBoneTransform : public FAnimNode_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPoseLink mBasePose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESaveBone meSaveBone;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FBoneReference mBone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECoordinateSystem meTransformSpace;
    
    FSCAnimNode_SaveBoneTransform();
};

