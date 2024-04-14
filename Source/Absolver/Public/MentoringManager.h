#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EPlatform.h"
#include "BPUniqueNetId.h"
#include "PlayerMentoringInfos.h"
#include "MentoringManager.generated.h"

UCLASS(Blueprintable)
class ABSOLVER_API UMentoringManager : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnSeasonStarted);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnSeasonEnded);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnMentorSchoolInfoUpdated, int32, _iNewMemberCount, int32, _iNewDiscipleCount);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMentorSchoolInfoUpdated BPE_OnMentorSchoolInfoUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSeasonEnded BPE_OnSeasonEnded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSeasonStarted BPE_OnSeasonStarted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fMentorSchoolUpdateFrequency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iCacheLifeTimeSec;
    
    UMentoringManager();

    UFUNCTION(BlueprintCallable)
    void BPF_SetCachedUserNotInSchool(const FBPUniqueNetId& _netID, const FString& _userName, const EPlatform _ePlatform, int32 _iSeasonID);
    
    UFUNCTION(BlueprintCallable)
    void BPF_GetUserCache(const FBPUniqueNetId& _netID, const EPlatform _ePlatform, FPlayerMentoringInfos& _cache, int32 _iSeasonID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 BPF_GetLastMatchAffectedSeasonID(bool& _bSeasonStarted) const;
    
    UFUNCTION(BlueprintCallable)
    void BPF_ClearUserSchoolCache(const FBPUniqueNetId& _netID, const EPlatform _ePlatform, int32 _iSeasonID);
    
    UFUNCTION(BlueprintCallable)
    void BPF_ClearSeasonCache(int32 _iSeason);
    
    UFUNCTION(BlueprintCallable)
    void BPF_ClearCache();
    
};

