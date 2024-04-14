#pragma once
#include "CoreMinimal.h"
#include "GenericTeamAgentInterface.h"
#include "BaseCharacter.h"
#include "EDangerStates.h"
#include "EFactionsEnums.h"
#include "ERelationshipTypes.h"
#include "HittableActor.h"
#include "TargetableActor.h"
#include "BaseFightingCharacter.generated.h"

class AActor;
class AWeaponActor;
class UAttackComponent;
class UObject;

UCLASS(Blueprintable)
class ABSOLVER_API ABaseFightingCharacter : public ABaseCharacter/*, public ITargetableActor, public IHittableActor, public IGenericTeamAgentInterface */{
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAttackComponent* m_AttackComponent;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    AWeaponActor* m_Weapons[6];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UObject*> m_PreloadedWeaponObjects;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_IsInLockedGhostGatesZone, meta=(AllowPrivateAccess=true))
    bool m_bIsInLockedGhostGatesZone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFactionsEnums m_eFaction;
    
public:
    ABaseFightingCharacter(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void SetTarget(AActor* _target);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_IsInLockedGhostGatesZone();
    
    UFUNCTION(BlueprintCallable)
    void OnDangerStateChanged(EDangerStates _ePrevDangerState, EDangerStates _eNewDangerState);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetTarget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAttackComponent* GetAttackComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EDangerStates BPF_GetDangerState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_TargetChanged(AActor* _old);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_SetCharacterHidden(bool _bHidden);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnRelationshipChanged(AActor* _shifter, AActor* _shiftTarget, ERelationshipTypes _ePreviousRelation, ERelationshipTypes _enewRelation);
    

    // Fix for true pure virtual functions not being implemented
};

