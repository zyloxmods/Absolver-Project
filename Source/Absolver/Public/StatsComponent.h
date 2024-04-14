#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Engine/EngineTypes.h"
#include "AttackDataRow.h"
#include "AttacksCombo.h"
#include "CharacterProgressionReward.h"
#include "CombatDeckDetails.h"
#include "ComboSave.h"
#include "EAttackLearningState.h"
#include "EAttributeScales.h"
#include "EBonusType.h"
#include "ECharacterProgressionRewardConditions.h"
#include "ECharacterProgressionRewardTypes.h"
#include "EDistributionStatType.h"
#include "EEarnXPInstigator.h"
#include "EEquipmentSlot.h"
#include "EEquipmentStatType.h"
#include "EPendingttackXPType.h"
#include "EQuadrantTypes.h"
#include "ESchoolItemType.h"
#include "EShardGainCause.h"
#include "EStatsAppliedMode.h"
#include "EStatsWeaponComputingMethod.h"
#include "EWeaponFamilies.h"
#include "EWeightCategory.h"
#include "GearDataRow.h"
#include "GlobalStats.h"
#include "InventoryItem.h"
#include "PlayerSeasonInfos.h"
#include "School.h"
#include "SchoolMember.h"
#include "SchoolMemberReplicatedInfos.h"
#include "SchoolStats.h"
#include "StatsComponent.generated.h"

class AActor;
class AFightingCharacter;
class UBaseWeaponData;
class UCharacterProgressionDB;
class UCharacterProgressionUnlockDB;
class UEffectData;
class UFightingStyleDB;
class UGameModeProgressionDB;
class UStatsDB;
class UTexture2D;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ABSOLVER_API UStatsComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FXPGain, float, _fXP);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FStatsChanged, EStatsAppliedMode, EStatsAppliedMode);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSchoolChanged, const FSchool&, _school);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FProgressionUpdated);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FProgressionRewardUnlocked, ECharacterProgressionRewardTypes, _eRewardType, const FCharacterProgressionReward&, _reward, UCharacterProgressionUnlockDB*, _unlock);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnResourceAmountChanged, EStatsAppliedMode, EStatsAppliedMode, int32, _iNewAmount);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FLevelUp);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FFightingStyleUnlockProgress, int32, _iSpecialAbility, float, _fPrevProgress, float, _fIncrement, bool, _bValidated);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAttackUnlocked, const FAttackDataRow&, _attack);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FAttackProgressionUpdated, const FAttackDataRow&, _attack, int32, _iAmount);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAttackProgressionLost, AFightingCharacter*, _opponent);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAttackPendingProgressionValidated, AFightingCharacter*, _opponent);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_FiveParams(FAttackPendingProgressionUpdated, AFightingCharacter*, _opponent, FName, _attack, int32, _XP, EPendingttackXPType, _eXPType, bool, _bDiscovered);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FAttackDiscovered, const FAttackDataRow&, _attack, AFightingCharacter*, _opponent);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FXPGain OnGlobalXPGain;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStatsChanged OnStatsChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLevelUp OnNotifyLevelUp;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FProgressionRewardUnlocked OnNotifyProgressionRewardUnlocked;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FProgressionUpdated OnProgressionUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAttackDiscovered OnAttackDiscovered;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAttackProgressionUpdated OnAttackUnlockProgress;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAttackProgressionLost OnAttackProgressionLost;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAttackPendingProgressionUpdated OnAttackPendingProgressionUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAttackPendingProgressionValidated OnAttackPendingProgressionValidated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAttackUnlocked OnAttackUnlocked;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSchoolChanged OnSchoolChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSchoolChanged OnSchoolHasPendingUpdate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFightingStyleUnlockProgress OnSpecialAbilityUnlockProgress;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnResourceAmountChanged OnResourceAmountChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FSchoolMemberReplicatedInfos m_SchoolMemberReplicatedInfos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStatsDB* m_StatsDB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWeightCategory m_eWeightCategory;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fAIPendingAttackXCancelDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCharacterProgressionDB* m_CharacterProgressionDB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGameModeProgressionDB* m_GameModeProgressionDB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_ReplicatedGlobalStats, meta=(AllowPrivateAccess=true))
    FGlobalStats m_ReplicatedGlobalStats;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UBaseWeaponData* m_WeaponDataPerMode[3];
    
public:
    UStatsComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable)
    void WeaponFamilyChangedCallback(const EWeaponFamilies _eNewWeaponFamily, const EStatsAppliedMode _eStatsAppliedMode);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetSchoolLevel(int32 _iNewLevel);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetReplicatedSchoolMemberInfos(FSchoolMemberReplicatedInfos _SchoolMemberInfos);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetReplicatedGlobalStats(FGlobalStats _stats);
    
private:
    UFUNCTION(BlueprintCallable)
    void OutfitChangedRepCallback();
    
    UFUNCTION(BlueprintCallable)
    void OnStatsChangedCallback(EStatsAppliedMode _eEtatsAppliedMode);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ReplicatedGlobalStats();
    
    UFUNCTION(BlueprintCallable)
    void OnPendingAttackXPOpponentEndPlay(AActor* _actor, TEnumAsByte<EEndPlayReason::Type> _endPlayReason);
    
    UFUNCTION(BlueprintCallable)
    void OnPendingAttackXPOpponentAITimeOut(AFightingCharacter* _ai);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnEffectAddedOrRemovedCallback(bool _bAdded, UEffectData* _effectData);
    
    UFUNCTION(BlueprintCallable)
    void KillCallback(AActor* _victim, bool _bIsOnlyAssist, bool _bKillingBlow, AActor* _instigator);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EAttributeScales GetEquipmentAttackBonusGrade(EEquipmentSlot _eEquipmentSlot, EStatsAppliedMode _eStatsAppliedMode, uint8 _uiCombatStyle) const;
    
    UFUNCTION(BlueprintCallable)
    void BPF_UnlockProgressionRewards(int32 _iPrevLevel, int32 _iNewLevel, TArray<ECharacterProgressionRewardTypes>& _rewards, bool _bNotify, ECharacterProgressionRewardConditions _eLevelType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_ShouldNotifySeasonStart() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_ShouldNotifyNewSeason() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_ShouldDisplaySeasonSummary() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_ShouldDisplaySeasonStartSummary() const;
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetPreviewSchoolXP(int32 _iXP, EStatsAppliedMode _eMode, bool _bNotify);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetFragments(EStatsAppliedMode _eStatsAppliedMode, int32 _iValue);
    
    UFUNCTION(BlueprintCallable)
    void BPF_ResetStatPoints();
    
    UFUNCTION(BlueprintCallable)
    void BPF_ResetPrestigePointPreviewValue(bool _bBroadcast);
    
    UFUNCTION(BlueprintCallable)
    void BPF_ResetFragmentPreviewValue(bool _bBroadcast);
    
    UFUNCTION(BlueprintCallable)
    void BPF_ResetCharacterStats();
    
    UFUNCTION(BlueprintCallable)
    void BPF_RemoveCharacterDistributionPointsOnPreview(int32 _iNbPoints, EDistributionStatType _eStatType, EStatsAppliedMode _eStatsAppliedMode);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_IsWeaponFamilyUnlocked(EWeaponFamilies _eWeaponFamily, const EStatsAppliedMode _eFromStatsAppliedMode) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_IsSchoolRewardEquipped(ECharacterProgressionRewardTypes _eReward) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_IsSchoolDisciple(EStatsAppliedMode _eMode) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_IsProgressionRewardUnlocked(const ECharacterProgressionRewardTypes _eReward, const EStatsAppliedMode _eFromStatsAppliedMode) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_IsMentor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_IsInSchool() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_IsFightingStyleUnlocked(const int32 _iFightingStyleIndex, const EStatsAppliedMode _eFromStatsAppliedMode, bool _bDetectMentoringUnlock) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_IsComboSlotUnlocked(const EWeaponFamilies _eWeaponFamily, const FName& _comboName, const EStatsAppliedMode _eFromStatsAppliedMode) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_IsAttackSlotUnlocked(const EQuadrantTypes _quadrant, int32 _cardIndex, const EStatsAppliedMode _eFromStatsAppliedMode) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_HasPreviousSchoolVersion();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_HasPendingSchoolUpdate() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float BPF_GetWeightRatio(EStatsAppliedMode _eStatsAppliedMode, EStatsWeaponComputingMethod _eStatsComputingMethod, bool _bWithItemEffects) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EWeightCategory BPF_GetWeightCategory() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 BPF_GetVisibleCharacterLevel(EStatsAppliedMode _eStatsAppliedMode) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 BPF_GetTotalPendingAttackXP(AFightingCharacter* _attacker);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 BPF_GetSparePrestigePoints(EStatsAppliedMode _eStatsAppliedMode) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 BPF_GetSparePoints(EStatsAppliedMode _eStatsAppliedMode) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float BPF_GetShardRefillBonusForFaithLevel(EShardGainCause _eShardChangeCause, int32 _iFaithLevel) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float BPF_GetShardRefillBonus(EShardGainCause _eShardGainCause, EStatsAppliedMode _eMode) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 BPF_GetSchoolXPForReward(bool _bVictory, ECharacterProgressionRewardTypes _eReward);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 BPF_GetSchoolXP(EStatsAppliedMode _eMode) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FPlayerSeasonInfos BPF_GetSchoolSeasonInfos() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSchoolMemberReplicatedInfos BPF_GetSchoolMemberReplicatedInfos() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSchoolMember BPF_GetSchoolMemberInfos() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void BPF_GetSchoolLevelProgress(int32 _iXP, int32& _iCurrentLevelXp, int32& _iNextLevelXp);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    uint8 BPF_GetSchoolLevel(EStatsAppliedMode _eMode) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FInventoryItem BPF_GetSchoolItem(ESchoolItemType _eRewardType, int32& out_iItemIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSchool BPF_GetSchool() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText BPF_GetRewardNotificationText(ECharacterProgressionRewardTypes _eReward, UCharacterProgressionUnlockDB* _unlock);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftObjectPtr<UTexture2D> BPF_GetRewardNotificationIcon(ECharacterProgressionRewardTypes _eReward, UCharacterProgressionUnlockDB* _unlock);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 BPF_GetResourcesNeededForUnlock(int32 _iDepth);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float BPF_GetResourcesLvlPercentage();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 BPF_GetResourcesLevel(EStatsAppliedMode _eStatsAppliedMode);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    int32 BPF_GetRequiredXPForLevel(const int32 _iNewWantedLevel) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ECharacterProgressionRewardTypes BPF_GetProgressionRewardFromSlot(EWeaponFamilies _eFamiliy, int32 _iSlotIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSchool BPF_GetPrevSchoolVersion();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 BPF_GetPrestigeLevel(EStatsAppliedMode _eStatsAppliedMode) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 BPF_GetPrestigeGrade(EStatsAppliedMode _eStatsAppliedMode) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSchool BPF_GetPendingSchoolUpdate() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 BPF_GetPendingAttackXP(AFightingCharacter* _attacker, const FName& _AttackName, EPendingttackXPType _eXPType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void BPF_GetPendingAttacks(AFightingCharacter* _attacker, TArray<FName>& _outAttacks);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void BPF_GetLastSchoolStats(FSchoolStats& _stats) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void BPF_GetLastMentoringSeasonInfos(FPlayerSeasonInfos& _seasonInfos) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 BPF_GetGlobalXP(EStatsAppliedMode _eStatsAppliedMode) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 BPF_GetGlobalLevel(EStatsAppliedMode _eStatsAppliedMode) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 BPF_GetGlobalCharacterDistributionPoint(EDistributionStatType _eStatType, EStatsAppliedMode _eStatsAppliedMode) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float BPF_GetGearAttackBonusForAttack(const FAttackDataRow& _AttackData, const FGearDataRow& _gearDataRow, int32 _iCombatStyle, bool _bTotalAttackDamage, int32 _iHitNb) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 BPF_GetGameModeXP(EStatsAppliedMode _eStatsAppliedMode) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UGameModeProgressionDB* BPF_GetGameModeProgressionDB();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 BPF_GetGameModeLevel(EStatsAppliedMode _eStatsAppliedMode) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 BPF_GetGameModeCurrentLevelXP(EStatsAppliedMode _eStatsAppliedMode) const;
    
    UFUNCTION(BlueprintCallable)
    int32 BPF_GetFragments(EStatsAppliedMode _eStatsAppliedMode);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 BPF_GetFightingUnlockIndex(int32 _iFightingStyleID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 BPF_GetFightingStylePointDistributionBonus(const EDistributionStatType _eStatType, EStatsAppliedMode _eStatsAppliedMode) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 BPF_GetFightingStyleID(const EStatsAppliedMode _eStatsAppliedMode);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 BPF_GetFightingStyleByUnlockIndex(const int32 _iFSUnlockIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFightingStyleDB* BPF_GetFightingStyle(const EStatsAppliedMode _eStatsAppliedMode);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float BPF_GetEquipmentStat(EEquipmentStatType _eEquipmentStatType, EEquipmentSlot _eEquipmentSlot, EStatsAppliedMode _eStatsAppliedMode) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float BPF_GetEquipmentAttackBonusForAttack(const FAttackDataRow& _AttackData, EEquipmentSlot _eEquipmentSlot, EStatsAppliedMode _eStatsAppliedMode, int32 _iCombatStyle, bool _bTotalAttackDamage, int32 _iHitNb) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float BPF_GetCurrentHitDamage(const FAttackDataRow& _AttackData, bool _bInPrediction, bool _bWithItemEffects) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UCharacterProgressionDB* BPF_GetCharacterProgressionDB();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 BPF_GetCharacterLevel(EStatsAppliedMode _eStatsAppliedMode) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 BPF_GetCharacterDistributionPoint(EDistributionStatType _eStatType, EStatsAppliedMode _eStatsAppliedMode) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float BPF_GetBonus(const EBonusType _eBonusType, EStatsAppliedMode _eStatsAppliedMode) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void BPF_GetAttackXP(const FName& _attack, int32& _iOutXP, float& _fProgress) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float BPF_GetAttackSpecialDamageRatio(EStatsAppliedMode _eMode, EStatsWeaponComputingMethod _eStatsComputingMethod) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float BPF_GetAttackNormalDamageRatio(EStatsAppliedMode _eMode, float _fSpecialRatio) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EAttackLearningState BPF_GetAttackLearningState(const FName& _AttackName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float BPF_GetAttackDataDamage(const FAttackDataRow& _AttackData, bool _bIsMirror, EStatsAppliedMode _eStatsAppliedMode, EStatsWeaponComputingMethod _eStatsComputingMethod) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float BPF_GetAllEquipmentStat(EEquipmentStatType _eEquipmentStatType, EStatsAppliedMode _eStatsAppliedMode, bool _bCountWeapon) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void BPF_GenerateDeckDetailsForComboSave(FCombatDeckDetails& _deckDetails, EWeaponFamilies _eWeaponFamily, const FComboSave& _comboSave, EStatsAppliedMode _eStatsAppliedMode, EStatsWeaponComputingMethod _eComputingMethod);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void BPF_GenerateDeckDetailsForCombo(FCombatDeckDetails& _deckDetails, EWeaponFamilies _eWeaponFamily, const FAttacksCombo& _combo, EStatsAppliedMode _eStatsAppliedMode, EStatsWeaponComputingMethod _eComputingMethod);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void BPF_GenerateDeckDetailsForCombatDeck(FCombatDeckDetails& _deckDetails, EWeaponFamilies _eWeaponFamily, EStatsAppliedMode _eStatsAppliedMode, EStatsWeaponComputingMethod _eComputingMethod, int32 _iSlotIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void BPF_GenerateDeckDetailsForAttack(FCombatDeckDetails& _deckDetails, FName _attack, bool _bIsMirror, EStatsAppliedMode _eStatsAppliedMode, EStatsWeaponComputingMethod _eComputingMethod);
    
    UFUNCTION(BlueprintCallable)
    void BPF_GainPrestigePoints(int32 _iCount);
    
    UFUNCTION(BlueprintCallable)
    void BPF_GainFragments(int32 _iCount);
    
    UFUNCTION(BlueprintCallable)
    void BPF_FragmentOrPrestigePreviewValueChanged();
    
    UFUNCTION(BlueprintCallable)
    bool BPF_EquipSchoolReward(ECharacterProgressionRewardTypes _eReward);
    
    UFUNCTION(BlueprintCallable)
    int32 BPF_EquipAllSchoolRewards();
    
    UFUNCTION(BlueprintCallable)
    void BPF_CopyStatAppliedModeToStatAppliedMode(EStatsAppliedMode _eFromStatsAppliedMode, EStatsAppliedMode _eToStatsAppliedMode);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EWeightCategory BPF_ComputeWeightCategory(EStatsAppliedMode _eMode, EStatsWeaponComputingMethod _eStatsComputingMethod, bool _bWithItemEffects) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 BPF_ComputeStyleBonusPoints(const EDistributionStatType _eStatType, const int32 _iStatPoints, const int32 _iFightingStyle) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float BPF_ComputeMaxEquipmentWeight(float _fAgility) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    float BPF_ComputeDamageOnBlockingSword(float _fAttackDamage, float _fAttackingWeaponWeight, float _fBlockingWeaponWeight, bool _bGuardBroken) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    float BPF_ComputeDamageOnAttackingSword(float _fAttackDamage, float _fAttackingWeaponWeight, float _fBlockingWeaponWeight, bool _bGuardBroken, bool _bGuarding, float _fHittedCharNormalDefense, float _fHittedCharSpecialDefense) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float BPF_ComputeDamage(float _fAttackDamage, float _fEquipmentDefense, bool _bSpecialDamage) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float BPF_ComputeBonus(const EBonusType _eBonusType, const EDistributionStatType _eStatType, const int32 _iStatLevel) const;
    
    UFUNCTION(BlueprintCallable)
    void BPF_ClearNotifySeasonStart();
    
    UFUNCTION(BlueprintCallable)
    void BPF_ClearNotifyNewSeason();
    
    UFUNCTION(BlueprintCallable)
    void BPF_ClearDisplaySeasonSummary();
    
    UFUNCTION(BlueprintCallable)
    void BPF_ClearDisplaySeasonStartSummary();
    
    UFUNCTION(BlueprintCallable)
    bool BPF_CanResetStatPoints();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_AreAllSchoolRewardsEquipped() const;
    
    UFUNCTION(BlueprintCallable)
    void BPF_ApplyWeaponStats(UBaseWeaponData* _equippedWeapon, EStatsAppliedMode _eStatsAppliedMode);
    
    UFUNCTION(BlueprintCallable)
    void BPF_ApplyPrestigePointPreviewValue(int32 _iValue, EStatsAppliedMode _eStatsAppliedMode, bool _bBroadcast);
    
    UFUNCTION(BlueprintCallable)
    void BPF_ApplyPendingSchoolUpdate();
    
    UFUNCTION(BlueprintCallable)
    void BPF_ApplyFragmentPreviewValue(int32 _iValue, EStatsAppliedMode _eStatsAppliedMode, bool _bBroadcast);
    
    UFUNCTION(BlueprintCallable)
    void BPF_AddResources(int32 _iAmount);
    
    UFUNCTION(BlueprintCallable)
    void BPF_AddPendingAttackXPOnStrike(AFightingCharacter* _attacker, const FName& _AttackName, int32 _iXP);
    
    UFUNCTION(BlueprintCallable)
    void BPF_AddPendingAttackXP(AFightingCharacter* _attacker, const FName& _AttackName, int32 _iXP, EPendingttackXPType _eXPType);
    
    UFUNCTION(BlueprintCallable)
    void BPF_AddGlobalXP(EEarnXPInstigator _eXPInstigator, int32 _iXP, EStatsAppliedMode _eStatsAppliedMode, bool _bNotify);
    
    UFUNCTION(BlueprintCallable)
    void BPF_AddCharacterPrestigePoints(int32 _iNbPoints, EStatsAppliedMode _eStatsAppliedMode);
    
    UFUNCTION(BlueprintCallable)
    void BPF_AddCharacterDistributionPoints(int32 _iNbPoints, EDistributionStatType _eStatType, EStatsAppliedMode _eStatsAppliedMode);
    
    UFUNCTION(BlueprintCallable)
    void BPF_AddAttackXP(const FName& _AttackName, int32 _iXP, bool& _bLearnt);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_WeightCategoryChanged(EWeightCategory _eWeightCategory);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_SparePointsWin(int32 _iNbSparePointsWin);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_PrestigePointsWin(int32 _iNbPrestigePointsWin);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_GetXPGain(AActor* _victim, int32 VictimLevel, int32& XPLevel);
    
};

