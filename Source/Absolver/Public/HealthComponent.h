#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EBonusType.h"
#include "EDownState.h"
#include "HealthComponent.generated.h"

class AActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ABSOLVER_API UHealthComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FGhostDamageLost);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bCanRecoverHealth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    float m_fHealth;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGhostDamageLost OnGhostDamageLost;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fRecoveryRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fRecoveryCooldownInit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fMaxHealth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float m_fBonusMaxHealth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fGhostDamageRecoveryRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    float m_fGhostDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRepSetIsDown, meta=(AllowPrivateAccess=true))
    bool m_bIsDown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRepHitOrderPlayedForCurrentDeath, meta=(AllowPrivateAccess=true))
    bool m_bHitOrderPlayedForCurrentDeath;
    
    UPROPERTY(EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    int64 m_iTimeToEndRevive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float m_fReviveTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float m_fReviveLifePercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float m_fDeathLifePercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float m_fRoomClearedLifePercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float m_fVanishTotalTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool m_bCanBeRevived;
    
    UPROPERTY(EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    int64 m_iTimeOfEndRevivable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    EDownState m_eDownState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRepCanShowDownScreen, meta=(AllowPrivateAccess=true))
    bool m_bCanShowDownScreen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool m_bCanVanish;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float m_fTimeBeforeVanishActive;
    
    UPROPERTY(EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    int64 m_iTimeTickBeforeVanishActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool m_bInCoopRevivedWait;
    
    UPROPERTY(EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    int64 m_iTimeRespawnNoDown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool m_bReviveInProgress;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_RecoveryRateByDangerState[3];
    
public:
    UHealthComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetInvicible(bool _bIsInvicible);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerRequestReviveToken(AActor* _reviveTarget, AActor* _requester, uint8 _uiReviveOrderID, bool _bCancel);
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerNotifyVanish();
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerHackSetHealth(float _fHealth);
    
    UFUNCTION(BlueprintCallable)
    void OnStatsChanged(EBonusType _eBonusType);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRepSetIsDown();
    
    UFUNCTION(BlueprintCallable)
    void OnRepHitOrderPlayedForCurrentDeath();
    
    UFUNCTION(BlueprintCallable)
    void OnRepCanShowDownScreen();
    
public:
    UFUNCTION(BlueprintCallable, Client, Reliable, WithValidation)
    void ClientRequestCancelRevive(uint8 _uiReviveOrderID);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void BPF_ServerSetHealth(float _fHealth);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void BPF_ServerAddHealth(float _fHealth);
    
    UFUNCTION(BlueprintCallable)
    void BPF_ResetRecoveryCooldownFromValue(const float _fNewCooldownValue);
    
    UFUNCTION(BlueprintCallable)
    void BPF_ResetRecoveryCooldown();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float BPF_GetTimeRespawnNoDown() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float BPF_GetTimeOfEndRevivable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float BPF_GetTimeBeforeVanishActive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float BPF_GetMaxHealth() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float BPF_GetGhostDamage();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float BPF_GetBonusMaxHealth() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float BPF_GetBaseMaxHealth() const;
    
    UFUNCTION(BlueprintCallable)
    void BPF_ApplyDamage(float _fDamage, bool _bDeathDodger);
    
};

