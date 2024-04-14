#pragma once
#include "CoreMinimal.h"
#include "BPUniqueNetId.h"
#include "EPlatform.h"
#include "BPUserID.h"
#include "MenuAsyncActionBase.h"
#include "PlayerMentoringInfos.h"
#include "AsyncTaskMentoringGetPlayerInfos.generated.h"

class APlayerState;
class UAsyncTaskMentoringGetPlayerInfos;
class UMenuWidget;

UCLASS(Blueprintable)
class UAsyncTaskMentoringGetPlayerInfos : public UMenuAsyncActionBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FAsyncTaskGetPlayerInfosCompleted, const FPlayerMentoringInfos&, _infos, float, _fRequestDuration, const FText&, _error, UAsyncTaskMentoringGetPlayerInfos*, _instance);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAsyncTaskGetPlayerInfosCompleted OnStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAsyncTaskGetPlayerInfosCompleted OnSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAsyncTaskGetPlayerInfosCompleted OnFail;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAsyncTaskGetPlayerInfosCompleted OnMenuTransition;
    
    UAsyncTaskMentoringGetPlayerInfos();

    UFUNCTION(BlueprintCallable)
    static UAsyncTaskMentoringGetPlayerInfos* BPF_MentoringGetPlayerInfosFromUserID(UMenuWidget* _menu, const FBPUserID& _userID, const FString& _playerName, int32 _iInfosBitmask, int32 _iSeasonID);
    
    UFUNCTION(BlueprintCallable)
    static UAsyncTaskMentoringGetPlayerInfos* BPF_MentoringGetPlayerInfosFromPlayerState(UMenuWidget* _menu, APlayerState* _playerState, int32 _iInfosBitmask, int32 _iSeasonID);
    
    UFUNCTION(BlueprintCallable)
    static UAsyncTaskMentoringGetPlayerInfos* BPF_MentoringGetPlayerInfosFromFakeUser(UMenuWidget* _menu, int32 _ID, const FString& _name, int32 _iInfosBitmask, int32 _iSeasonID);
    
    UFUNCTION(BlueprintCallable)
    static UAsyncTaskMentoringGetPlayerInfos* BPF_MentoringGetPlayerInfos(UMenuWidget* _menu, const FBPUniqueNetId& _netID, const FString& _playerName, EPlatform _ePlatform, int32 _iInfosBitmask, int32 _uiSeasonID);
    
};

