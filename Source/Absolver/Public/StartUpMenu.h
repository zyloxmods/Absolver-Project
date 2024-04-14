#pragma once
#include "CoreMinimal.h"
#include "ESCOnlineStatus.h"
#include "EStartupMenuState.h"
#include "MenuWidget.h"
#include "StartUpMenu.generated.h"

class AFightingCharacter;
class UEquipmentSelectionData;
class USaveThePlaines;

UCLASS(Blueprintable, EditInlineNew)
class ABSOLVER_API UStartUpMenu : public UMenuWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AFightingCharacter> m_PreviewCharac;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAlreadyStarted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EStartupMenuState m_eCurrentState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_MapToLaunch;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UEquipmentSelectionData*> m_Presets;
    
public:
    UStartUpMenu();

private:
    UFUNCTION(BlueprintCallable)
    void OnSessionStateChanged(FName _previous, FName _current);
    
    UFUNCTION(BlueprintCallable)
    void OnSaveLoaded(USaveThePlaines* LoadingResult, bool bLoadingSucessfull);
    
    UFUNCTION(BlueprintCallable)
    void OnProfileLoaded();
    
    UFUNCTION(BlueprintCallable)
    void OnPlayTogetherStarted();
    
    UFUNCTION(BlueprintCallable)
    void OnPlayTogetherEnded(bool _bSuccess, FText _error);
    
    UFUNCTION(BlueprintCallable)
    void OnOnlineStatusChanged(ESCOnlineStatus NewStatus, bool _bInInvitation);
    
    UFUNCTION(BlueprintCallable)
    void OnJoinCoopSessionByInvitationStarted();
    
    UFUNCTION(BlueprintCallable)
    void OnJoinCoopSessionByInvitationCompleted(bool _bSuccess, FText _error);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnFetchedMentoringInfos(bool _bResult, FText _error);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnConnectionRetryYes();
    
    UFUNCTION(BlueprintCallable)
    void OnConnectionRetryNo();
    
protected:
    UFUNCTION(BlueprintCallable)
    void BPF_SetOnlineOption(bool _bIsOnline);
    
public:
    UFUNCTION(BlueprintCallable)
    void BPF_PreloadCharacter();
    
protected:
    UFUNCTION(BlueprintCallable)
    void BPF_OnSaveLoaded(USaveThePlaines* LoadingResult, bool bLoadingSucessfull);
    
    UFUNCTION(BlueprintCallable)
    void BPF_NavigationBackClicked();
    
    UFUNCTION(BlueprintCallable)
    bool BPF_CanLoadGame();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_UserNameChanged(const FString& _name);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_ShowState(EStartupMenuState _eState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnUserPressedStart(int32 userIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnSaveLoaded();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnPlayTogetherStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnPlayTogetherEnded(bool _bSuccess, const FText& _error);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnJoinCoopSessionByInvitationStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnJoinCoopSessionByInvitationCompleted(bool _bSuccess, const FText& _error);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool BPE_HandleNavigationBack();
    
};

