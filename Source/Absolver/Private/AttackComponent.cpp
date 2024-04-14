#include "AttackComponent.h"
#include "Net/UnrealNetwork.h"

UAttackComponent::UAttackComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    this->m_fCurrentShards = 0.00f;
    this->m_bAntiSpam = false;
    this->m_ComboManager = NULL;
    this->m_AnimDBXls = NULL;
    this->m_ItemAttackDB = NULL;
    this->m_fAttackReorientationDurationFromIdle = 0.20f;
    this->m_fAttackReorientationDurationFromAttack = 0.05f;
    this->m_StartUpComboDB = NULL;
    this->m_Combos.AddDefaulted(3);
    this->m_IdleDB = NULL;
    this->m_fTimerBeforeReorientBackToFront = 0.20f;
    this->m_bReorientBackToFrontOnMoveActivated = false;
    this->m_uiShardsMax = 5;
    this->m_uiBonusMaxShards = 0;
    this->m_fShardsRecoveryRate = 0.10f;
    this->m_fShardsHitBoost = 0.02f;
    this->m_fShardsHittedBoost = 0.01f;
    this->m_fShardsGuardCoef = 0.00f;
    this->m_eWantedQuadrant = EQuadrantTypes::None;
    this->m_CancelDB = NULL;
    this->m_fEnterFightDistance = 700.00f;
    this->m_fExitFightDistance = 1000.00f;
    this->m_fLockRange = 3000.00f;
    this->m_fOutOfSightTimer = 3.00f;
    this->m_fDetectabilityRange = 200.00f;
    this->m_TargetSwitchDistanceToAngleScoreRepartitionCurve = NULL;
    this->m_TargetSwitchDistanceScore = NULL;
    this->m_fDesignatedTargetSearchAngle = 90.00f;
    this->m_fDesignatedTargetAttackRange = 500.00f;
    this->m_fDesignatedTargetAttackRangeInExploration = 1000.00f;
    this->m_fJoystickTargetDirectionCoeff = 0.80f;
    this->m_fJoystickTargetDistanceCoeff = 0.20f;
    this->m_fCameraTargetDirectionCoeff = 0.80f;
    this->m_fCameraTargetDistanceCoeff = 0.20f;
    this->m_HitTargetBoneName = TEXT("custom_joint_01");
    this->m_UpperLimbLeftArmBoneName = TEXT("clavicle_l");
    this->m_UpperLimbRightArmBoneName = TEXT("clavicle_r");
    this->m_UpperLimbLeftLegBoneName = TEXT("thigh_l");
    this->m_UpperLimbRightLegBoneName = TEXT("thigh_r");
    this->m_TargetSocketHigh = TEXT("HitTarget_High");
    this->m_TargetSocketHighMiss = TEXT("HitTarget_High_Miss");
    this->m_TargetSocketHighMissSide = TEXT("HitTarget_High_Miss_Side");
    this->m_TargetSocketMid1 = TEXT("HitTarget_Mid_1");
    this->m_TargetSocketMidMiss = TEXT("HitTarget_Mid_Miss");
    this->m_TargetSocketMidMissSide = TEXT("HitTarget_Mid_Miss_Side");
    this->m_TargetSocketMid2 = TEXT("HitTarget_Mid_2");
    this->m_TargetSocketLowLeft = TEXT("HitTarget_Low_L");
    this->m_TargetSocketLowMiss = TEXT("HitTarget_Low_Miss");
    this->m_TargetSocketLowMissSide = TEXT("HitTarget_Low_Miss_Side");
    this->m_TargetSocketLowRight = TEXT("HitTarget_Low_R");
    this->m_AimIKCurveName = TEXT("AimIKAlphaCurve");
    this->m_FakeHipsBoneName = TEXT("custom_joint_02");
    this->m_StaminaConsumptionValues[0] = 0.00f;
    this->m_StaminaConsumptionValues[1] = 0.00f;
    this->m_StaminaConsumptionValues[2] = 0.00f;
    this->m_bAttackHasImpactOnGuardGauge = false;
    this->m_WeaponActionDB = NULL;
    this->m_FreezeFrameNb[0] = 0.00f;
    this->m_FreezeFrameNb[1] = 0.00f;
    this->m_FreezeFrameNb[2] = 0.00f;
    this->m_ResilientFreezeFrameNb[0] = 0.00f;
    this->m_ResilientFreezeFrameNb[1] = 0.00f;
    this->m_ResilientFreezeFrameNb[2] = 0.00f;
    this->m_GuardFreezeFrameNb[0] = 0.00f;
    this->m_GuardFreezeFrameNb[1] = 0.00f;
    this->m_GuardFreezeFrameNb[2] = 0.00f;
    this->m_eActiveWeapon = EWeaponFamilies::BareHands;
    this->m_RushAttackDB = NULL;
    this->m_LockDB = NULL;
    this->m_fDangerTimeOut = 3.00f;
    this->m_eDangerState = EDangerStates::Safe;
    this->m_DrunkenDB = NULL;
    this->m_JKDDB = NULL;
    this->m_bCanLinkSameAttackTwice = false;
    this->m_bPerfectLinkUsesShards = false;
    this->m_PerfectLinkGuardCostCurve = NULL;
    this->m_fDisarmRaycastStartHeight = 150.00f;
    this->m_fDisarmRaycastEndHeight = -400.00f;
}

void UAttackComponent::UnlockAttack(FName _AttackName, bool _bNewAttack, bool _bNotify) {
}

void UAttackComponent::SetWantsComboRestart(bool _bWantsRestart) {
}

void UAttackComponent::ServerSetTarget_Implementation(AActor* _target) {
}
bool UAttackComponent::ServerSetTarget_Validate(AActor* _target) {
    return true;
}

void UAttackComponent::ServerSetDesignatedTarget_Implementation(AActor* _target) {
}
bool UAttackComponent::ServerSetDesignatedTarget_Validate(AActor* _target) {
    return true;
}

void UAttackComponent::ServerSetComboDBs_Implementation(const TArray<FAttacksCombo>& _combos) {
}
bool UAttackComponent::ServerSetComboDBs_Validate(const TArray<FAttacksCombo>& _combos) {
    return true;
}

void UAttackComponent::ServerSetComboDB_Implementation(FAttacksCombo _combo, const uint8 _uiIndex, bool _bIsActive) {
}
bool UAttackComponent::ServerSetComboDB_Validate(FAttacksCombo _combo, const uint8 _uiIndex, bool _bIsActive) {
    return true;
}

void UAttackComponent::ServerCancelAttack_Implementation(uint8 _uiOrderCancelID, uint8 _uiOrderAttackID, uint8 _uiOrderSwitchIdleID) {
}
bool UAttackComponent::ServerCancelAttack_Validate(uint8 _uiOrderCancelID, uint8 _uiOrderAttackID, uint8 _uiOrderSwitchIdleID) {
    return true;
}

void UAttackComponent::OnRep_WantedQuadrant() {
}

void UAttackComponent::OnRep_HandledWeaponInfo() {
}

void UAttackComponent::OnRep_DangerState(EDangerStates _ePreviousDangerState) {
}

void UAttackComponent::OnRep_AttacksCombo() {
}

void UAttackComponent::OnProgressionUpdated() {
}

void UAttackComponent::OnDangerStateChangedCallback(EDangerStates ePreviousDangerState, EDangerStates _eNewDangerState) {
}

void UAttackComponent::OnActorEndPlayCallBack(AActor* _actor, TEnumAsByte<EEndPlayReason::Type> _eEndPlayReason) {
}

void UAttackComponent::MulticastOrderAttackTrackingOver_Implementation(uint8 _uiOrderID) {
}

void UAttackComponent::MulticastOnHit_Implementation(FOnHitDelayed _hit) {
}

void UAttackComponent::LockAttack(FName _AttackName) {
}

void UAttackComponent::LockAllAttacks() {
}

bool UAttackComponent::IsAttackUnlocked(FName _AttackName) const {
    return false;
}

float UAttackComponent::GetShardsMax() const {
    return 0.0f;
}

AActor* UAttackComponent::GetPreviewTarget() const {
    return NULL;
}

AActor* UAttackComponent::GetNextAttackTarget() const {
    return NULL;
}

FVector UAttackComponent::GetNextAttackDirToFakeTarget() const {
    return FVector{};
}

AActor* UAttackComponent::GetDesignatedTarget() const {
    return NULL;
}

void UAttackComponent::ClientRollbackShardConsumption_Implementation(uint8 _uiOrderID) {
}

void UAttackComponent::ClientCancelAttackWindowClose_Implementation(uint8 _uiOrderAttackID) {
}

void UAttackComponent::ClientCancelAttackAcknowledge_Implementation(uint8 _uiOrderAttackID) {
}

EComboAttackValidationStates UAttackComponent::BPF_ValidateComboQuadrant(EWeaponFamilies _eWeaponFamily, EQuadrantTypes _eQuadrant, EComboAttackValidationStates& _eOutAttacksResult, EComboAttackValidationStates& _eOutAltResult) const {
    return EComboAttackValidationStates::Success;
}

EComboAttackValidationStates UAttackComponent::BPF_ValidateComboAttack(EWeaponFamilies _eWeaponFamily, EQuadrantTypes _eQuadrant, int32 iAttackIndex) const {
    return EComboAttackValidationStates::Success;
}

EComboAttackValidationStates UAttackComponent::BPF_ValidateCombo(EWeaponFamilies _eWeaponFamily) const {
    return EComboAttackValidationStates::Success;
}

bool UAttackComponent::BPF_ValidateAttackEndQuadrant(EWeaponFamilies _eWeaponFamily, EQuadrantTypes _eQuadrant, int32 _iAttackIndex, EQuadrantTypes _eAttackEndQuadrant) const {
    return false;
}

void UAttackComponent::BPF_UnLockAllAttacks() {
}

void UAttackComponent::BPF_SetWantedQuadrant(EQuadrantTypes _eWantedQuadrant) {
}

void UAttackComponent::BPF_SetShards(float _fShards) {
}

void UAttackComponent::BPF_SetMoveDuringAttacks(bool _bMove) {
}

void UAttackComponent::BPF_SetComboAttack(FName _AttackName, EWeaponFamilies _eWeaponFamily, EQuadrantTypes _eQuadrant, int32 _iIndex, bool _bMirror) {
}

void UAttackComponent::BPF_RemoveNewAttack(FName _AttackName) {
}

void UAttackComponent::BPF_RemoveInvalidComboAttacks(EWeaponFamilies _eWeaponFamily, EQuadrantTypes _eQuadrant, int32 _iCurrentAttack) {
}

void UAttackComponent::BPF_RemoveComboAttack(EWeaponFamilies _eWeaponFamily, EQuadrantTypes _eQuadrant, int32 _iIndex) {
}

bool UAttackComponent::BPF_MovesetContainsGuardBreakAttack(EWeaponFamilies _eWeaponFamily) {
    return false;
}

bool UAttackComponent::BPF_IsPlayingAttack() {
    return false;
}

bool UAttackComponent::BPF_IsInPerfectLinkAttack() {
    return false;
}

bool UAttackComponent::BPF_IsInLastAttackOfQuadrantSequence(EQuadrantTypes _eQuadrant) {
    return false;
}

bool UAttackComponent::BPF_IsInAltAttackOfQuadrant(EQuadrantTypes _eQuadrant) {
    return false;
}

bool UAttackComponent::BPF_IsComboValid(EWeaponFamilies _eWeaponFamily) {
    return false;
}

bool UAttackComponent::BPF_IsAttackNew(FName _AttackName) const {
    return false;
}

EQuadrantTypes UAttackComponent::BPF_GetWantedQuadrant() const {
    return EQuadrantTypes::FrontLeft;
}

float UAttackComponent::BPF_GetShards() const {
    return 0.0f;
}

FBaseAttackDataRow UAttackComponent::BPF_GetItemAttackDataFromName(FName _AttackName) {
    return FBaseAttackDataRow{};
}

EDangerStates UAttackComponent::BPF_GetDangerState() const {
    return EDangerStates::Safe;
}

uint8 UAttackComponent::BPF_GetCurrentHitNumber(bool _bInPrediction) const {
    return 0;
}

float UAttackComponent::BPF_GetCurrentAttackTimeLeft() {
    return 0.0f;
}

float UAttackComponent::BPF_GetCurrentAttackRatio() {
    return 0.0f;
}

float UAttackComponent::BPF_GetCurrentAttackPerfectLinkRatio(bool _bOnInterrutptibleReleaseFrame) {
    return 0.0f;
}

float UAttackComponent::BPF_GetCurrentAttackDuration() {
    return 0.0f;
}

FAttackDataRow UAttackComponent::BPF_GetCurrentAttackData() {
    return FAttackDataRow{};
}

EQuadrantTypes UAttackComponent::BPF_GetComboEndQuadrant(EWeaponFamilies _eComboWeaponFamily, EQuadrantTypes _eComboStartQuadrant, int32 _iLastAttackIndex) const {
    return EQuadrantTypes::FrontLeft;
}

FAttacksCombo UAttackComponent::BPF_GetComboDb(EWeaponFamilies _eFamily) const {
    return FAttacksCombo{};
}

void UAttackComponent::BPF_GetComboAttack(EWeaponFamilies _eFamily, EQuadrantTypes _eQuadrant, int32 _iAttackIndex, FName& _OutAttack, bool& _bOutIsMirror) const {
}

float UAttackComponent::BPF_GetBaseMaxShards() const {
    return 0.0f;
}

EQuadrantTypes UAttackComponent::BPF_GetAttacksComboEndQuadrant(const FAttacksCombo& _combo, EQuadrantTypes _eComboStartQuadrant, int32 iLastAttackIndex) const {
    return EQuadrantTypes::FrontLeft;
}

int32 UAttackComponent::BPF_GetAttacksComboAttackCount(const FAttacksCombo& _comboDB, EQuadrantTypes _eQuadrant) const {
    return 0;
}

void UAttackComponent::BPF_GetAttacksComboAttack(const FAttacksCombo& _combo, EQuadrantTypes _eQuadrant, int32 _iAttackIndex, FName& _OutAttack, bool& _bOutIsMirror) const {
}

FAttackDataRow UAttackComponent::BPF_GetAttackDataFromName(FName _AttackName) const {
    return FAttackDataRow{};
}

int32 UAttackComponent::BPF_GetAttackCountInCombo(EWeaponFamilies _eWeaponFamily, EQuadrantTypes _eQuadrant) const {
    return 0;
}

void UAttackComponent::BPF_GetAttackComboInfos(FName _AttackName, EWeaponFamilies _eWeaponFamily, EQuadrantTypes& _eOutQuadrant, int32& _iComboIndex) {
}

EWeaponFamilies UAttackComponent::BPF_GetActiveWeaponFamily() const {
    return EWeaponFamilies::BareHands;
}

bool UAttackComponent::BPF_DetectDuplicateAttack(EWeaponFamilies _eWeaponFamily, EQuadrantTypes _eQuadrant, int32 _iCurrentAttackIndex, EQuadrantTypes& _eOutDuplicateQuadrant, int32& _iAttackIndex) const {
    return false;
}

int32 UAttackComponent::BPF_CountSchoolAttacksFromFilter(const FSchool& _school, const FAttackFilter& _filter) {
    return 0;
}

int32 UAttackComponent::BPF_CountFilteredAttacksFromList(const FAttackFilter& _filter, const TArray<FName>& _attacks) {
    return 0;
}

int32 UAttackComponent::BPF_CountComboAttacksFromFilter(const FAttackFilter& _filter, const FAttacksCombo& _combo) {
    return 0;
}

int32 UAttackComponent::BPF_CountAttacksFromFilter(const FAttackFilter& _filter) {
    return 0;
}

float UAttackComponent::BPF_ComputeShardsHitGain(float fDamage, bool bOtherIsGuarding, bool _bIsPerfectLink) {
    return 0.0f;
}

bool UAttackComponent::BPF_AreComboAttacksUnlocked(const FComboSave& _combo) {
    return false;
}

void UAttackComponent::BPF_AddShards(float _fShardsToAdd, EShardGainCause _eShardGainCause) {
}






void UAttackComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UAttackComponent, m_Combos);
    DOREPLIFETIME(UAttackComponent, m_eWantedQuadrant);
    DOREPLIFETIME(UAttackComponent, m_Target);
    DOREPLIFETIME(UAttackComponent, m_DesignatedTarget);
    DOREPLIFETIME(UAttackComponent, m_eDangerState);
    DOREPLIFETIME(UAttackComponent, m_HandledWeaponInfo);
}


