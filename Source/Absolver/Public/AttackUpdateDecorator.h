#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "AttackUpdateDecorator.generated.h"

UCLASS(Blueprintable)
class ABSOLVER_API UAttackUpdateDecorator : public UBTDecorator {
    GENERATED_BODY()
public:
    UAttackUpdateDecorator();

};

