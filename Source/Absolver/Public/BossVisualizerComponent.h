#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "BossVisualizerComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ABSOLVER_API UBossVisualizerComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UBossVisualizerComponent(const FObjectInitializer& ObjectInitializer);

};

