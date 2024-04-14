#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EDangerStates.h"
#include "InteractiveInterface.h"
#include "AltarBase.generated.h"

class AFightingCharacter;
class APlayerController;
class APlayerStart;
class UInteractionObjectComponent;
class USCSaveGameComponent;

UCLASS(Blueprintable)
class ABSOLVER_API AAltarBase : public AActor/*, public IInteractiveInterface */{
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInteractionObjectComponent* m_InteractionObjectComponent;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USCSaveGameComponent* m_SaveGameComponent;
    
public:
    AAltarBase(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void UseInteractiveObject(APlayerController* _controller);
    
    UFUNCTION(BlueprintCallable)
    void UpdatedFromSave();
    
    UFUNCTION(BlueprintCallable)
    void OnDangerStateChanged(EDangerStates _ePrevDangerState, EDangerStates _eNewDangerState);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnLocalMasterPawnInitialized(AFightingCharacter* _fightingChar);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    TArray<APlayerStart*> BPE_GetAssociatedPlayerStarts();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_ActiveStateChanged(bool _Active);
    

    // Fix for true pure virtual functions not being implemented
};

