#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "UpdateMovementMode.generated.h"

UCLASS(Blueprintable)
class ABSOLVER_API UUpdateMovementMode : public UBTService {
    GENERATED_BODY()
public:
    UUpdateMovementMode();

};

