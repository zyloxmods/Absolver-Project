#pragma once
#include "CoreMinimal.h"
#include "BasicSpawningComponent.h"
#include "FarthestSpawningComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ABSOLVER_API UFarthestSpawningComponent : public UBasicSpawningComponent {
    GENERATED_BODY()
public:
    UFarthestSpawningComponent(const FObjectInitializer& ObjectInitializer);

};

