#include "FightingAIController.h"
#include "BehaviorTree/BehaviorTreeComponent.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "SCCrowdFollowingComponent.h"

AFightingAIController::AFightingAIController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<USCCrowdFollowingComponent>(TEXT("PathFollowingComponent"))) {
    this->m_BlackboardComp = CreateDefaultSubobject<UBlackboardComponent>(TEXT("BlackboardComp"));
    this->m_BehaviorComp = CreateDefaultSubobject<UBehaviorTreeComponent>(TEXT("BehaviorComp"));
}

void AFightingAIController::OnPerceptionUpdate(TArray<AActor*> _updatedActors) {
}

void AFightingAIController::GuardBroken() {
}

void AFightingAIController::BPF_SetForcedInputAction(InputAction _eAction) {
}

void AFightingAIController::BPF_SetForcedAttackParameters(EQuadrantTypes _eAttackQuadrant, InputAction _eInputStrike) {
}

void AFightingAIController::AiSpawned(AAISpawner* _spawner) {
}


