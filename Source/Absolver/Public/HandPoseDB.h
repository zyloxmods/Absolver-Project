#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "HandPoseBlendStruct.h"
#include "HandPoseDB.generated.h"

class UAnimSequence;

UCLASS(Blueprintable)
class ABSOLVER_API UHandPoseDB : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FHandPoseBlendStruct m_BlendInStruct[4];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FHandPoseBlendStruct m_BlendOutStruct[10];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* m_Anims[4];
    
    UHandPoseDB();

};

