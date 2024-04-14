#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "AdversarialTeamSceneLocator.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ABSOLVER_API UAdversarialTeamSceneLocator : public USceneComponent {
    GENERATED_BODY()
public:
    UAdversarialTeamSceneLocator(const FObjectInitializer& ObjectInitializer);

};

