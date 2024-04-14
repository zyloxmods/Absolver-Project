#pragma once
#include "CoreMinimal.h"
#include "AnimNodes/AnimNode_BlendSpacePlayer.h"
#include "SCAnimNode_PlayBlendSpace.generated.h"

class UMirrorAnimDB;

USTRUCT(BlueprintType)
struct ABSOLVER_API FSCAnimNode_PlayBlendSpace : public FAnimNode_BlendSpacePlayer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mbMirrorAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 miMetaStateID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 miAnimSubStateID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 miTransitionGlobalType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMirrorAnimDB* mMirrorAnimDB;
    
    FSCAnimNode_PlayBlendSpace();
};

