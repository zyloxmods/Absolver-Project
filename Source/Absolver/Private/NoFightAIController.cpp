#include "NoFightAIController.h"
#include "BehaviorTree/BehaviorTreeComponent.h"
#include "BehaviorTree/BlackboardComponent.h"

ANoFightAIController::ANoFightAIController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_BlackboardComp = CreateDefaultSubobject<UBlackboardComponent>(TEXT("BlackboardComp"));
    this->m_BehaviorComp = CreateDefaultSubobject<UBehaviorTreeComponent>(TEXT("BehaviorComp"));
}


