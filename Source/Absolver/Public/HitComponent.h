#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "DamageDealtInfo.h"
#include "ECardinalPoints.h"
#include "EDangerStates.h"
#include "EHeight.h"
#include "EImpactType.h"
#include "HitDescription.h"
#include "HitComponent.generated.h"

class AActor;
class UCurveFloat;
class UHittedDB;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ABSOLVER_API UHitComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FHittedDelegate, FHitDescription, HitDescription);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHittedDelegate OnHitDetection;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* m_Curve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fHitStrength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* m_DefaultKnockBackDynamic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fHittedTrackingDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHittedDB* m_HittedDB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    float m_fDisarmGauge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fGuardDisarmCoef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fBrokenGuardDisarmCoef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fDisarmGaugeRegenRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fDisarmGaugeRegenRateWhileHoldingWeapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bSteadyHand;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    TArray<FDamageDealtInfo> m_DamageDealtInfos;
    
public:
    UHitComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void OnDangerStateChangedCallback(EDangerStates _ePreviousDangerState, EDangerStates _eNewDangerState);
    
private:
    UFUNCTION(NetMulticast, Reliable)
    void MulticastNotifyResilienceImpact(int64 _iTimeToLaunch, AActor* _DamageInstigator, FName _AttackName, FVector _ImpactPositionOnHitCapsule, FVector _ImpactDir, bool _IsGuarding, float _Damage, bool _AbsorbBroken, bool _bIsPerfectLink, EHeight _ImpactHeight, ECardinalPoints _ImpactCardinalPoint, bool _bLethal, uint8 _uiHitNb, float _fSpecialDamageRatio, EImpactType _eImpactType);
    
};

