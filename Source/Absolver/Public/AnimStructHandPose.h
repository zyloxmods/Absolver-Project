#pragma once
#include "CoreMinimal.h"
#include "AnimStructBase.h"
#include "EHandPoseBlendInTypes.h"
#include "EHandPoseBlendOutTypes.h"
#include "AnimStructHandPose.generated.h"

USTRUCT(BlueprintType)
struct ABSOLVER_API FAnimStructHandPose : public FAnimStructBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EHandPoseBlendInTypes m_eHandPoseBlendInType1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EHandPoseBlendInTypes m_eHandPoseBlendInType2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EHandPoseBlendOutTypes m_eHandPoseBlendOutType1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EHandPoseBlendOutTypes m_eHandPoseBlendOutType2;
    
    FAnimStructHandPose();
};

