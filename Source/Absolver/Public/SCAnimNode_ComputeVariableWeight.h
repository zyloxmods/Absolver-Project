#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNodeBase.h"
#include "Animation/AnimNodeBase.h"
#include "SCAnimNode_ComputeVariableWeight.generated.h"

USTRUCT(BlueprintType)
struct ABSOLVER_API FSCAnimNode_ComputeVariableWeight : public FAnimNode_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPoseLink mBasePose;
    
    FSCAnimNode_ComputeVariableWeight();
};

