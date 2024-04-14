#pragma once
#include "CoreMinimal.h"
#include "AIController.h"
#include "EQuadrantTypes.h"
#include "InputAction.h"
#include "FightingAIController.generated.h"

class AAISpawner;
class AActor;
class UBehaviorTreeComponent;
class UBlackboardComponent;

UCLASS(Blueprintable)
class ABSOLVER_API AFightingAIController : public AAIController {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UBlackboardComponent* m_BlackboardComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UBehaviorTreeComponent* m_BehaviorComp;
    
public:
    AFightingAIController(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void OnPerceptionUpdate(TArray<AActor*> _updatedActors);
    
    UFUNCTION(BlueprintCallable)
    void GuardBroken();
    
public:
    UFUNCTION(BlueprintCallable)
    void BPF_SetForcedInputAction(InputAction _eAction);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetForcedAttackParameters(EQuadrantTypes _eAttackQuadrant, InputAction _eInputStrike);
    
private:
    UFUNCTION(BlueprintCallable)
    void AiSpawned(AAISpawner* _spawner);
    
};

