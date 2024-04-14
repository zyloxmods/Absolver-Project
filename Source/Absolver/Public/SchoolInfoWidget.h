#pragma once
#include "CoreMinimal.h"
#include "BPUniqueNetId.h"
#include "EPlatform.h"
#include "LeaderboardItem.h"
#include "RecentPlayerInfos.h"
#include "SCUserWidget.h"
#include "School.h"
#include "SchoolMember.h"
#include "SchoolSeasonInfos.h"
#include "SchoolStats.h"
#include "SchoolInfoWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ABSOLVER_API USchoolInfoWidget : public USCUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iUnknownAttacks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iLearningAttacks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fRequestDelay;
    
    USchoolInfoWidget();

    UFUNCTION(BlueprintCallable)
    void BPF_LoadSchoolMember(const FSchoolMember _member, const FSchool _school, const int32 _iInfos, int32 _iSeasonID);
    
    UFUNCTION(BlueprintCallable)
    void BPF_LoadRecentPlayer(const FRecentPlayerInfos& _recentPlayer, const int32 _iInfos, int32 _iSeasonID);
    
    UFUNCTION(BlueprintCallable)
    void BPF_LoadLeaderboardItem(const FLeaderboardItem _leaderboardItem, const int32 _iInfos, int32 _iSeasonID);
    
    UFUNCTION(BlueprintCallable)
    void BPF_LoadBPUser(const FBPUniqueNetId& _netID, const FString& _userName, const EPlatform _ePlatform, const int32 _iInfos, int32 _iSeasonID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnWaitingForLoad();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnStartLoad();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnSchoolLoaded(bool _bSuccess, const FSchoolMember& _member, const FSchool& _school, const FSchoolStats& _stats, const FSchoolSeasonInfos& _seasonInfos);
    
};

