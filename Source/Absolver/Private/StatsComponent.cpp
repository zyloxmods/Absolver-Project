#include "StatsComponent.h"
#include "Net/UnrealNetwork.h"

UStatsComponent::UStatsComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    this->m_StatsDB = NULL;
    this->m_eWeightCategory = EWeightCategory::None;
    this->m_fAIPendingAttackXCancelDelay = 10.00f;
    this->m_CharacterProgressionDB = NULL;
    this->m_GameModeProgressionDB = NULL;
    this->m_WeaponDataPerMode[0] = NULL;
    this->m_WeaponDataPerMode[1] = NULL;
    this->m_WeaponDataPerMode[2] = NULL;
}

void UStatsComponent::WeaponFamilyChangedCallback(const EWeaponFamilies _eNewWeaponFamily, const EStatsAppliedMode _eStatsAppliedMode) {
}

void UStatsComponent::ServerSetSchoolLevel_Implementation(int32 _iNewLevel) {
}
bool UStatsComponent::ServerSetSchoolLevel_Validate(int32 _iNewLevel) {
    return true;
}

void UStatsComponent::ServerSetReplicatedSchoolMemberInfos_Implementation(FSchoolMemberReplicatedInfos _SchoolMemberInfos) {
}
bool UStatsComponent::ServerSetReplicatedSchoolMemberInfos_Validate(FSchoolMemberReplicatedInfos _SchoolMemberInfos) {
    return true;
}

void UStatsComponent::ServerSetReplicatedGlobalStats_Implementation(FGlobalStats _stats) {
}
bool UStatsComponent::ServerSetReplicatedGlobalStats_Validate(FGlobalStats _stats) {
    return true;
}

void UStatsComponent::OutfitChangedRepCallback() {
}

void UStatsComponent::OnStatsChangedCallback(EStatsAppliedMode _eEtatsAppliedMode) {
}

void UStatsComponent::OnRep_ReplicatedGlobalStats() {
}

void UStatsComponent::OnPendingAttackXPOpponentEndPlay(AActor* _actor, TEnumAsByte<EEndPlayReason::Type> _endPlayReason) {
}

void UStatsComponent::OnPendingAttackXPOpponentAITimeOut(AFightingCharacter* _ai) {
}

void UStatsComponent::OnEffectAddedOrRemovedCallback(bool _bAdded, UEffectData* _effectData) {
}

void UStatsComponent::KillCallback(AActor* _victim, bool _bIsOnlyAssist, bool _bKillingBlow, AActor* _instigator) {
}

EAttributeScales UStatsComponent::GetEquipmentAttackBonusGrade(EEquipmentSlot _eEquipmentSlot, EStatsAppliedMode _eStatsAppliedMode, uint8 _uiCombatStyle) const {
    return EAttributeScales::S;
}

void UStatsComponent::BPF_UnlockProgressionRewards(int32 _iPrevLevel, int32 _iNewLevel, TArray<ECharacterProgressionRewardTypes>& _rewards, bool _bNotify, ECharacterProgressionRewardConditions _eLevelType) {
}

bool UStatsComponent::BPF_ShouldNotifySeasonStart() const {
    return false;
}

bool UStatsComponent::BPF_ShouldNotifyNewSeason() const {
    return false;
}

bool UStatsComponent::BPF_ShouldDisplaySeasonSummary() const {
    return false;
}

bool UStatsComponent::BPF_ShouldDisplaySeasonStartSummary() const {
    return false;
}

void UStatsComponent::BPF_SetPreviewSchoolXP(int32 _iXP, EStatsAppliedMode _eMode, bool _bNotify) {
}

void UStatsComponent::BPF_SetFragments(EStatsAppliedMode _eStatsAppliedMode, int32 _iValue) {
}

void UStatsComponent::BPF_ResetStatPoints() {
}

void UStatsComponent::BPF_ResetPrestigePointPreviewValue(bool _bBroadcast) {
}

void UStatsComponent::BPF_ResetFragmentPreviewValue(bool _bBroadcast) {
}

void UStatsComponent::BPF_ResetCharacterStats() {
}

void UStatsComponent::BPF_RemoveCharacterDistributionPointsOnPreview(int32 _iNbPoints, EDistributionStatType _eStatType, EStatsAppliedMode _eStatsAppliedMode) {
}

bool UStatsComponent::BPF_IsWeaponFamilyUnlocked(EWeaponFamilies _eWeaponFamily, const EStatsAppliedMode _eFromStatsAppliedMode) const {
    return false;
}

bool UStatsComponent::BPF_IsSchoolRewardEquipped(ECharacterProgressionRewardTypes _eReward) const {
    return false;
}

bool UStatsComponent::BPF_IsSchoolDisciple(EStatsAppliedMode _eMode) const {
    return false;
}

bool UStatsComponent::BPF_IsProgressionRewardUnlocked(const ECharacterProgressionRewardTypes _eReward, const EStatsAppliedMode _eFromStatsAppliedMode) const {
    return false;
}

bool UStatsComponent::BPF_IsMentor() const {
    return false;
}

bool UStatsComponent::BPF_IsInSchool() const {
    return false;
}

bool UStatsComponent::BPF_IsFightingStyleUnlocked(const int32 _iFightingStyleIndex, const EStatsAppliedMode _eFromStatsAppliedMode, bool _bDetectMentoringUnlock) const {
    return false;
}

bool UStatsComponent::BPF_IsComboSlotUnlocked(const EWeaponFamilies _eWeaponFamily, const FName& _comboName, const EStatsAppliedMode _eFromStatsAppliedMode) const {
    return false;
}

bool UStatsComponent::BPF_IsAttackSlotUnlocked(const EQuadrantTypes _quadrant, int32 _cardIndex, const EStatsAppliedMode _eFromStatsAppliedMode) const {
    return false;
}

bool UStatsComponent::BPF_HasPreviousSchoolVersion() {
    return false;
}

bool UStatsComponent::BPF_HasPendingSchoolUpdate() const {
    return false;
}

float UStatsComponent::BPF_GetWeightRatio(EStatsAppliedMode _eStatsAppliedMode, EStatsWeaponComputingMethod _eStatsComputingMethod, bool _bWithItemEffects) const {
    return 0.0f;
}

EWeightCategory UStatsComponent::BPF_GetWeightCategory() const {
    return EWeightCategory::Light;
}

int32 UStatsComponent::BPF_GetVisibleCharacterLevel(EStatsAppliedMode _eStatsAppliedMode) const {
    return 0;
}

int32 UStatsComponent::BPF_GetTotalPendingAttackXP(AFightingCharacter* _attacker) {
    return 0;
}

int32 UStatsComponent::BPF_GetSparePrestigePoints(EStatsAppliedMode _eStatsAppliedMode) const {
    return 0;
}

int32 UStatsComponent::BPF_GetSparePoints(EStatsAppliedMode _eStatsAppliedMode) const {
    return 0;
}

float UStatsComponent::BPF_GetShardRefillBonusForFaithLevel(EShardGainCause _eShardChangeCause, int32 _iFaithLevel) const {
    return 0.0f;
}

float UStatsComponent::BPF_GetShardRefillBonus(EShardGainCause _eShardGainCause, EStatsAppliedMode _eMode) const {
    return 0.0f;
}

int32 UStatsComponent::BPF_GetSchoolXPForReward(bool _bVictory, ECharacterProgressionRewardTypes _eReward) {
    return 0;
}

int32 UStatsComponent::BPF_GetSchoolXP(EStatsAppliedMode _eMode) const {
    return 0;
}

FPlayerSeasonInfos UStatsComponent::BPF_GetSchoolSeasonInfos() const {
    return FPlayerSeasonInfos{};
}

FSchoolMemberReplicatedInfos UStatsComponent::BPF_GetSchoolMemberReplicatedInfos() const {
    return FSchoolMemberReplicatedInfos{};
}

FSchoolMember UStatsComponent::BPF_GetSchoolMemberInfos() const {
    return FSchoolMember{};
}

void UStatsComponent::BPF_GetSchoolLevelProgress(int32 _iXP, int32& _iCurrentLevelXp, int32& _iNextLevelXp) {
}

uint8 UStatsComponent::BPF_GetSchoolLevel(EStatsAppliedMode _eMode) const {
    return 0;
}

FInventoryItem UStatsComponent::BPF_GetSchoolItem(ESchoolItemType _eRewardType, int32& out_iItemIndex) const {
    return FInventoryItem{};
}

FSchool UStatsComponent::BPF_GetSchool() const {
    return FSchool{};
}

FText UStatsComponent::BPF_GetRewardNotificationText(ECharacterProgressionRewardTypes _eReward, UCharacterProgressionUnlockDB* _unlock) {
    return FText::GetEmpty();
}

TSoftObjectPtr<UTexture2D> UStatsComponent::BPF_GetRewardNotificationIcon(ECharacterProgressionRewardTypes _eReward, UCharacterProgressionUnlockDB* _unlock) {
    return NULL;
}

int32 UStatsComponent::BPF_GetResourcesNeededForUnlock(int32 _iDepth) {
    return 0;
}

float UStatsComponent::BPF_GetResourcesLvlPercentage() {
    return 0.0f;
}

int32 UStatsComponent::BPF_GetResourcesLevel(EStatsAppliedMode _eStatsAppliedMode) {
    return 0;
}

int32 UStatsComponent::BPF_GetRequiredXPForLevel_Implementation(const int32 _iNewWantedLevel) const {
    return 0;
}

ECharacterProgressionRewardTypes UStatsComponent::BPF_GetProgressionRewardFromSlot(EWeaponFamilies _eFamiliy, int32 _iSlotIndex) const {
    return ECharacterProgressionRewardTypes::CombatDeckMenu;
}

FSchool UStatsComponent::BPF_GetPrevSchoolVersion() {
    return FSchool{};
}

int32 UStatsComponent::BPF_GetPrestigeLevel(EStatsAppliedMode _eStatsAppliedMode) const {
    return 0;
}

int32 UStatsComponent::BPF_GetPrestigeGrade(EStatsAppliedMode _eStatsAppliedMode) const {
    return 0;
}

FSchool UStatsComponent::BPF_GetPendingSchoolUpdate() const {
    return FSchool{};
}

int32 UStatsComponent::BPF_GetPendingAttackXP(AFightingCharacter* _attacker, const FName& _AttackName, EPendingttackXPType _eXPType) const {
    return 0;
}

void UStatsComponent::BPF_GetPendingAttacks(AFightingCharacter* _attacker, TArray<FName>& _outAttacks) {
}

void UStatsComponent::BPF_GetLastSchoolStats(FSchoolStats& _stats) const {
}

void UStatsComponent::BPF_GetLastMentoringSeasonInfos(FPlayerSeasonInfos& _seasonInfos) const {
}

int32 UStatsComponent::BPF_GetGlobalXP(EStatsAppliedMode _eStatsAppliedMode) const {
    return 0;
}

int32 UStatsComponent::BPF_GetGlobalLevel(EStatsAppliedMode _eStatsAppliedMode) const {
    return 0;
}

int32 UStatsComponent::BPF_GetGlobalCharacterDistributionPoint(EDistributionStatType _eStatType, EStatsAppliedMode _eStatsAppliedMode) const {
    return 0;
}

float UStatsComponent::BPF_GetGearAttackBonusForAttack(const FAttackDataRow& _AttackData, const FGearDataRow& _gearDataRow, int32 _iCombatStyle, bool _bTotalAttackDamage, int32 _iHitNb) const {
    return 0.0f;
}

int32 UStatsComponent::BPF_GetGameModeXP(EStatsAppliedMode _eStatsAppliedMode) const {
    return 0;
}

UGameModeProgressionDB* UStatsComponent::BPF_GetGameModeProgressionDB() {
    return NULL;
}

int32 UStatsComponent::BPF_GetGameModeLevel(EStatsAppliedMode _eStatsAppliedMode) const {
    return 0;
}

int32 UStatsComponent::BPF_GetGameModeCurrentLevelXP(EStatsAppliedMode _eStatsAppliedMode) const {
    return 0;
}

int32 UStatsComponent::BPF_GetFragments(EStatsAppliedMode _eStatsAppliedMode) {
    return 0;
}

int32 UStatsComponent::BPF_GetFightingUnlockIndex(int32 _iFightingStyleID) {
    return 0;
}

int32 UStatsComponent::BPF_GetFightingStylePointDistributionBonus(const EDistributionStatType _eStatType, EStatsAppliedMode _eStatsAppliedMode) const {
    return 0;
}

int32 UStatsComponent::BPF_GetFightingStyleID(const EStatsAppliedMode _eStatsAppliedMode) {
    return 0;
}

int32 UStatsComponent::BPF_GetFightingStyleByUnlockIndex(const int32 _iFSUnlockIndex) const {
    return 0;
}

UFightingStyleDB* UStatsComponent::BPF_GetFightingStyle(const EStatsAppliedMode _eStatsAppliedMode) {
    return NULL;
}

float UStatsComponent::BPF_GetEquipmentStat(EEquipmentStatType _eEquipmentStatType, EEquipmentSlot _eEquipmentSlot, EStatsAppliedMode _eStatsAppliedMode) const {
    return 0.0f;
}

float UStatsComponent::BPF_GetEquipmentAttackBonusForAttack(const FAttackDataRow& _AttackData, EEquipmentSlot _eEquipmentSlot, EStatsAppliedMode _eStatsAppliedMode, int32 _iCombatStyle, bool _bTotalAttackDamage, int32 _iHitNb) const {
    return 0.0f;
}

float UStatsComponent::BPF_GetCurrentHitDamage(const FAttackDataRow& _AttackData, bool _bInPrediction, bool _bWithItemEffects) const {
    return 0.0f;
}

UCharacterProgressionDB* UStatsComponent::BPF_GetCharacterProgressionDB() {
    return NULL;
}

int32 UStatsComponent::BPF_GetCharacterLevel(EStatsAppliedMode _eStatsAppliedMode) const {
    return 0;
}

int32 UStatsComponent::BPF_GetCharacterDistributionPoint(EDistributionStatType _eStatType, EStatsAppliedMode _eStatsAppliedMode) const {
    return 0;
}

float UStatsComponent::BPF_GetBonus(const EBonusType _eBonusType, EStatsAppliedMode _eStatsAppliedMode) const {
    return 0.0f;
}

void UStatsComponent::BPF_GetAttackXP(const FName& _attack, int32& _iOutXP, float& _fProgress) const {
}

float UStatsComponent::BPF_GetAttackSpecialDamageRatio(EStatsAppliedMode _eMode, EStatsWeaponComputingMethod _eStatsComputingMethod) const {
    return 0.0f;
}

float UStatsComponent::BPF_GetAttackNormalDamageRatio(EStatsAppliedMode _eMode, float _fSpecialRatio) const {
    return 0.0f;
}

EAttackLearningState UStatsComponent::BPF_GetAttackLearningState(const FName& _AttackName) {
    return EAttackLearningState::Unknown;
}

float UStatsComponent::BPF_GetAttackDataDamage(const FAttackDataRow& _AttackData, bool _bIsMirror, EStatsAppliedMode _eStatsAppliedMode, EStatsWeaponComputingMethod _eStatsComputingMethod) const {
    return 0.0f;
}

float UStatsComponent::BPF_GetAllEquipmentStat(EEquipmentStatType _eEquipmentStatType, EStatsAppliedMode _eStatsAppliedMode, bool _bCountWeapon) const {
    return 0.0f;
}

void UStatsComponent::BPF_GenerateDeckDetailsForComboSave(FCombatDeckDetails& _deckDetails, EWeaponFamilies _eWeaponFamily, const FComboSave& _comboSave, EStatsAppliedMode _eStatsAppliedMode, EStatsWeaponComputingMethod _eComputingMethod) {
}

void UStatsComponent::BPF_GenerateDeckDetailsForCombo(FCombatDeckDetails& _deckDetails, EWeaponFamilies _eWeaponFamily, const FAttacksCombo& _combo, EStatsAppliedMode _eStatsAppliedMode, EStatsWeaponComputingMethod _eComputingMethod) {
}

void UStatsComponent::BPF_GenerateDeckDetailsForCombatDeck(FCombatDeckDetails& _deckDetails, EWeaponFamilies _eWeaponFamily, EStatsAppliedMode _eStatsAppliedMode, EStatsWeaponComputingMethod _eComputingMethod, int32 _iSlotIndex) {
}

void UStatsComponent::BPF_GenerateDeckDetailsForAttack(FCombatDeckDetails& _deckDetails, FName _attack, bool _bIsMirror, EStatsAppliedMode _eStatsAppliedMode, EStatsWeaponComputingMethod _eComputingMethod) {
}

void UStatsComponent::BPF_GainPrestigePoints(int32 _iCount) {
}

void UStatsComponent::BPF_GainFragments(int32 _iCount) {
}

void UStatsComponent::BPF_FragmentOrPrestigePreviewValueChanged() {
}

bool UStatsComponent::BPF_EquipSchoolReward(ECharacterProgressionRewardTypes _eReward) {
    return false;
}

int32 UStatsComponent::BPF_EquipAllSchoolRewards() {
    return 0;
}

void UStatsComponent::BPF_CopyStatAppliedModeToStatAppliedMode(EStatsAppliedMode _eFromStatsAppliedMode, EStatsAppliedMode _eToStatsAppliedMode) {
}

EWeightCategory UStatsComponent::BPF_ComputeWeightCategory(EStatsAppliedMode _eMode, EStatsWeaponComputingMethod _eStatsComputingMethod, bool _bWithItemEffects) const {
    return EWeightCategory::Light;
}

int32 UStatsComponent::BPF_ComputeStyleBonusPoints(const EDistributionStatType _eStatType, const int32 _iStatPoints, const int32 _iFightingStyle) const {
    return 0;
}

float UStatsComponent::BPF_ComputeMaxEquipmentWeight(float _fAgility) const {
    return 0.0f;
}

float UStatsComponent::BPF_ComputeDamageOnBlockingSword_Implementation(float _fAttackDamage, float _fAttackingWeaponWeight, float _fBlockingWeaponWeight, bool _bGuardBroken) const {
    return 0.0f;
}

float UStatsComponent::BPF_ComputeDamageOnAttackingSword_Implementation(float _fAttackDamage, float _fAttackingWeaponWeight, float _fBlockingWeaponWeight, bool _bGuardBroken, bool _bGuarding, float _fHittedCharNormalDefense, float _fHittedCharSpecialDefense) const {
    return 0.0f;
}

float UStatsComponent::BPF_ComputeDamage_Implementation(float _fAttackDamage, float _fEquipmentDefense, bool _bSpecialDamage) const {
    return 0.0f;
}

float UStatsComponent::BPF_ComputeBonus(const EBonusType _eBonusType, const EDistributionStatType _eStatType, const int32 _iStatLevel) const {
    return 0.0f;
}

void UStatsComponent::BPF_ClearNotifySeasonStart() {
}

void UStatsComponent::BPF_ClearNotifyNewSeason() {
}

void UStatsComponent::BPF_ClearDisplaySeasonSummary() {
}

void UStatsComponent::BPF_ClearDisplaySeasonStartSummary() {
}

bool UStatsComponent::BPF_CanResetStatPoints() {
    return false;
}

bool UStatsComponent::BPF_AreAllSchoolRewardsEquipped() const {
    return false;
}

void UStatsComponent::BPF_ApplyWeaponStats(UBaseWeaponData* _equippedWeapon, EStatsAppliedMode _eStatsAppliedMode) {
}

void UStatsComponent::BPF_ApplyPrestigePointPreviewValue(int32 _iValue, EStatsAppliedMode _eStatsAppliedMode, bool _bBroadcast) {
}

void UStatsComponent::BPF_ApplyPendingSchoolUpdate() {
}

void UStatsComponent::BPF_ApplyFragmentPreviewValue(int32 _iValue, EStatsAppliedMode _eStatsAppliedMode, bool _bBroadcast) {
}

void UStatsComponent::BPF_AddResources(int32 _iAmount) {
}

void UStatsComponent::BPF_AddPendingAttackXPOnStrike(AFightingCharacter* _attacker, const FName& _AttackName, int32 _iXP) {
}

void UStatsComponent::BPF_AddPendingAttackXP(AFightingCharacter* _attacker, const FName& _AttackName, int32 _iXP, EPendingttackXPType _eXPType) {
}

void UStatsComponent::BPF_AddGlobalXP(EEarnXPInstigator _eXPInstigator, int32 _iXP, EStatsAppliedMode _eStatsAppliedMode, bool _bNotify) {
}

void UStatsComponent::BPF_AddCharacterPrestigePoints(int32 _iNbPoints, EStatsAppliedMode _eStatsAppliedMode) {
}

void UStatsComponent::BPF_AddCharacterDistributionPoints(int32 _iNbPoints, EDistributionStatType _eStatType, EStatsAppliedMode _eStatsAppliedMode) {
}

void UStatsComponent::BPF_AddAttackXP(const FName& _AttackName, int32 _iXP, bool& _bLearnt) {
}





void UStatsComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UStatsComponent, m_SchoolMemberReplicatedInfos);
    DOREPLIFETIME(UStatsComponent, m_ReplicatedGlobalStats);
}


