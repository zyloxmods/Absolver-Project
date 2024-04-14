#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "SoundGroundAnimNotify.generated.h"

class USkeletalMeshComponent;

UCLASS(Blueprintable, CollapseCategories)
class ABSOLVER_API USoundGroundAnimNotify : public UAnimNotify {
    GENERATED_BODY()
public:
    USoundGroundAnimNotify();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_NotifyGround(USkeletalMeshComponent* _meshComp, uint8 _surface) const;
    
};

