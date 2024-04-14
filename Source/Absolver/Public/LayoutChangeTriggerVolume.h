#pragma once
#include "CoreMinimal.h"
#include "Engine/TriggerVolume.h"
#include "LayoutChangeTriggerVolume.generated.h"

UCLASS(Blueprintable)
class ABSOLVER_API ALayoutChangeTriggerVolume : public ATriggerVolume {
    GENERATED_BODY()
public:
    ALayoutChangeTriggerVolume(const FObjectInitializer& ObjectInitializer);

};

