#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EPlayerNumber.h"
#include "InteractiveInterface.h"
#include "StoneInfoPerOfNumPlayers.h"
#include "HealStone.generated.h"

class APlayerController;
class UInteractionObjectComponent;

UCLASS(Blueprintable)
class ABSOLVER_API AHealStone : public AActor/*, public IInteractiveInterface */ {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, ReplicatedUsing=OnRep_StoneConfig, meta=(AllowPrivateAccess=true))
    FStoneInfoPerOfNumPlayers m_StoneConfigs[3];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_PlayerNum, meta=(AllowPrivateAccess=true))
    EPlayerNumber m_ePlayerCountAtStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInteractionObjectComponent* m_InteractionComp;
    
public:
    AHealStone(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void UseInteractiveObject(APlayerController* _controller);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_StoneConfig();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_PlayerNum();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 BPF_GetRemainingStacks() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 BPF_GetGleamCost() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_Start();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_StackNumChanged(int32 _iRemainingStacks);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnShow();
    

    // Fix for true pure virtual functions not being implemented
};

