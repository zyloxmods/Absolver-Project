#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SpawnerGroupVisualizerComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ABSOLVER_API USpawnerGroupVisualizerComponent : public UActorComponent {
    GENERATED_BODY()
public:
    USpawnerGroupVisualizerComponent(const FObjectInitializer& ObjectInitializer);

};

