#pragma once
#include "CoreMinimal.h"
#include "ESwitchGateEXitType.h"
#include "GatherTrap.h"
#include "GatherSwitchGate.generated.h"

class AFightingCharacter;

UCLASS(Blueprintable)
class ABSOLVER_API AGatherSwitchGate : public AGatherTrap {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool m_bDoorClosed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AFightingCharacter*> m_charInsideA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AFightingCharacter*> m_charInsideB;
    
public:
    AGatherSwitchGate(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, NetMulticast, Reliable, WithValidation)
    void NetMulticastOnHostMigration();
    
    UFUNCTION(BlueprintCallable)
    void BPF_Trigger();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_IsInsideTrigger(ESwitchGateEXitType _eExit, AFightingCharacter* _char);
    
    UFUNCTION(BlueprintCallable)
    void BPF_ExitTriggerBy(ESwitchGateEXitType _eExit, AFightingCharacter* _char);
    
    UFUNCTION(BlueprintCallable)
    void BPF_EnterTriggerBy(ESwitchGateEXitType _eExit, AFightingCharacter* _char);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnTrigger();
    
};

