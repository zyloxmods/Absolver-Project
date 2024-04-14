#pragma once
#include "CoreMinimal.h"
#include "BPUniqueNetId.h"
#include "Engine/EngineTypes.h"
#include "Engine/GameInstance.h"
#include "BPUserID.h"
#include "OnlineKeyValuePair.h"
#include "DLCContent.h"
#include "EFactionsEnums.h"
#include "EGameModeTypes.h"
#include "EMatchMakingStatus.h"
#include "EMatchmakingCompleteResult.h"
#include "ERelationshipTypes.h"
#include "ESCOnlineStatus.h"
#include "ESessionState.h"
#include "InventoryItem.h"
#include "MatchMakingResults.h"
#include "SCError.h"
#include "Templates/SubclassOf.h"
#include "ThePlainesGameInstance.generated.h"

class AActor;
class AAltar;
class AFightingPlayerController;
class AGameMode;
class ALevelSequenceActor;
class APlayerController;
class UAIManager;
class UCinematicManager;
class UDataTable;
class UDummiesDB;
class UFactionsManager;
class UGameModesMatchMakingDB;
class UInputManager;
class UItemsDB;
class ULocalPlayer;
class UMapConfigDB;
class UMentoringManager;
class UMenuDB;
class UMessageManager;
class UNetworkSettingDB;
class UPredictionManager;
class USCCheatManager;
class USCLocalPlayer;
class USCSessionManager;
class USCTrackingManager;
class USaveThePlaines;
class USessionTimeManager;
class USocialManager;
class UTicketManager;

UCLASS(Blueprintable, NonTransient)
class ABSOLVER_API UThePlainesGameInstance : public UGameInstance {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSCOnMatchmakingComplete, FMatchMakingResults, Result);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSCOnlineStatusChanged, ESCOnlineStatus, NewStatus, bool, _bInInvitation);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSaveLoaded, USaveThePlaines*, LoadingResult, bool, bLoadingSucessfull);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FProfileLoaded);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSessionStateChanged, ESessionState, _eSessionState);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnRecentPlayersUpdated);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnReceivedSessionInvitation);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnPlayTogetherStarted);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnPlayTogetherEnded, bool, _bSuccess, FText, _error);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPendingTravelChanged, bool, _bHasPendingTravel);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnMatchmakingStateChange, EMatchMakingStatus, OldState, EMatchMakingStatus, NewState);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnJoinSessionByInvitationStarted);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnJoinSessionByInvitationCompleted, bool, _bSuccess, FText, _error);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnFindOnlineGamesNotFoundDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnFindOnlineGamesCompleteDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnFindOnlineGamesAvailableDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnErrorRaised);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FLaunchCinematic, int32, CinematicIndex, AActor*, ActorToUse);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FFadeOverDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCoopSessionUpdated, bool, _bStarted);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FCinematicCompleted);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMatchmakingStateChange OnMatchMakingStatusChangedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSCOnMatchmakingComplete OnMatchMakingCompleteDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayTogetherStarted BPE_OnPlayTogetherStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayTogetherEnded BPE_OnPlayTogetherEnded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnJoinSessionByInvitationStarted BPE_OnJoinCoopSessionByInvitationStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnJoinSessionByInvitationCompleted BPE_OnJoinCoopSessionByInvitationCompleted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnErrorRaised BPE_OnErrorRaised;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRecentPlayersUpdated BPE_OnRecentPlayersUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSessionStateChanged BPE_OnSessionStateChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnFindOnlineGamesCompleteDelegate BPE_OnFindOnlineGamesComplete;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnFindOnlineGamesAvailableDelegate BPE_OnFindOnlineGamesAvailable;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnFindOnlineGamesNotFoundDelegate BPE_OnFindOnlineGamesNotFound;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPendingTravelChanged BPE_OnPendingTravelChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFadeOverDelegate OnFadeOver;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSaveLoaded OnSaveLoaded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FProfileLoaded OnProfileLoaded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLaunchCinematic LaunchCinematic;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCinematicCompleted OnCinematicCompleted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSCOnlineStatusChanged OnlineStatusChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCoopSessionUpdated m_OnCoopSessionStartStop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText m_UnknownMentorName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AAltar> m_AltarClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FInventoryItem> m_PreOrderExclusiveContent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDLCContent> m_DLCContent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FInventoryItem> m_PS4ExclusiveContent;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* m_WeaponDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* m_EquipmentDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* m_AttackDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iMaxCoopPlayerCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iMaxRecentPlayersCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMenuDB* m_MenuDB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDummiesDB* m_DummiesDB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UItemsDB* m_ItemsDB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputManager* m_InputManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFactionsManager* m_FactionsManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USCCheatManager* m_SCCheatManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UTicketManager> m_AITicketManagerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTicketManager* m_TicketManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAIManager> m_AIManagerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPredictionManager> m_PredictionManagerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USCTrackingManager> m_TrackingManagerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCinematicManager* m_CinematicManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCinematicManager> m_CinematicManagerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMentoringManager* m_MentoringManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UMentoringManager> m_MentoringManagerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USocialManager* m_SocialManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USocialManager> m_SocialManagerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMessageManager* m_MessageManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAIManager* m_AIManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USCSessionManager* m_sessionManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USaveThePlaines* m_CurrentSave;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNetworkSettingDB* m_NetworkSettingDB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMapConfigDB* m_MapConfigOfficialDB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGameModesMatchMakingDB* m_GameModesMatchmakingDB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USessionTimeManager* m_SessionTimeManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSubclassOf<AGameMode> m_CurrentGameModeClass;
    
public:
    UThePlainesGameInstance();

    UFUNCTION(BlueprintCallable, Exec)
    void TriggerUpdateSchoolInfo();
    
    UFUNCTION(BlueprintCallable, Exec)
    void TriggerUnlockPveDepth(uint8 _uiDepth);
    
    UFUNCTION(BlueprintCallable, Exec)
    void TriggerSubmitMentoringMatchResult(bool _bVictory);
    
    UFUNCTION(BlueprintCallable, Exec)
    void TriggerStartPlayTogetherAsHost();
    
    UFUNCTION(BlueprintCallable, Exec)
    void TriggerSimulateSeasonEnd();
    
    UFUNCTION(BlueprintCallable, Exec)
    void TriggerSimulateNewSchoolMembers(int32 _iMembers, int32 _iDisciples);
    
    UFUNCTION(BlueprintCallable, Exec)
    void TriggerSimulateAutoConnect(int32 _iCount, int32 _iDelay, int32 _iFrequency);
    
    UFUNCTION(BlueprintCallable, Exec)
    void TriggerSetZone(int32 _z);
    
    UFUNCTION(BlueprintCallable, Exec)
    void TriggerSetOfflineMode(bool _bOfflineMode);
    
    UFUNCTION(BlueprintCallable, Exec)
    void TriggerSetMentoringServer(FString& _server);
    
    UFUNCTION(BlueprintCallable, Exec)
    void TriggerSetLogServer(FString& _server);
    
    UFUNCTION(BlueprintCallable, Exec)
    void TriggerSetLevelAndZone(int32 _ilevel, int32 _iZone);
    
    UFUNCTION(BlueprintCallable, Exec)
    void TriggerSetForcePVESeed(bool _bForce, int32 _iSeed);
    
    UFUNCTION(BlueprintCallable, Exec)
    void TriggerSetBinderMessageLag(float _fMessageLag);
    
    UFUNCTION(BlueprintCallable, Exec)
    void TriggerSet3v3TimeLeft(float _fTimeLeft);
    
    UFUNCTION(BlueprintCallable, Exec)
    void TriggerResetSchoolContent();
    
    UFUNCTION(BlueprintCallable, Exec)
    void TriggerResetConnectionAfterDelay(int32 _iDelay);
    
    UFUNCTION(BlueprintCallable, Exec)
    void TriggerPrintPVPMaps();
    
    UFUNCTION(Exec)
    void TriggerMentoringStartSeason(uint16 _uiStartDelay, uint16 _uiEndDelay);
    
    UFUNCTION(Exec)
    void TriggerMentoringSetScore(uint16 _uiScore);
    
    UFUNCTION(Exec)
    void TriggerMentoringSetSchoolXP(uint16 _uiSchoolXP);
    
    UFUNCTION(BlueprintCallable, Exec)
    void TriggerMentoringPrintRequests(bool _bEnable);
    
    UFUNCTION(Exec)
    void TriggerMentoringGenerateContent(uint16 _uiUsers, uint16 _uiSchools, uint16 _uiAssignCount, uint16 _uiLeaderboardCount);
    
    UFUNCTION(BlueprintCallable, Exec)
    void TriggerMentoringDelayRequests(float _fDelay);
    
    UFUNCTION(BlueprintCallable, Exec)
    void TriggerMentoringBlockRequests(bool _bBlock);
    
    UFUNCTION(BlueprintCallable, Exec)
    void TriggerLockPveDepth(uint8 _uiDepth);
    
    UFUNCTION(BlueprintCallable, Exec)
    void TriggerListSchoolMembers(int32 iIndex, int32 iCount);
    
    UFUNCTION(BlueprintCallable, Exec)
    void TriggerListAllPlayerSchools();
    
    UFUNCTION(BlueprintCallable, Exec)
    void TriggerLaunchCinematic(int32 _iCinematic);
    
    UFUNCTION(BlueprintCallable, Exec)
    void TriggerJoinFriend(uint8 _uiPlatform, int32 _iUserID);
    
    UFUNCTION(BlueprintCallable, Exec)
    void TriggerJoinFakeUserSchool(int32 _iFakeUser);
    
    UFUNCTION(Exec)
    void TriggerJoinCoop(int64 _ID);
    
    UFUNCTION(BlueprintCallable, Exec)
    void TriggerGameMode(int32 _m);
    
    UFUNCTION(Exec)
    void TriggerForceUserID(uint8 _uiPlatform, uint64 _uiID);
    
    UFUNCTION(BlueprintCallable, Exec)
    void TriggerForceServer();
    
    UFUNCTION(BlueprintCallable, Exec)
    void TriggerForceSchoolChallenge(bool _bForce);
    
    UFUNCTION(BlueprintCallable, Exec)
    void TriggerForcePVPMap(int32 _iMap);
    
    UFUNCTION(BlueprintCallable, Exec)
    void TriggerForceOnline(bool _bOnline);
    
    UFUNCTION(BlueprintCallable, Exec)
    void TriggerForceGSNetworkFailure(bool _bValue);
    
    UFUNCTION(BlueprintCallable, Exec)
    void TriggerFetchMentoringManifest();
    
    UFUNCTION(BlueprintCallable, Exec)
    void TriggerEnd3v3(int32 _iWinningTeam);
    
    UFUNCTION(BlueprintCallable, Exec)
    void TriggerEnd1v1(int32 _iWinningTeam);
    
    UFUNCTION(BlueprintCallable, Exec)
    void TriggerDisableMigration(bool _bValue);
    
    UFUNCTION(BlueprintCallable, Exec)
    void TriggerDisableDamageBonusOnGleam(bool _bDisable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void TriggerCreateSchool();
    
    UFUNCTION(BlueprintCallable, Exec)
    void TriggerCrashAfterDelay(int32 _iDelay);
    
    UFUNCTION(Exec)
    void TriggerConvertSchoolIDToReadableID(uint64 _ID);
    
    UFUNCTION(BlueprintCallable, Exec)
    void TriggerConvertReadableIDToSchoolID(const FString& _ID);
    
    UFUNCTION(BlueprintCallable, Exec)
    void TriggerClearMentoringCache();
    
    UFUNCTION(BlueprintCallable, Exec)
    void TriggerChangeSubZone(uint8 _uiSubZoneID);
    
    UFUNCTION(BlueprintCallable, Exec)
    void TriggerChangeLevel(int32 _l);
    
    UFUNCTION(BlueprintCallable, Exec)
    void TriggerBreakComWithDispatcher(bool _bBreak);
    
    UFUNCTION(BlueprintCallable, Exec)
    void TriggerAchievementProgress(const FString& _achievementId, float _fCompletionPercent);
    
    UFUNCTION(BlueprintCallable, Exec)
    void TriggerAcceptPlayers(uint8 _b);
    
    UFUNCTION(BlueprintCallable, Exec)
    void Trigger3v3Overtime();
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentSave(USaveThePlaines* _save);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnPlayerRelationshipChanged(AActor* _shifter, AActor* _shiftTarget, ERelationshipTypes previousRelation, ERelationshipTypes _enewRelation);
    
    UFUNCTION(BlueprintCallable)
    void OnGroupZoningPlayerStateDestoyed(AActor* _destroyedActor, TEnumAsByte<EEndPlayReason::Type> _eEndPlayReason);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnGroupPlayerStateDidZone(AActor* _actor, TEnumAsByte<EEndPlayReason::Type> _eEndPlayReason);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnCurrentZoneChanged(int32 _zone);
    
public:
    UFUNCTION(BlueprintCallable, Exec)
    void JoinCoopSession(const FString& _password);
    
    UFUNCTION(BlueprintCallable)
    USaveThePlaines* GetSave();
    
    UFUNCTION(BlueprintCallable)
    AAltar* GetMainAltarFromMatchmakingZone(uint8 _uiZone);
    
    UFUNCTION(BlueprintCallable)
    USCLocalPlayer* GetLocalPlayer();
    
    UFUNCTION(BlueprintCallable, Exec)
    void GenerateSchoolMembers(int32 _iCount, const FString& _prefix);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ChangeLevelAndZone(int32 _LevelID, int32 _ZoneID, uint8 _uiSubZoneID, uint8 _uiReachableSubZoneMask);
    
    UFUNCTION(BlueprintCallable)
    bool BPF_TryCancelMatchmaking();
    
    UFUNCTION(BlueprintCallable)
    void BPF_SwitchToOfflineMode();
    
    UFUNCTION(BlueprintCallable)
    void BPF_StopSequence(ALevelSequenceActor* _levelSequenceActor);
    
    UFUNCTION(BlueprintCallable)
    void BPF_StartOnlineGame(const FString& _sessionLevelName, UNetworkSettingDB* _NetworksSettingsDB);
    
    UFUNCTION(BlueprintCallable)
    void BPF_StartOfflineGame(const FString& _map);
    
    UFUNCTION(BlueprintCallable)
    bool BPF_StartMatchMaking(EGameModeTypes _eType);
    
    UFUNCTION(BlueprintCallable)
    bool BPF_StartGameFromMatchMaking();
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetGameMode(int32 _ModeID);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetDebugFlow(bool _bDebugFlow);
    
    UFUNCTION(BlueprintCallable, Exec)
    bool BPF_SetCoopSessionPassword(const FString& _sessionPassword);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetCanJoinCoopSessionByInvitation(bool _bValue);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SendSessionInvitationToPlayer(const FBPUniqueNetId& _friend, const FString& _playerName);
    
    UFUNCTION(BlueprintCallable)
    bool BPF_ReturnToPreviousMap(AFightingPlayerController* _controller);
    
    UFUNCTION(BlueprintCallable)
    void BPF_RequestLoadSave(const FString& _saveName, APlayerController* _controller);
    
    UFUNCTION(BlueprintCallable)
    void BPF_RaiseError(const FSCError& _error);
    
    UFUNCTION(BlueprintCallable)
    void BPF_PlaySequence(ALevelSequenceActor* _levelSequenceActor, bool _bHideLoadingScreen);
    
    UFUNCTION(BlueprintCallable)
    void BPF_MatchMakingCanceled();
    
    UFUNCTION(BlueprintCallable)
    void BPF_LogOut();
    
    UFUNCTION(BlueprintCallable)
    void BPF_LoadProfile(APlayerController* _controller);
    
    UFUNCTION(BlueprintCallable)
    void BPF_JoinOnlineGame(const FString& _uniqueId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_IsTravellingToInvitation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_IsStartingPlayTogether() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_IsPveGameModeAvailableForAll() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_IsPveGameModeAvailable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_IsOnline() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_IsMatchMakingInProgress() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_IsMatchMakingCancelling() const;
    
    UFUNCTION(BlueprintCallable)
    bool BPF_IsLoadTaskRunning();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_IsJoiningCoopSessionByInvitation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_IsDepthSelectedForGameModePvE(uint8 _uiDepth);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_IsDepthMaskValidForGameModePvE(bool _bComputeWithCoopMember) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_IsDepthAvailable(uint8 _uiDepth, bool _bComputeWithCoopMember) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_IsDebugFlow() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_IsCurrentMatchMakingCoop() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void BPF_HideLoadingScreen(bool _bFade, float _fFadeDuration);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_HasPendingTravel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString BPF_GetStartMap() const;
    
    UFUNCTION(BlueprintCallable)
    ESessionState BPF_GetSessionState();
    
    UFUNCTION(BlueprintCallable)
    FString BPF_GetPlayerId(ULocalPlayer* _player);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 BPF_GetPasswordSizeMin();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 BPF_GetPasswordSizeMax();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESCOnlineStatus BPF_GetOnlineStatus();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    uint8 BPF_GetNumberOfPlayerForGameModePvE() const;
    
    UFUNCTION(BlueprintCallable)
    UNetworkSettingDB* BPF_GetNetworkSettingDB();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMentoringManager* BPF_GetMentoringManager();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 BPF_GetMaxCoopPlayersCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EMatchMakingStatus BPF_GetMatchMakingState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EMatchmakingCompleteResult BPF_GetMatchMakingResult() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EGameModeTypes BPF_GetMatchMakingGameMode() const;
    
    UFUNCTION(BlueprintCallable)
    UMapConfigDB* BPF_GetMapConfigDB();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString BPF_GetMainMap() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 BPF_GetLoginStepCount();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 BPF_GetLoginStep();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString BPF_GetLoginError();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void BPF_GetLocalUserID(FBPUserID& _userID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 BPF_GetGameModeSearchUserCount() const;
    
    UFUNCTION(BlueprintCallable)
    EGameModeTypes BPF_GetGameMode();
    
    UFUNCTION(BlueprintCallable)
    void BPF_GetFoundSessions(TArray<FString>& _foundSessions);
    
    //UFUNCTION(BlueprintCallable, BlueprintPure)
  //  TArray<FSessionPropertyKeyPair> BPF_GetExtraSessionProperties() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString BPF_GetDefaultMap() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_GetCoopSessionStarted() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString BPF_GetCoopSessionPassword() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 BPF_Get3v3UserCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 BPF_Get1v1UserCount() const;
    
    UFUNCTION(BlueprintCallable)
    void BPF_FindOnlineGames();
    
    UFUNCTION(BlueprintCallable)
    void BPF_EnableOnlineInfo(bool _bEnable);
    
    UFUNCTION(BlueprintCallable)
    void BPF_DestroySessionAndLeaveGame();
    
    UFUNCTION(BlueprintCallable)
    void BPF_DestroyCoopSession(bool _bDestroySession, bool _bResetBinder);
    
    UFUNCTION(BlueprintCallable, Exec)
    void BPF_DebugSetMatchMakingState(EMatchMakingStatus _eMatchmakingState);
    
    UFUNCTION(BlueprintCallable)
    bool BPF_ConsumeNextError(FSCError& _error);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_ConnectToServers();
    
    UFUNCTION(BlueprintCallable)
    void BPF_ClearCoopSessionPassword();
    
    UFUNCTION(BlueprintCallable)
    void BPF_ChangeLevel(int32 _LevelID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_CanTargetFaction(EFactionsEnums _eMyFaction, EFactionsEnums _eTargetFaction) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_CanCancelMatchMaking() const;
    
    UFUNCTION(BlueprintCallable)
    void BPF_BeginLoadingScreen();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FName BPE_GetTutoIntroLevel();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    int32 BPE_GetTutoIntroIndex();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    int32 BPE_GetOutroIndex();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FName BPE_GetIntroLevel();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    int32 BPE_GetIntroIndex();
    
};

