#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "CharacterProgressionReward.h"
#include "ECharacterProgressionRewardConditions.h"
#include "ECharacterProgressionRewardTypes.h"
#include "ProgressionDoorStruct.h"
#include "ProgressionRewardArray.h"
#include "RetrieveLostItemStruct.h"
#include "CharacterProgressionDB.generated.h"

class UProgressionDoorData;
class UQuestItemData;

UCLASS(Blueprintable)
class ABSOLVER_API UCharacterProgressionDB : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharacterProgressionReward m_Rewards[46];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FProgressionRewardArray m_ComboSlotProgression[3];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ECharacterProgressionRewardTypes> m_FightingStyleProgression;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FProgressionRewardArray m_AttackSlotProgression[4];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    ECharacterProgressionRewardTypes m_WeaponFamilyProgression[3];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ECharacterProgressionRewardTypes> m_ShardProgression;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> m_SpecialAbilityXPOnSuccess;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FProgressionDoorStruct> m_ProgressionDoors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_uiAttackXPOnTargetted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_uiAttackXPOnHit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_uiAttackXPOnGuard;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_uiAttackXPOnDodge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_uiAttackXPOnParry;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_uiAttackXPOnAvoid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_uiAttackXPOnAbsorb;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_uiOffenseAttackXPOnHit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_uiOffenseAttackXPOnGuarded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_uiOffenseAttackXPOnPerfectLink;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_uiOffenseAttackXPOnAbsorb;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_uiOffenseAttackXPOnGuardBreak;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iCairnsToOpen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRetrieveLostItemStruct> m_RetrieveLostItems;
    
    UCharacterProgressionDB();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    ECharacterProgressionRewardTypes BPF_GetProgressionRewardForSchoolLevel(int32 _iSchoolLevel);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FCharacterProgressionReward BPF_GetProgressionReward(ECharacterProgressionRewardTypes _Type);
    
    UFUNCTION(BlueprintCallable)
    FProgressionDoorStruct BPF_GetProgressionDoorStructByQuestItem(UQuestItemData* _questItemData);
    
    UFUNCTION(BlueprintCallable)
    FProgressionDoorStruct BPF_GetProgressionDoorStructByDoorData(UProgressionDoorData* _progressionDoorData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void BPF_GetNextProgressionRewards(ECharacterProgressionRewardConditions _condition, const int32& _iValue, TArray<FCharacterProgressionReward>& _result) const;
    
};

