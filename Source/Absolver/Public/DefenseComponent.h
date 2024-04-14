#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "EAvoidType.h"
#include "EBonusType.h"
#include "ESpecialAbilities.h"
#include "GuardUpdateStruct.h"
#include "DefenseComponent.generated.h"

class AActor;
class AFightingCharacter;
class UAbsorbDB;
class UAbsorbPropertyDB;
class UAvoidDB;
class UAvoidPropertyDB;
class UCurveFloat;
class UEffectData;
class UFightingStyleDB;
class UGuardDB;
class UParryDB;
class UParryPropertyDB;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ABSOLVER_API UDefenseComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FGuardModificationDynamicDelegate, float, OldValue, float, NewValue);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGuardChanged, bool, NewValue);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FGuardBrokenDynamicDelegate);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuardChanged BPE_GuardChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParryDB* m_ParryDB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAvoidDB* m_AvoidDB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    float m_fCurrentGuard;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float m_fBonusMaxStamina;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuardBrokenDynamicDelegate BPE_GuardBroken;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuardModificationDynamicDelegate BPE_GuardGaugeModification;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UFightingStyleDB*> m_FightingStyles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGuardDB* m_GuardDB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_GuardTargettedStruct, meta=(AllowPrivateAccess=true))
    FGuardUpdateStruct m_GuardTargettedStruct;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fMaxGuard;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fGuardBrokenGaugeCoolDownBeforeRecovery;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fGuardRecoveryRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fGuardBrokenRecoveryRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* m_GuardGaugeRecoveryRateOverWeightRatioCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fGuardRecoveryRateCoeffWhenGuarding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fGuardBreakDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bCanDoActionIfGuardGaugeEmpty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bGuardBlocksImpactsFromBack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool m_bIsGuarding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fRangeOfDodgeForRefill;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fDodgeRefillValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fDodgeGuardGaugeRefillValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fBareHandsGuardCoeff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fBareHandsGuardSpecialCoeff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAbsorbDB* m_AbsorbDB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fGuardGaugeRecoveryCooldown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 m_iResilience;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iResilienceAttackBonus;
    
public:
    UDefenseComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetGuardValue(float _fGuard);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerRepSetGuardGaugeTarget(float _fPercentageTarget, int64 _iTimeToTarget);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerRepNotifyParrySuccessful(int64 _iTimeToLaunch, AActor* _parryingActor, FName _attack, uint8 _uiParryOriginOrderId, UParryPropertyDB* _ParryPropertyDB);
    
    UFUNCTION(BlueprintCallable)
    void OnStatsChanged(EBonusType _eBonusType);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_GuardTargettedStruct();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnEffectAddedOrRemovedCallback(bool _bAdded, UEffectData* _effectData);
    
    UFUNCTION(NetMulticast, Reliable)
    void MultiCastSetGuardGaugeTarget(float _fPercentageTarget, int64 _iTimeToTarget);
    
    UFUNCTION(NetMulticast, Reliable)
    void MulticastNotifyAvoidSuccessful(int64 _iTimeToLaunch, AActor* _avoidedActor, EAvoidType _eAvoidType, uint8 _uiAvoidOriginOrderID, FName _AttackName, FName _executingAttackName, UAvoidPropertyDB* _AvoidPropertyDB);
    
    UFUNCTION(NetMulticast, Reliable)
    void MulticastNotifyAbsorbSuccessful(int64 _iTimeToLaunch, FVector _vImpactPosition, FVector _vImpactDir, float _fDamage, UAbsorbPropertyDB* _AbsorbPropertyDB, AFightingCharacter* _attacker, FName _AttackName, uint8 _uiAttackHitNumber, float _fSpecialAttackDamage, uint8 _uiAbsorbOriginOrderId, FName _absorbAttackName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsParryWindowOpen(bool _bPrediction) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsParryActive(bool _bPrediction) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsGuarding() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAvoided() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAbsorbWindowOpened(bool _bInPrediction) const;
    
    UFUNCTION(Client, Reliable, WithValidation)
    void ClientNotifyParrySuccessful(int64 _iTimeToLaunch, AFightingCharacter* _attacker, FName _attack, uint8 _uiParryOriginOrderId, UParryPropertyDB* _ParryPropertyDB);
    
    UFUNCTION(BlueprintCallable, Client, Reliable, WithValidation)
    void ClientNotifyIsTargettedByAttack(AFightingCharacter* _attackInstigator, FName _attack);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetIsGuarding(bool _bGuarding, bool _bInPrediction);
    
    UFUNCTION(BlueprintCallable)
    void BPF_RestoreIncreaseGuardGauge();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_IsGuardBroken() const;
    
    UFUNCTION(BlueprintCallable)
    void BPF_IncreaseGuardGauge(float _fAmount);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESpecialAbilities BPF_GetSpecialAbility() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 BPF_GetResilienceBonusFromAttack();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 BPF_GetResilience();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float BPF_GetMaxGuardGauge() const;
    
    UFUNCTION(BlueprintCallable)
    float BPF_GetGuardRatio();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText BPF_GetFightingStyleName(int32 _iStyle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFightingStyleDB* BPF_GetFightingStyleDB(int32 _iFightingStyle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESpecialAbilities BPF_GetCombatStyleSpecialAbility(uint8 _uiCombatStyleNb) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float BPF_GetBaseMaxGuard() const;
    
    UFUNCTION(BlueprintCallable)
    void BPF_DecreaseGuardGaugeOverTime(float _fAmount, float _fDelay);
    
    UFUNCTION(BlueprintCallable)
    void BPF_DecreaseGuardGauge(float _fAmount);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    uint8 AbsorbStacksLeft(bool _bInPrediction) const;
    
};

