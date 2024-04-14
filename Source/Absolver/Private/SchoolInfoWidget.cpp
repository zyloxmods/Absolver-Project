#include "SchoolInfoWidget.h"

USchoolInfoWidget::USchoolInfoWidget() {
    this->m_iUnknownAttacks = 0;
    this->m_iLearningAttacks = 0;
    this->m_fRequestDelay = 0.50f;
}

void USchoolInfoWidget::BPF_LoadSchoolMember(const FSchoolMember _member, const FSchool _school, const int32 _iInfos, int32 _iSeasonID) {
}

void USchoolInfoWidget::BPF_LoadRecentPlayer(const FRecentPlayerInfos& _recentPlayer, const int32 _iInfos, int32 _iSeasonID) {
}

void USchoolInfoWidget::BPF_LoadLeaderboardItem(const FLeaderboardItem _leaderboardItem, const int32 _iInfos, int32 _iSeasonID) {
}

void USchoolInfoWidget::BPF_LoadBPUser(const FBPUniqueNetId& _netID, const FString& _userName, const EPlatform _ePlatform, const int32 _iInfos, int32 _iSeasonID) {
}





