#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GatherTrapZoneVisualizerComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ABSOLVER_API UGatherTrapZoneVisualizerComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UGatherTrapZoneVisualizerComponent(const FObjectInitializer& ObjectInitializer);

};

