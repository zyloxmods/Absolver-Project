#include "MentoringManager.h"

UMentoringManager::UMentoringManager() {
    this->m_fMentorSchoolUpdateFrequency = 300.00f;
    this->m_iCacheLifeTimeSec = 120;
}

void UMentoringManager::BPF_SetCachedUserNotInSchool(const FBPUniqueNetId& _netID, const FString& _userName, const EPlatform _ePlatform, int32 _iSeasonID) {
}

void UMentoringManager::BPF_GetUserCache(const FBPUniqueNetId& _netID, const EPlatform _ePlatform, FPlayerMentoringInfos& _cache, int32 _iSeasonID) {
}

int32 UMentoringManager::BPF_GetLastMatchAffectedSeasonID(bool& _bSeasonStarted) const {
    return 0;
}

void UMentoringManager::BPF_ClearUserSchoolCache(const FBPUniqueNetId& _netID, const EPlatform _ePlatform, int32 _iSeasonID) {
}

void UMentoringManager::BPF_ClearSeasonCache(int32 _iSeason) {
}

void UMentoringManager::BPF_ClearCache() {
}


