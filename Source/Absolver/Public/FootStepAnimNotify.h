#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "Engine/EngineTypes.h"
#include "FootStepAnimNotify.generated.h"

class USkeletalMeshComponent;

UCLASS(Blueprintable, CollapseCategories)
class ABSOLVER_API UFootStepAnimNotify : public UAnimNotify {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_Foot;
    
public:
    UFootStepAnimNotify();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_NotifyFootStep(USkeletalMeshComponent* _meshComp, uint8 _surface, FHitResult _hitResult) const;
    
};

