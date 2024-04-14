#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "IsInAttackRangeDecorator.generated.h"

UCLASS(Blueprintable)
class ABSOLVER_API UIsInAttackRangeDecorator : public UBTDecorator {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fAttackDistance;
    
public:
    UIsInAttackRangeDecorator();

};

