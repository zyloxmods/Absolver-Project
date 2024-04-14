#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "AttackUpdateBTService.generated.h"

UCLASS(Blueprintable)
class ABSOLVER_API UAttackUpdateBTService : public UBTService {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bAllowNoTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bAllowAttackInterrupt;
    
public:
    UAttackUpdateBTService();

};

