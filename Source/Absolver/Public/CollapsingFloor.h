#pragma once
#include "CoreMinimal.h"
#include "GatherTrap.h"
#include "CollapsingFloor.generated.h"

UCLASS(Blueprintable)
class ABSOLVER_API ACollapsingFloor : public AGatherTrap {
    GENERATED_BODY()
public:
    ACollapsingFloor(const FObjectInitializer& ObjectInitializer);

};

