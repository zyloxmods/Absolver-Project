#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Engine/EngineTypes.h"
#include "GameFramework/OnlineReplStructs.h"
#include "CoopGroup.h"
#include "ECoopGameModeAnswerStatus.h"
#include "EDangerStates.h"
#include "EEmoteAction.h"
#include "EGameModeTypes.h"
#include "ERelationshipTypes.h"
#include "ESocialRequest.h"
#include "InFightPlayersInfo.h"
#include "NameArray.h"
#include "SocialComponent.generated.h"

class AActor;
class UDataTable;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ABSOLVER_API USocialComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnEquippedIntroChanged, const FName&, _IntroName);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnEquippedEmoteChanged, const FName&, _emoteName, const uint8, _uiEmoteSlotIndex);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnEquippedEmoteChanged OnEquippedEmoteChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnEquippedIntroChanged OnEquippedIntroChanged;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* m_EmoteDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fReceivedRequestTimeout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fRequestBroadcastRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNameArray m_FixedEmoteWheelContent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNameArray m_DefaultCustomEmotesContent;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FNameArray m_FixedRequestReponseContent[5];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_uiHitCountThresholdForWarning;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fHealthPercentThresholdForWarning;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_uiHitCountThresholdForFight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fHealthPercentThresholdForFight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fFightDetectionTimeOut;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fFightTimeOut;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fFightRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fCoopResolutionTimeOut;
    
    UPROPERTY(EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    TMap<TWeakObjectPtr<AActor>, ERelationshipTypes> m_Relationships;
    
    UPROPERTY(EditAnywhere, Transient, ReplicatedUsing=OnRep_CoopGroup, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<AActor>> m_CoopGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    TArray<FInFightPlayersInfo> m_InFightPlayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FName m_EquippedIntro;
    
public:
    USocialComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerReadyForCoopMatchMaking(EGameModeTypes _eGameModeType);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerPrepareForCoopMatchMaking(EGameModeTypes _eGameModeType);
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerPerformEmoteActionWithGameMode(EEmoteAction _eEmoteAction, AActor* _targetActor, EGameModeTypes _eGameModeType);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerPerformEmoteAction(EEmoteAction _eEmoteAction, AActor* _targetActor);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerPerformBroadcastEmoteActionWithGameMode(EEmoteAction _eEmoteAction, const TArray<AActor*>& _targetActors, EGameModeTypes _eGameModeType);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerPerformBroadcastEmoteAction(EEmoteAction _eEmoteAction, const TArray<AActor*>& _targetActors);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerEquipIntro(const FName& _IntroName);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerCoopPvPValidateAnswer(bool _bAccept, EGameModeTypes _eGameModeType);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerCancelRequest(ESocialRequest _eRequest);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerCancelCoopGameMode(EGameModeTypes _eGameModeType);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerApplyCoop(AActor* _actor);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_CoopGroup();
    
    UFUNCTION(BlueprintCallable)
    void OnCoopGroupRemoved(const FCoopGroup& _group);
    
    UFUNCTION(BlueprintCallable)
    void OnCoopGroupMemberRemoved(const FUniqueNetIdRepl& _netID, AActor* _actor);
    
    UFUNCTION(BlueprintCallable)
    void OnActorRelationshipEndPlayCallBack(AActor* _actor, TEnumAsByte<EEndPlayReason::Type> _eEndPlayReason);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastStopCoop();
    
public:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastRemoveGroupMember(FUniqueNetIdRepl _groupMemberUniqueId, EGameModeTypes _eGameModeType);
    
private:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastPrepareForCoopMatchMaking(EGameModeTypes _eGameModeType);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastCoopPvPUpdateAnswer(ECoopGameModeAnswerStatus _eAnswer, EGameModeTypes _eGameModeType);
    
    UFUNCTION(NetMulticast, Reliable)
    void MulticastCoopBondResolution(AActor* _coopGroupMember, const TArray<TWeakObjectPtr<AActor>>& _coopGroup);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastChangeRelationship(AActor* _actor, ERelationshipTypes _eRelation);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastCancelRequest(ESocialRequest _eRequestType);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastCancelCoopGameMode(EGameModeTypes _eGameModeType);
    
public:
    UFUNCTION(BlueprintCallable)
    void CoopDangerStateChanged(EDangerStates _ePreviousDangerState, EDangerStates _eNewDangerState);
    
private:
    UFUNCTION(BlueprintCallable, Client, Reliable, WithValidation)
    void ClientSendRequestWithGameMode(AActor* _requestInstigator, ESocialRequest _eSocialRequest, EGameModeTypes _eGameModeType);
    
    UFUNCTION(BlueprintCallable, Client, Reliable, WithValidation)
    void ClientSendRequest(AActor* _requestInstigator, ESocialRequest _eSocialRequest);
    
    UFUNCTION(BlueprintCallable, Client, Reliable, WithValidation)
    void ClientReadyForCoopMatchMaking(EGameModeTypes _eGameModeType);
    
    UFUNCTION(BlueprintCallable, Client, Reliable, WithValidation)
    void ClientAnswerRequest(AActor* _requestAnswerer, bool _bAccept);
    
public:
    UFUNCTION(BlueprintCallable)
    void BPF_SetIntroLock(bool _bLock, const FName& _name);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetIntroAsSeen(const FName& _name);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetIntroAsNew(const FName& _name);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetEmoteLock(bool _bLock, const FName& _name);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetEmoteAsSeen(const FName& _name);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetEmoteAsNew(const FName& _name);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void BPF_ServerChangeRelationship(AActor* _actor, ERelationshipTypes _eRelation);
    
    UFUNCTION(BlueprintCallable)
    void BPF_LeaveCoopGroup();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_IsIntroUnlocked(const FName& _name) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_IsIntroNew(const FName& _name) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_IsIntroEquipped(const FName& _IntroName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_IsInCoopGroup() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_IsInCoopGameMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_IsEmoteUnlocked(const FName& _name) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_IsEmoteNew(const FName& _name) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_IsEmoteEquipped(const FName& _emoteName) const;
    
    UFUNCTION(BlueprintCallable)
    ERelationshipTypes BPF_GetRelationship(AActor* _actor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 BPF_GetNewIntrosCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 BPF_GetNewEmotesCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void BPF_GetDefaultIntro(int32 _iFightingStyleID, FName& out_name) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void BPF_GetCurrentIntroName(FName& out_name) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 BPF_GetCoopPlayerCount();
    
    UFUNCTION(BlueprintCallable)
    void BPF_EquipIntro(const FName& _IntroName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 BPF_CountPlayerWithAnswer(ECoopGameModeAnswerStatus _eAnswer, EGameModeTypes _eGameMode);
    
    UFUNCTION(BlueprintCallable)
    void BPF_CancelPendingCoopMatchMaking();
    
    UFUNCTION(BlueprintCallable)
    void BPF_CancelPendingCoopGameModes(bool _bQuitTheGroup);
    
};

