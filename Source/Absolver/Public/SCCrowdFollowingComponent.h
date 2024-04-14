#pragma once
#include "CoreMinimal.h"
#include "Navigation/CrowdFollowingComponent.h"
#include "SCCrowdFollowingComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ABSOLVER_API USCCrowdFollowingComponent : public UCrowdFollowingComponent {
    GENERATED_BODY()
public:
    USCCrowdFollowingComponent(const FObjectInitializer& ObjectInitializer);

};

