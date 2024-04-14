#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GatherTrapGroupVisualizerComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ABSOLVER_API UGatherTrapGroupVisualizerComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UGatherTrapGroupVisualizerComponent(const FObjectInitializer& ObjectInitializer);

};

