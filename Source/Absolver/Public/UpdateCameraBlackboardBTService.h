#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/Services/BTService_BlueprintBase.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "EDirections.h"
#include "EFightingActionState.h"
#include "UpdateCameraBlackboardBTService.generated.h"

UCLASS(Blueprintable)
class ABSOLVER_API UUpdateCameraBlackboardBTService : public UBTService_BlueprintBase {
    GENERATED_BODY()
public:
    UUpdateCameraBlackboardBTService();

    UFUNCTION(BlueprintCallable)
    void BPF_UpdateIsInFlyModeKey(FBlackboardKeySelector _IsInFlyModeKey);
    
    UFUNCTION(BlueprintCallable)
    void BPF_UpdateIsInDialogKey(FBlackboardKeySelector _IsInDialogKey);
    
    UFUNCTION(BlueprintCallable)
    void BPF_UpdateIsDuckingKey(FBlackboardKeySelector _DuckingKey);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EDirections BPF_GetCharacterSideOnScreen();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_WatchedPlayerMovedFromOrToDown(bool _bNowInDownPosition);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_ExitState(EFightingActionState _eStateEntered);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_EnterState(EFightingActionState _eStateEntered);
    
};

