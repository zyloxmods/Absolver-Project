#include "SchoolHelper.h"

USchoolHelper::USchoolHelper() {
}

void USchoolHelper::BPF_UpdateSchoolReplicatedInfos(const FSchoolMemberReplicatedInfos& _infos, int32 _iNewPlayerScore, int32 _iNewTopSchoolScore, int32 _iNewTotalSchoolScore, int32 _iNewPlayerGlobalRank, int32 _iNewPlayerSchoolRank, int32 _iNewTopSchoolRank, int32 _iNewTotalSchoolRank, FSchoolMemberReplicatedInfos& _result) {
}

int32 USchoolHelper::BPF_SchoolSeasonIsValid(const FSchoolSeasonInfos& _seasonInfos) {
    return 0;
}

bool USchoolHelper::BPF_SchoolMemberEqual(const FSchoolMember& _schoolMember1, const FSchoolMember& _schoolMember2) {
    return false;
}

bool USchoolHelper::BPF_SchoolHasMentor(const FSchool& _school) {
    return false;
}

bool USchoolHelper::BPF_IsValid(const FSchoolStats& _schoolInfo) {
    return false;
}

bool USchoolHelper::BPF_IsSchoolValid(const FSchool& _school) {
    return false;
}

bool USchoolHelper::BPF_IsSchoolMentor(const FSchoolMember& _schoolMember, const FSchool& _school) {
    return false;
}

bool USchoolHelper::BPF_IsSchoolMemberValid(const FSchoolMember& _schoolMember) {
    return false;
}

int32 USchoolHelper::BPF_IsSameUser(const FLeaderboardItem& _schoolLeaderboard, const FSchool& _school) {
    return 0;
}

bool USchoolHelper::BPF_IsSameSchool_2(const FSchoolMemberReplicatedInfos& _infos1, const FSchoolMemberReplicatedInfos& _infos2) {
    return false;
}

int32 USchoolHelper::BPF_IsSameSchool(const FLeaderboardItem& _leaderboardItem, const FSchool& _school) {
    return 0;
}

bool USchoolHelper::BPF_IsManifestLoaded() {
    return false;
}

bool USchoolHelper::BPF_IsInSchool(const FSchoolMemberReplicatedInfos& _infos) {
    return false;
}

bool USchoolHelper::BPF_HasSeasonStarted(UThePlainesGameInstance* _gameInstance) {
    return false;
}

bool USchoolHelper::BPF_HasSeasonEnded(UThePlainesGameInstance* _gameInstance) {
    return false;
}

FDateTime USchoolHelper::BPF_GetSeasonStartTime(UThePlainesGameInstance* _gameInstance) {
    return FDateTime{};
}

FLeaderboardReward USchoolHelper::BPF_GetSeasonReward(const FSeasonRewards& _reward, ELeaderboardTypes _eLeaderboardType) {
    return FLeaderboardReward{};
}

int32 USchoolHelper::BPF_GetSeasonID(const FSeasonRewards& _reward) {
    return 0;
}

FDateTime USchoolHelper::BPF_GetSeasonEndTime(UThePlainesGameInstance* _gameInstance) {
    return FDateTime{};
}

EWeaponFamilies USchoolHelper::BPF_GetSchoolWeaponFamilyFromProgressionReward(ECharacterProgressionRewardTypes _eReward) {
    return EWeaponFamilies::BareHands;
}

int32 USchoolHelper::BPF_GetSchoolTotalScore(const FSchoolStats& _schoolInfo) {
    return 0;
}

int32 USchoolHelper::BPF_GetSchoolTotalRank(const FSchoolStats& _schoolInfo) {
    return 0;
}

int32 USchoolHelper::BPF_GetSchoolTopScore(const FSchoolStats& _schoolInfo) {
    return 0;
}

int32 USchoolHelper::BPF_GetSchoolTopRank(const FSchoolStats& _schoolInfo) {
    return 0;
}

bool USchoolHelper::BPF_GetSchoolSeasonTopPlayerInfo(const FSchoolSeasonInfos& _seasonInfos, uint8 _uiPlayerIndex, FString& _name, int32& _iScore) {
    return false;
}

ESchoolRewardTypes USchoolHelper::BPF_GetSchoolRewardTypeFromProgressionReward(ECharacterProgressionRewardTypes _eReward) {
    return ESchoolRewardTypes::CombatDeck;
}

void USchoolHelper::BPF_GetSchoolMentor(const FSchool& _school, FBPUserID& _outMentorID) {
}

FString USchoolHelper::BPF_GetSchoolMemberReplicatedInfosHumanReadableID(const FSchoolMemberReplicatedInfos& _infos) {
    return TEXT("");
}

int32 USchoolHelper::BPF_GetSchoolMemberCountForLevel(const FSchoolStats& _schoolInfo, uint8 _uiLevel) {
    return 0;
}

int32 USchoolHelper::BPF_GetSchoolMemberCount(const FSchoolStats& _schoolInfo) {
    return 0;
}

int32 USchoolHelper::BPF_GetSchoolLevelForXP(int32 _iXP, bool _bIsMentor) {
    return 0;
}

UBaseItemData* USchoolHelper::BPF_GetSchoolItemFromProgressionReward(const FSchool& _school, ECharacterProgressionRewardTypes _eReward, int32& _iOutMaterialIndex) {
    return NULL;
}

ESchoolGrades USchoolHelper::BPF_GetSchoolGradeFromLevel(int32 _ilevel) {
    return ESchoolGrades::NotInSchool;
}

void USchoolHelper::BPF_GetSchoolDifferences(const FSchool& _school1, const FSchool& _school2, TArray<ECharacterProgressionRewardTypes>& _result) {
}

FComboSave USchoolHelper::BPF_GetSchoolDeckFromProgressionReward(const FSchool& _school, ECharacterProgressionRewardTypes _eReward) {
    return FComboSave{};
}

FComboSave USchoolHelper::BPF_GetSchoolDeckForWeaponFamily(const FSchool& _school, EWeaponFamilies _eWeaponFamily) {
    return FComboSave{};
}

int32 USchoolHelper::BPF_GetSchoolCount(const FSchoolStats& _schoolInfo) {
    return 0;
}

FName USchoolHelper::BPF_GetSchoolComboName() {
    return NAME_None;
}

int32 USchoolHelper::BPF_GetSchoolActivePlayers(const FSchoolStats& _schoolInfo) {
    return 0;
}

void USchoolHelper::BPF_GetRewardPerTier(ELeaderboardTypes _eLeaderboard, ELeaderboardTiers _uiTier, FLeaderboardReward& _reward) {
}

int32 USchoolHelper::BPF_GetRank(const FLeaderboardItem& _school) {
    return 0;
}

int32 USchoolHelper::BPF_GetMaxRankPerRewardTier(ELeaderboardTypes _eLeaderboard, ELeaderboardTiers _uiTier) {
    return 0;
}

ELeaderboardTiers USchoolHelper::BPF_GetLeaderboardTierFromRank(const FLeaderboardInfos& _leaderboardInfos, int32 _iRank) {
    return ELeaderboardTiers::High;
}

void USchoolHelper::BPF_GetLeaderboardRewardPerTier(const FLeaderboardInfos& _leaderboardInfos, ELeaderboardTiers _eTier, FLeaderboardReward& _reward) {
}

int32 USchoolHelper::BPF_GetLeaderboardRewardCount(const FLeaderboardReward& _reward) {
    return 0;
}

int32 USchoolHelper::BPF_GetLeaderboardRankPerTier(const FLeaderboardInfos& _leaderboardInfos, ELeaderboardTiers _eTier) {
    return 0;
}

void USchoolHelper::BPF_GetLeaderboardInfos(ELeaderboardTypes _eLeaderboard, FLeaderboardInfos& _leaderboardInfos) {
}

FString USchoolHelper::BPF_GetLeaderboardHumanReadableID(const FLeaderboardItem& _school1) {
    return TEXT("");
}

FString USchoolHelper::BPF_GetHumanReadableID(const FSchool& _school1) {
    return TEXT("");
}

int32 USchoolHelper::BPF_GetDisibleLevel() {
    return 0;
}

void USchoolHelper::BPF_GenerateSchoolReplicatedInfos(const FSchool& _school, const FSchoolMember _schoolMember, const FSchoolStats& _schoolStats, bool _bIsInSchoolChallenge, FSchoolMemberReplicatedInfos& _result) {
}

bool USchoolHelper::BPF_FakeUserIsMentor(const FSchool& _school, int32 _iMentorID) {
    return false;
}

bool USchoolHelper::BPF_Equal(const FSchool& _school1, const FSchool& _school2) {
    return false;
}


