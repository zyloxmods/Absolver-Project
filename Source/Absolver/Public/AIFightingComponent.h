#pragma once
#include "CoreMinimal.h"
#include "AIComponent.h"
#include "BaseComponent.h"
#include "EMainBehaviors.h"
#include "EStatsAppliedMode.h"
#include "EWeaponFamilies.h"
#include "HitDescription.h"
#include "AIFightingComponent.generated.h"

class AActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ABSOLVER_API UAIFightingComponent : public UAIComponent, public IBaseComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAIBehaviorChanged, EMainBehaviors, NewBehavior);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIBehaviorChanged OnBehaviorChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 m_iCurrentPhase;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fChainedDodgeDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fCancelDelayForParry;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fLateralDodgeAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fLowStaminaRatioMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fLowStaminaRatioMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fMemoryValidity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fPickupMaxDist;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fThreatMinDistForPickup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fAlertPropagationDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    uint8 m_uiIdleIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_Idle, meta=(AllowPrivateAccess=true))
    bool m_bAlertedOnce;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    uint8 m_uiWeightLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_Idle, meta=(AllowPrivateAccess=true))
    uint8 m_uiAlertedIdle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    int32 m_iCurrentLevel;
    
public:
    UAIFightingComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable)
    void OnWeaponFamilyChanged(const EWeaponFamilies _eNewWeaponFamily, const EStatsAppliedMode _eStatsAppliedMode);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_Spawner();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_Idle();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_Archetype();
    
public:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_DeathDetected();
    
    UFUNCTION(BlueprintCallable)
    void HitDetection(FHitDescription _hitDescription);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SwitchToPhase(int32 _iPhase);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 BPF_GetXPBonus();
    
    UFUNCTION(BlueprintCallable)
    void BPF_ForceEnemy(AActor* _enemy);
    
    UFUNCTION(BlueprintCallable)
    void BeforeGhostDamagesReset();
    

    // Fix for true pure virtual functions not being implemented
};

