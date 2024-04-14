#pragma once
#include "CoreMinimal.h"
#include "GameFramework/OnlineReplStructs.h"
#include "EGameModeTypes.h"
#include "EMatchMakingStatus.h"
#include "MenuWidget.h"
#include "GameModeSelectionMenu.generated.h"

class AActor;

UCLASS(Blueprintable, EditInlineNew)
class ABSOLVER_API UGameModeSelectionMenu : public UMenuWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGameModeTypes m_eGameModeType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iNbPlayersMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iNbCurrentPlayersReady;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bCanLaunchCoopGameMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bCanAskForCoopGameMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bCanJoinGameMode;
    
public:
    UGameModeSelectionMenu();

    UFUNCTION(BlueprintCallable)
    void BPF_SetGameModeType(EGameModeTypes _eGameModeType);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SendGameModeRequestToCoopGroup(EGameModeTypes _eGameModeType);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SendGameModeRequestCancel(EGameModeTypes _eGameModeType);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SendGameModeAnswerValidateToLeader(EGameModeTypes _eGameModeType, bool _bAccept);
    
    UFUNCTION(BlueprintCallable)
    void BPF_RefreshCoopGameModeStatus();
    
    UFUNCTION(BlueprintCallable)
    void BPF_PrepareCoopGameMode();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_IsReadyForCoopGameMode(EGameModeTypes _eGameModeType);
    
    UFUNCTION(BlueprintCallable)
    bool BPF_IsPendingOneCoopGameModeInvitation(bool _bIncludeCurrentMode);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_IsPendingCoopGameModeInvitation(EGameModeTypes _eGameModeType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_IsLeader(EGameModeTypes _eGameModeType);
    
    UFUNCTION(BlueprintCallable)
    void BPF_CancelPendingCoopGameModeInvitations(bool _bCancelCurrentMode);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnNewAnswerStatus(EGameModeTypes _eGameModeType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnMatchMakingSatusChanged(EMatchMakingStatus _eOldState, EMatchMakingStatus _eNewState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnGroupMemeberRemoved(const FUniqueNetIdRepl& _eNetId, AActor* _actor);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnDeleteCoopGameMode(EGameModeTypes _eGameModeType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnChangeGameModeAvailability(EGameModeTypes _eGameModeType, bool _bIsAvailable);
    
};

