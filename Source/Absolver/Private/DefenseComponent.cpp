#include "DefenseComponent.h"
#include "Net/UnrealNetwork.h"

UDefenseComponent::UDefenseComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    this->m_ParryDB = NULL;
    this->m_AvoidDB = NULL;
    this->m_fCurrentGuard = 0.00f;
    this->m_fBonusMaxStamina = 0.00f;
    this->m_GuardDB = NULL;
    this->m_fMaxGuard = 100.00f;
    this->m_fGuardBrokenGaugeCoolDownBeforeRecovery = 0.50f;
    this->m_fGuardRecoveryRate = 24.00f;
    this->m_fGuardBrokenRecoveryRate = 48.00f;
    this->m_GuardGaugeRecoveryRateOverWeightRatioCurve = NULL;
    this->m_fGuardRecoveryRateCoeffWhenGuarding = 0.50f;
    this->m_fGuardBreakDuration = 2.00f;
    this->m_bCanDoActionIfGuardGaugeEmpty = true;
    this->m_bGuardBlocksImpactsFromBack = false;
    this->m_bIsGuarding = false;
    this->m_fRangeOfDodgeForRefill = 0.00f;
    this->m_fDodgeRefillValue = 1.00f;
    this->m_fDodgeGuardGaugeRefillValue = 0.00f;
    this->m_fBareHandsGuardCoeff = 1.00f;
    this->m_fBareHandsGuardSpecialCoeff = 0.00f;
    this->m_AbsorbDB = NULL;
    this->m_fGuardGaugeRecoveryCooldown = 1.00f;
    this->m_iResilience = 0;
    this->m_iResilienceAttackBonus = 0;
}

void UDefenseComponent::ServerSetGuardValue_Implementation(float _fGuard) {
}
bool UDefenseComponent::ServerSetGuardValue_Validate(float _fGuard) {
    return true;
}

void UDefenseComponent::ServerRepSetGuardGaugeTarget_Implementation(float _fPercentageTarget, int64 _iTimeToTarget) {
}
bool UDefenseComponent::ServerRepSetGuardGaugeTarget_Validate(float _fPercentageTarget, int64 _iTimeToTarget) {
    return true;
}

void UDefenseComponent::ServerRepNotifyParrySuccessful_Implementation(int64 _iTimeToLaunch, AActor* _parryingActor, FName _attack, uint8 _uiParryOriginOrderId, UParryPropertyDB* _ParryPropertyDB) {
}
bool UDefenseComponent::ServerRepNotifyParrySuccessful_Validate(int64 _iTimeToLaunch, AActor* _parryingActor, FName _attack, uint8 _uiParryOriginOrderId, UParryPropertyDB* _ParryPropertyDB) {
    return true;
}

void UDefenseComponent::OnStatsChanged(EBonusType _eBonusType) {
}

void UDefenseComponent::OnRep_GuardTargettedStruct() {
}

void UDefenseComponent::OnEffectAddedOrRemovedCallback(bool _bAdded, UEffectData* _effectData) {
}

void UDefenseComponent::MultiCastSetGuardGaugeTarget_Implementation(float _fPercentageTarget, int64 _iTimeToTarget) {
}

void UDefenseComponent::MulticastNotifyAvoidSuccessful_Implementation(int64 _iTimeToLaunch, AActor* _avoidedActor, EAvoidType _eAvoidType, uint8 _uiAvoidOriginOrderID, FName _AttackName, FName _executingAttackName, UAvoidPropertyDB* _AvoidPropertyDB) {
}

void UDefenseComponent::MulticastNotifyAbsorbSuccessful_Implementation(int64 _iTimeToLaunch, FVector _vImpactPosition, FVector _vImpactDir, float _fDamage, UAbsorbPropertyDB* _AbsorbPropertyDB, AFightingCharacter* _attacker, FName _AttackName, uint8 _uiAttackHitNumber, float _fSpecialAttackDamage, uint8 _uiAbsorbOriginOrderId, FName _absorbAttackName) {
}

bool UDefenseComponent::IsParryWindowOpen(bool _bPrediction) const {
    return false;
}

bool UDefenseComponent::IsParryActive(bool _bPrediction) const {
    return false;
}

bool UDefenseComponent::IsGuarding() const {
    return false;
}

bool UDefenseComponent::IsAvoided() const {
    return false;
}

bool UDefenseComponent::IsAbsorbWindowOpened(bool _bInPrediction) const {
    return false;
}

void UDefenseComponent::ClientNotifyParrySuccessful_Implementation(int64 _iTimeToLaunch, AFightingCharacter* _attacker, FName _attack, uint8 _uiParryOriginOrderId, UParryPropertyDB* _ParryPropertyDB) {
}
bool UDefenseComponent::ClientNotifyParrySuccessful_Validate(int64 _iTimeToLaunch, AFightingCharacter* _attacker, FName _attack, uint8 _uiParryOriginOrderId, UParryPropertyDB* _ParryPropertyDB) {
    return true;
}

void UDefenseComponent::ClientNotifyIsTargettedByAttack_Implementation(AFightingCharacter* _attackInstigator, FName _attack) {
}
bool UDefenseComponent::ClientNotifyIsTargettedByAttack_Validate(AFightingCharacter* _attackInstigator, FName _attack) {
    return true;
}

void UDefenseComponent::BPF_SetIsGuarding(bool _bGuarding, bool _bInPrediction) {
}

void UDefenseComponent::BPF_RestoreIncreaseGuardGauge() {
}

bool UDefenseComponent::BPF_IsGuardBroken() const {
    return false;
}

void UDefenseComponent::BPF_IncreaseGuardGauge(float _fAmount) {
}

ESpecialAbilities UDefenseComponent::BPF_GetSpecialAbility() const {
    return ESpecialAbilities::Parry;
}

int32 UDefenseComponent::BPF_GetResilienceBonusFromAttack() {
    return 0;
}

int32 UDefenseComponent::BPF_GetResilience() {
    return 0;
}

float UDefenseComponent::BPF_GetMaxGuardGauge() const {
    return 0.0f;
}

float UDefenseComponent::BPF_GetGuardRatio() {
    return 0.0f;
}

FText UDefenseComponent::BPF_GetFightingStyleName(int32 _iStyle) {
    return FText::GetEmpty();
}

UFightingStyleDB* UDefenseComponent::BPF_GetFightingStyleDB(int32 _iFightingStyle) {
    return NULL;
}

ESpecialAbilities UDefenseComponent::BPF_GetCombatStyleSpecialAbility(uint8 _uiCombatStyleNb) const {
    return ESpecialAbilities::Parry;
}

float UDefenseComponent::BPF_GetBaseMaxGuard() const {
    return 0.0f;
}

void UDefenseComponent::BPF_DecreaseGuardGaugeOverTime(float _fAmount, float _fDelay) {
}

void UDefenseComponent::BPF_DecreaseGuardGauge(float _fAmount) {
}

uint8 UDefenseComponent::AbsorbStacksLeft(bool _bInPrediction) const {
    return 0;
}

void UDefenseComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UDefenseComponent, m_fCurrentGuard);
    DOREPLIFETIME(UDefenseComponent, m_GuardTargettedStruct);
    DOREPLIFETIME(UDefenseComponent, m_bIsGuarding);
    DOREPLIFETIME(UDefenseComponent, m_iResilience);
}


