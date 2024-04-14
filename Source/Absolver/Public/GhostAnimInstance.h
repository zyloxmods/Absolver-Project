#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "GhostAnimInstance.generated.h"

class UAnimationAsset;

UCLASS(Blueprintable, NonTransient)
class ABSOLVER_API UGhostAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UAnimationAsset> m_MasterAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float m_fMasterAnimCurrentCursor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool m_bMasterAnimMirror;
    
    UGhostAnimInstance();

};

