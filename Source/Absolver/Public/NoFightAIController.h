#pragma once
#include "CoreMinimal.h"
#include "AIController.h"
#include "NoFightAIController.generated.h"

class UBehaviorTreeComponent;
class UBlackboardComponent;

UCLASS(Blueprintable)
class ABSOLVER_API ANoFightAIController : public AAIController {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UBlackboardComponent* m_BlackboardComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UBehaviorTreeComponent* m_BehaviorComp;
    
public:
    ANoFightAIController(const FObjectInitializer& ObjectInitializer);

};

