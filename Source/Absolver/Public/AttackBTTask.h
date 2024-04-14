#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_BlackboardBase.h"
#include "AttackBTTask.generated.h"

UCLASS(Blueprintable)
class ABSOLVER_API UAttackBTTask : public UBTTask_BlackboardBase {
    GENERATED_BODY()
public:
    UAttackBTTask();

};

