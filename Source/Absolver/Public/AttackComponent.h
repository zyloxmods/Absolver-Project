#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "Engine/EngineTypes.h"
#include "AttackDataRow.h"
#include "AttackFilter.h"
#include "AttacksCombo.h"
#include "BaseAttackDataRow.h"
#include "BaseComponent.h"
#include "ComboSave.h"
#include "EComboAttackValidationStates.h"
#include "EDangerStates.h"
#include "EQuadrantTypes.h"
#include "EShardGainCause.h"
#include "EStatsAppliedMode.h"
#include "EWeaponFamilies.h"
#include "HandledWeaponInfo.h"
#include "InputAction.h"
#include "OnHitDelayed.h"
#include "School.h"
#include "AttackComponent.generated.h"

class AActor;
class UCancelDB;
class UComboManager;
class UCurveFloat;
class UDataTable;
class UDrunkenDB;
class UIdleDB;
class ULockDB;
class URushAttackDB;
class UStartUpComboDB;
class UWeaponActionDB;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ABSOLVER_API UAttackComponent : public UActorComponent, public IBaseComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnNewAttacksChanged);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnDangerStateChanged, EDangerStates, _ePreviousDangerState, EDangerStates, _eNewDangerState);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnActiveWeaponChanged, const EWeaponFamilies, _eNewWeaponFamily, const EStatsAppliedMode, _eStatsAppliedMode);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnNewAttacksChanged m_OnNewAttacksChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnActiveWeaponChanged OnActiveWeaponChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float m_fCurrentShards;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bAntiSpam;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDangerStateChanged OnDangerStateChanged;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<InputAction> m_AttackActions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UComboManager* m_ComboManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* m_AnimDBXls;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* m_ItemAttackDB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fAttackReorientationDurationFromIdle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fAttackReorientationDurationFromAttack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStartUpComboDB* m_StartUpComboDB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_AttacksCombo, meta=(AllowPrivateAccess=true))
    TArray<FAttacksCombo> m_Combos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UIdleDB* m_IdleDB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fTimerBeforeReorientBackToFront;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bReorientBackToFrontOnMoveActivated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_uiShardsMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 m_uiBonusMaxShards;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fShardsRecoveryRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fShardsHitBoost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fShardsHittedBoost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fShardsGuardCoef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_WantedQuadrant, meta=(AllowPrivateAccess=true))
    EQuadrantTypes m_eWantedQuadrant;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCancelDB* m_CancelDB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fEnterFightDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fExitFightDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fLockRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fOutOfSightTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fDetectabilityRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D m_vTargetSwitchAngleMargin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* m_TargetSwitchDistanceToAngleScoreRepartitionCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* m_TargetSwitchDistanceScore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> m_Target;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> m_PreviewTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> m_DesignatedTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fDesignatedTargetSearchAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fDesignatedTargetAttackRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fDesignatedTargetAttackRangeInExploration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fJoystickTargetDirectionCoeff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fJoystickTargetDistanceCoeff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fCameraTargetDirectionCoeff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fCameraTargetDistanceCoeff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_HitTargetBoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_UpperLimbLeftArmBoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_UpperLimbRightArmBoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_UpperLimbLeftLegBoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_UpperLimbRightLegBoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_TargetSocketHigh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_TargetSocketHighMiss;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_TargetSocketHighMissSide;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_TargetSocketMid1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_TargetSocketMidMiss;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_TargetSocketMidMissSide;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_TargetSocketMid2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_TargetSocketLowLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_TargetSocketLowMiss;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_TargetSocketLowMissSide;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_TargetSocketLowRight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_AimIKCurveName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_FakeHipsBoneName;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_StaminaConsumptionValues[3];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bAttackHasImpactOnGuardGauge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWeaponActionDB* m_WeaponActionDB;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_FreezeFrameNb[3];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_ResilientFreezeFrameNb[3];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_GuardFreezeFrameNb[3];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EWeaponFamilies m_eActiveWeapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URushAttackDB* m_RushAttackDB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULockDB* m_LockDB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fDangerTimeOut;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_DangerState, meta=(AllowPrivateAccess=true))
    EDangerStates m_eDangerState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDrunkenDB* m_DrunkenDB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDrunkenDB* m_JKDDB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bCanLinkSameAttackTwice;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bPerfectLinkUsesShards;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* m_PerfectLinkGuardCostCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fDisarmRaycastStartHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fDisarmRaycastEndHeight;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_HandledWeaponInfo, meta=(AllowPrivateAccess=true))
    FHandledWeaponInfo m_HandledWeaponInfo;
    
    UAttackComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void UnlockAttack(FName _AttackName, bool _bNewAttack, bool _bNotify);
    
    UFUNCTION(BlueprintCallable)
    void SetWantsComboRestart(bool _bWantsRestart);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetTarget(AActor* _target);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetDesignatedTarget(AActor* _target);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetComboDBs(const TArray<FAttacksCombo>& _combos);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetComboDB(FAttacksCombo _combo, const uint8 _uiIndex, bool _bIsActive);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerCancelAttack(uint8 _uiOrderCancelID, uint8 _uiOrderAttackID, uint8 _uiOrderSwitchIdleID);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_WantedQuadrant();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnRep_HandledWeaponInfo();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_DangerState(EDangerStates _ePreviousDangerState);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_AttacksCombo();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnProgressionUpdated();
    
    UFUNCTION(BlueprintCallable)
    void OnDangerStateChangedCallback(EDangerStates ePreviousDangerState, EDangerStates _eNewDangerState);
    
    UFUNCTION(BlueprintCallable)
    void OnActorEndPlayCallBack(AActor* _actor, TEnumAsByte<EEndPlayReason::Type> _eEndPlayReason);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastOrderAttackTrackingOver(uint8 _uiOrderID);
    
private:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastOnHit(FOnHitDelayed _hit);
    
public:
    UFUNCTION(BlueprintCallable)
    void LockAttack(FName _AttackName);
    
    UFUNCTION(BlueprintCallable)
    void LockAllAttacks();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAttackUnlocked(FName _AttackName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetShardsMax() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetPreviewTarget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetNextAttackTarget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetNextAttackDirToFakeTarget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetDesignatedTarget() const;
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientRollbackShardConsumption(uint8 _uiOrderID);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientCancelAttackWindowClose(uint8 _uiOrderAttackID);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientCancelAttackAcknowledge(uint8 _uiOrderAttackID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EComboAttackValidationStates BPF_ValidateComboQuadrant(EWeaponFamilies _eWeaponFamily, EQuadrantTypes _eQuadrant, EComboAttackValidationStates& _eOutAttacksResult, EComboAttackValidationStates& _eOutAltResult) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EComboAttackValidationStates BPF_ValidateComboAttack(EWeaponFamilies _eWeaponFamily, EQuadrantTypes _eQuadrant, int32 iAttackIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EComboAttackValidationStates BPF_ValidateCombo(EWeaponFamilies _eWeaponFamily) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_ValidateAttackEndQuadrant(EWeaponFamilies _eWeaponFamily, EQuadrantTypes _eQuadrant, int32 _iAttackIndex, EQuadrantTypes _eAttackEndQuadrant) const;
    
    UFUNCTION(BlueprintCallable)
    void BPF_UnLockAllAttacks();
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetWantedQuadrant(EQuadrantTypes _eWantedQuadrant);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetShards(float _fShards);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetMoveDuringAttacks(bool _bMove);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetComboAttack(FName _AttackName, EWeaponFamilies _eWeaponFamily, EQuadrantTypes _eQuadrant, int32 _iIndex, bool _bMirror);
    
    UFUNCTION(BlueprintCallable)
    void BPF_RemoveNewAttack(FName _AttackName);
    
    UFUNCTION(BlueprintCallable)
    void BPF_RemoveInvalidComboAttacks(EWeaponFamilies _eWeaponFamily, EQuadrantTypes _eQuadrant, int32 _iCurrentAttack);
    
    UFUNCTION(BlueprintCallable)
    void BPF_RemoveComboAttack(EWeaponFamilies _eWeaponFamily, EQuadrantTypes _eQuadrant, int32 _iIndex);
    
    UFUNCTION(BlueprintCallable)
    bool BPF_MovesetContainsGuardBreakAttack(EWeaponFamilies _eWeaponFamily);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_IsPlayingAttack();
    
    UFUNCTION(BlueprintCallable)
    bool BPF_IsInPerfectLinkAttack();
    
    UFUNCTION(BlueprintCallable)
    bool BPF_IsInLastAttackOfQuadrantSequence(EQuadrantTypes _eQuadrant);
    
    UFUNCTION(BlueprintCallable)
    bool BPF_IsInAltAttackOfQuadrant(EQuadrantTypes _eQuadrant);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_IsComboValid(EWeaponFamilies _eWeaponFamily);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_IsAttackNew(FName _AttackName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EQuadrantTypes BPF_GetWantedQuadrant() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float BPF_GetShards() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FBaseAttackDataRow BPF_GetItemAttackDataFromName(FName _AttackName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EDangerStates BPF_GetDangerState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    uint8 BPF_GetCurrentHitNumber(bool _bInPrediction) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float BPF_GetCurrentAttackTimeLeft();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float BPF_GetCurrentAttackRatio();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float BPF_GetCurrentAttackPerfectLinkRatio(bool _bOnInterrutptibleReleaseFrame);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float BPF_GetCurrentAttackDuration();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FAttackDataRow BPF_GetCurrentAttackData();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EQuadrantTypes BPF_GetComboEndQuadrant(EWeaponFamilies _eComboWeaponFamily, EQuadrantTypes _eComboStartQuadrant, int32 _iLastAttackIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FAttacksCombo BPF_GetComboDb(EWeaponFamilies _eFamily) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void BPF_GetComboAttack(EWeaponFamilies _eFamily, EQuadrantTypes _eQuadrant, int32 _iAttackIndex, FName& _OutAttack, bool& _bOutIsMirror) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float BPF_GetBaseMaxShards() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EQuadrantTypes BPF_GetAttacksComboEndQuadrant(const FAttacksCombo& _combo, EQuadrantTypes _eComboStartQuadrant, int32 iLastAttackIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 BPF_GetAttacksComboAttackCount(const FAttacksCombo& _comboDB, EQuadrantTypes _eQuadrant) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void BPF_GetAttacksComboAttack(const FAttacksCombo& _combo, EQuadrantTypes _eQuadrant, int32 _iAttackIndex, FName& _OutAttack, bool& _bOutIsMirror) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FAttackDataRow BPF_GetAttackDataFromName(FName _AttackName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 BPF_GetAttackCountInCombo(EWeaponFamilies _eWeaponFamily, EQuadrantTypes _eQuadrant) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void BPF_GetAttackComboInfos(FName _AttackName, EWeaponFamilies _eWeaponFamily, EQuadrantTypes& _eOutQuadrant, int32& _iComboIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EWeaponFamilies BPF_GetActiveWeaponFamily() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_DetectDuplicateAttack(EWeaponFamilies _eWeaponFamily, EQuadrantTypes _eQuadrant, int32 _iCurrentAttackIndex, EQuadrantTypes& _eOutDuplicateQuadrant, int32& _iAttackIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 BPF_CountSchoolAttacksFromFilter(const FSchool& _school, const FAttackFilter& _filter);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 BPF_CountFilteredAttacksFromList(const FAttackFilter& _filter, const TArray<FName>& _attacks);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 BPF_CountComboAttacksFromFilter(const FAttackFilter& _filter, const FAttacksCombo& _combo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 BPF_CountAttacksFromFilter(const FAttackFilter& _filter);
    
    UFUNCTION(BlueprintCallable)
    float BPF_ComputeShardsHitGain(float fDamage, bool bOtherIsGuarding, bool _bIsPerfectLink);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_AreComboAttacksUnlocked(const FComboSave& _combo);
    
    UFUNCTION(BlueprintCallable)
    void BPF_AddShards(float _fShardsToAdd, EShardGainCause _eShardGainCause);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnUnequip();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnSheatheInterrupt();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnDrawInterrupt();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_BeginSheathe(bool _bDestroyWeaponsAfterSheathe);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_BeginDraw(bool _bDiscreteDraw);
    

    // Fix for true pure virtual functions not being implemented
};

