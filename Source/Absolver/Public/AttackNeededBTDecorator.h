#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "AttackNeededBTDecorator.generated.h"

UCLASS(Blueprintable)
class ABSOLVER_API UAttackNeededBTDecorator : public UBTDecorator {
    GENERATED_BODY()
public:
    UAttackNeededBTDecorator();

};

