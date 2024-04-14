#pragma once
#include "CoreMinimal.h"
#include "BasicSpawningComponent.h"
#include "TeamSpawningComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ABSOLVER_API UTeamSpawningComponent : public UBasicSpawningComponent {
    GENERATED_BODY()
public:
    UTeamSpawningComponent(const FObjectInitializer& ObjectInitializer);

};

