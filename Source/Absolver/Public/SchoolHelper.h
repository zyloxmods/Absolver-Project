#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "BPUserID.h"
#include "ComboSave.h"
#include "ECharacterProgressionRewardTypes.h"
#include "ELeaderboardTiers.h"
#include "ELeaderboardTypes.h"
#include "ESchoolGrades.h"
#include "ESchoolRewardTypes.h"
#include "EWeaponFamilies.h"
#include "LeaderboardInfos.h"
#include "LeaderboardItem.h"
#include "LeaderboardReward.h"
#include "School.h"
#include "SchoolMember.h"
#include "SchoolMemberReplicatedInfos.h"
#include "SchoolSeasonInfos.h"
#include "SchoolStats.h"
#include "SeasonRewards.h"
#include "SchoolHelper.generated.h"

class UBaseItemData;
class UThePlainesGameInstance;

UCLASS(Blueprintable)
class ABSOLVER_API USchoolHelper : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USchoolHelper();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void BPF_UpdateSchoolReplicatedInfos(const FSchoolMemberReplicatedInfos& _infos, int32 _iNewPlayerScore, int32 _iNewTopSchoolScore, int32 _iNewTotalSchoolScore, int32 _iNewPlayerGlobalRank, int32 _iNewPlayerSchoolRank, int32 _iNewTopSchoolRank, int32 _iNewTotalSchoolRank, FSchoolMemberReplicatedInfos& _result);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 BPF_SchoolSeasonIsValid(const FSchoolSeasonInfos& _seasonInfos);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool BPF_SchoolMemberEqual(const FSchoolMember& _schoolMember1, const FSchoolMember& _schoolMember2);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool BPF_SchoolHasMentor(const FSchool& _school);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool BPF_IsValid(const FSchoolStats& _schoolInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool BPF_IsSchoolValid(const FSchool& _school);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool BPF_IsSchoolMentor(const FSchoolMember& _schoolMember, const FSchool& _school);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool BPF_IsSchoolMemberValid(const FSchoolMember& _schoolMember);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 BPF_IsSameUser(const FLeaderboardItem& _schoolLeaderboard, const FSchool& _school);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool BPF_IsSameSchool_2(const FSchoolMemberReplicatedInfos& _infos1, const FSchoolMemberReplicatedInfos& _infos2);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 BPF_IsSameSchool(const FLeaderboardItem& _leaderboardItem, const FSchool& _school);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool BPF_IsManifestLoaded();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool BPF_IsInSchool(const FSchoolMemberReplicatedInfos& _infos);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool BPF_HasSeasonStarted(UThePlainesGameInstance* _gameInstance);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool BPF_HasSeasonEnded(UThePlainesGameInstance* _gameInstance);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FDateTime BPF_GetSeasonStartTime(UThePlainesGameInstance* _gameInstance);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FLeaderboardReward BPF_GetSeasonReward(const FSeasonRewards& _reward, ELeaderboardTypes _eLeaderboardType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 BPF_GetSeasonID(const FSeasonRewards& _reward);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FDateTime BPF_GetSeasonEndTime(UThePlainesGameInstance* _gameInstance);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EWeaponFamilies BPF_GetSchoolWeaponFamilyFromProgressionReward(ECharacterProgressionRewardTypes _eReward);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 BPF_GetSchoolTotalScore(const FSchoolStats& _schoolInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 BPF_GetSchoolTotalRank(const FSchoolStats& _schoolInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 BPF_GetSchoolTopScore(const FSchoolStats& _schoolInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 BPF_GetSchoolTopRank(const FSchoolStats& _schoolInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool BPF_GetSchoolSeasonTopPlayerInfo(const FSchoolSeasonInfos& _seasonInfos, uint8 _uiPlayerIndex, FString& _name, int32& _iScore);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ESchoolRewardTypes BPF_GetSchoolRewardTypeFromProgressionReward(ECharacterProgressionRewardTypes _eReward);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void BPF_GetSchoolMentor(const FSchool& _school, FBPUserID& _outMentorID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString BPF_GetSchoolMemberReplicatedInfosHumanReadableID(const FSchoolMemberReplicatedInfos& _infos);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 BPF_GetSchoolMemberCountForLevel(const FSchoolStats& _schoolInfo, uint8 _uiLevel);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 BPF_GetSchoolMemberCount(const FSchoolStats& _schoolInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 BPF_GetSchoolLevelForXP(int32 _iXP, bool _bIsMentor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UBaseItemData* BPF_GetSchoolItemFromProgressionReward(const FSchool& _school, ECharacterProgressionRewardTypes _eReward, int32& _iOutMaterialIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ESchoolGrades BPF_GetSchoolGradeFromLevel(int32 _ilevel);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void BPF_GetSchoolDifferences(const FSchool& _school1, const FSchool& _school2, TArray<ECharacterProgressionRewardTypes>& _result);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FComboSave BPF_GetSchoolDeckFromProgressionReward(const FSchool& _school, ECharacterProgressionRewardTypes _eReward);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FComboSave BPF_GetSchoolDeckForWeaponFamily(const FSchool& _school, EWeaponFamilies _eWeaponFamily);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 BPF_GetSchoolCount(const FSchoolStats& _schoolInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName BPF_GetSchoolComboName();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 BPF_GetSchoolActivePlayers(const FSchoolStats& _schoolInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void BPF_GetRewardPerTier(ELeaderboardTypes _eLeaderboard, ELeaderboardTiers _uiTier, FLeaderboardReward& _reward);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 BPF_GetRank(const FLeaderboardItem& _school);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 BPF_GetMaxRankPerRewardTier(ELeaderboardTypes _eLeaderboard, ELeaderboardTiers _uiTier);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ELeaderboardTiers BPF_GetLeaderboardTierFromRank(const FLeaderboardInfos& _leaderboardInfos, int32 _iRank);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void BPF_GetLeaderboardRewardPerTier(const FLeaderboardInfos& _leaderboardInfos, ELeaderboardTiers _eTier, FLeaderboardReward& _reward);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 BPF_GetLeaderboardRewardCount(const FLeaderboardReward& _reward);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 BPF_GetLeaderboardRankPerTier(const FLeaderboardInfos& _leaderboardInfos, ELeaderboardTiers _eTier);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void BPF_GetLeaderboardInfos(ELeaderboardTypes _eLeaderboard, FLeaderboardInfos& _leaderboardInfos);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString BPF_GetLeaderboardHumanReadableID(const FLeaderboardItem& _school1);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString BPF_GetHumanReadableID(const FSchool& _school1);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 BPF_GetDisibleLevel();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void BPF_GenerateSchoolReplicatedInfos(const FSchool& _school, const FSchoolMember _schoolMember, const FSchoolStats& _schoolStats, bool _bIsInSchoolChallenge, FSchoolMemberReplicatedInfos& _result);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool BPF_FakeUserIsMentor(const FSchool& _school, int32 _iMentorID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool BPF_Equal(const FSchool& _school1, const FSchool& _school2);
    
};

