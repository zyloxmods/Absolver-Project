#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "BasicSpawningComponent.generated.h"

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ABSOLVER_API UBasicSpawningComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UBasicSpawningComponent(const FObjectInitializer& ObjectInitializer);

};

