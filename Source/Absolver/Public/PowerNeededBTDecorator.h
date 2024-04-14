#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "PowerNeededBTDecorator.generated.h"

UCLASS(Blueprintable)
class ABSOLVER_API UPowerNeededBTDecorator : public UBTDecorator {
    GENERATED_BODY()
public:
    UPowerNeededBTDecorator();

};

