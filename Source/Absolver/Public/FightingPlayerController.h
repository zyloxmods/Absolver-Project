#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "InputCoreTypes.h"
#include "AdversarialTeamInfos.h"
#include "AttackDataRow.h"
#include "CharacterProgressionReward.h"
#include "ComboSave.h"
#include "CoopGroup.h"
#include "EAttributeScales.h"
#include "ECharacterProgressionRewardTypes.h"
#include "ECoopGameModeAnswerStatus.h"
#include "ECycleDirection.h"
#include "EDangerStates.h"
#include "EEmoteAction.h"
#include "EEndGameResult.h"
#include "EGameModePlayerAnswers.h"
#include "EGameModeTypes.h"
#include "EIntergerGameplayOptionTypes.h"
#include "EMatchEndReason.h"
#include "EMatchMakingStatus.h"
#include "EMenuEnum.h"
#include "EQuadrantTypes.h"
#include "ERelationshipTypes.h"
#include "ESCOnlineStatus.h"
#include "EStatsAppliedMode.h"
#include "ETrainingRequest.h"
#include "EWeaponFamilies.h"
#include "GameModeLootStruct.h"
#include "GameModeRewardStruct.h"
#include "InputAction.h"
#include "LootBoxRewardStruct.h"
#include "SCPlayerController.h"
#include "Templates/SubclassOf.h"
#include "FightingPlayerController.generated.h"

class AAISpawner;
class AActor;
class AAltar;
class ABaseCharacter;
class AController;
class AFightingCharacter;
class AInteractiveObject;
class UCharacterBuildDB;
class UCharacterProgressionUnlockDB;
class UDebugOnlineInfoWidget;
class UEmoteWheel;
class UEquipmentSelectionData;
class UInteractionObjectComponent;
class ULootComponent;
class UMaterialInterface;
class UMaterialParameterCollection;
class UMenuWidget;
class UPickUpMenu;
class UPopupWidget;
class UPreviewData;
class UShardUpdateComponent;
class UTargetableWidgetUpdaterComponent;
class UTexture2D;
class UTutorialHUD;
class UUserWidget;

UCLASS(Blueprintable)
class ABSOLVER_API AFightingPlayerController : public ASCPlayerController {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FRelationshipChanged, AActor*, _shifter, AActor*, _shiftTarget, ERelationshipTypes, previousRelation, ERelationshipTypes, _enewRelation);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FProgressUpdated);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FProgressionRewardUnlocked, ECharacterProgressionRewardTypes, _eRewardType, const FCharacterProgressionReward&, _reward, UCharacterProgressionUnlockDB*, _unlock);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPawnInitializedDynamic, AFightingCharacter*, _pawn);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnWasKilled, AFightingCharacter*, _victim, AFightingCharacter*, _deathInstigator);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnTrainingRequest, ETrainingRequest, _eRequest);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnQuadrantChange, EQuadrantTypes, _eQuadrant);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnAFKWarningActivated, bool, _bActivated);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FInGroupCoopTransitionChanged, bool, _newValue);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDropItem, AController*, _discarder);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FCurrentMenuChanged, EMenuEnum, _ePrevMenu, EMenuEnum, _eNewMenu);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FCloseIngameMenu);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FChangeMenuPage, ECycleDirection, _eDirection);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCurrentMenuChanged OnCurrentMenuChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FProgressionRewardUnlocked OnNotifyProgressionRewardUnlocked;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnQuadrantChange OnQuadrantChange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCharacterBuildDB* m_DefaultBuild;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTrainingRequest m_OnTrainingRequest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bShowAltAttackStartQuadrant;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDropItem DropItemDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FChangeMenuPage OnChangeMenuPage;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPawnInitializedDynamic OnPawnInitializedDynamic;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnWasKilled OnPawnWasKilled;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCloseIngameMenu OnMenuClosed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool m_bCanOpenMenu;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool m_bEnvDeathRespawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool m_bRoomClearedRespawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_IsInGroupZoneTransition, meta=(AllowPrivateAccess=true))
    bool m_bIsInGroupZoneTransition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UTexture2D*> m_MenuIconCache;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool m_bDebugDisplayAttackLearning;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EMenuEnum> m_DisabledMenus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bLoadMenusAsync;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UMenuWidget> m_MenuClasses[26];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidget> m_MenuAnimationsClass;
    
    UPROPERTY(EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMenuWidget* m_MenuInstances[26];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UDebugOnlineInfoWidget> m_DebugOnlineWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPreviewData* m_PreviewDataDB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* m_OutlineMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* m_OutlineMaterialPVP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPopupWidget* m_PopupYesNo;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAFKWarningActivated OnAFKWarningActivated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float m_fTimeSinceLastNonRedundantUserInput;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UUserWidget* m_MenuAnimationsInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UEquipmentSelectionData* m_EquipmentSelection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AAltar* m_RespawnPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTargetableWidgetUpdaterComponent* m_TagetableWigetUpdaterComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPickUpMenu> m_PickUpMenuClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fPreviewTimerHighlight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fPreviewTimerScrollBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fFadeTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UShardUpdateComponent> m_ShardUpdateComponentClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidget> m_WaterMarkBP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UUserWidget* m_WaterMarkScreen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    int32 m_iCharacterLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> m_KilledBy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AInteractiveObject> m_CairnClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FAdversarialTeamInfos> m_AdversarialTeamInfos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UDebugOnlineInfoWidget* m_DebugOnlineWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialParameterCollection* m_MaterialParameterCollectionFXVisualParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_EmissiveMultiplierMPCParameterName;
    
public:
    AFightingPlayerController(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable)
    void TutoIntroLevelLoaded();
    
    UFUNCTION(BlueprintCallable)
    void TutoCinematicCompleted();
    
public:
    UFUNCTION(BlueprintCallable, Exec)
    void TriggerSetGameModeLvl(int32 _iXP);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleWaterMark();
    
    UFUNCTION(BlueprintCallable, Exec)
    void SwitchToNextWeaponFamily();
    
    UFUNCTION(BlueprintCallable, Exec)
    void SuicideAll();
    
    UFUNCTION(BlueprintCallable, Exec)
    void Suicide();
    
    UFUNCTION(BlueprintCallable)
    void SpawnFightingAI(ABaseCharacter* _requester);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SimulateStartStopJoinCoopSession(bool _bSuccess, const FString& _error);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SimulateStartJoinCoopSession();
    
    UFUNCTION(BlueprintCallable, Exec)
    void SimulateSetMatchmakingState(EMatchMakingStatus _eNewState);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SimulateSessionInvitation();
    
    UFUNCTION(BlueprintCallable, Exec)
    void SimulateError(const FString& _error);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SimulateEndJoinCoopSession(bool _bSuccess, const FString& _error);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SimulateClientReturnToMainMenu(const FString& _reason);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ShowQuadrant(uint8 _uiParam);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetSchoolXP(int32 _iSchoolXP);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetHealth(float _fHP);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetGameModeXP(int32 _iXP);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetFaction(uint8 _uiFaction);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetAchievementProgression_PlayerKill(int32 _iKilledPlayers);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetAchievementProgression_Cairns(int32 _iOpenedCairns);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SessionTimeManagerActivateDebug(bool _bActivate);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerUseInterractiveObject(bool _bSuccess, UInteractionObjectComponent* _componentUsed);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerUpdateCoopGroup();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSuicideAll();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerShowSpawnedAI(ABaseCharacter* _AISpawned);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetRoomClearedRespawn(bool _bValue);
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetInGroupZoneTransition(bool _bValue);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetEnvDeathRespawn(bool _bValue);
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSendLocalCoopGroup(const TArray<FCoopGroup>& _coopGroup);
    
public:
    UFUNCTION(BlueprintCallable, Server, Unreliable, WithValidation)
    void ServerRequestTimeSync(uint8 _uiClientRequestID);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerReadyForReturningPvEWithCoopGroup();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerNotifyGameModeAnswer(EGameModePlayerAnswers _eAnswer);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerLeaderAskForForReturningToPvE();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerFirstRequestTimeSync(uint8 _uiClientRequestID);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerDropItem();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerBPF_SetPlayerStartAtCheckpoint(AAltar* _start);
    
    UFUNCTION(BlueprintCallable)
    void ServerBPF_NotifyGameModeAnswer(EGameModePlayerAnswers _eAnswer);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerAcceptGroupZoning();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_UsedAltar(AAltar* _altar);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_SpawnFightingAI(AAISpawner* _spawner, FTransform _transform, TSubclassOf<AFightingCharacter> _classToSpawn);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_ChangingZone(uint8 _uiNewZone);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SchoolSetFightingStyle(int32 _iID);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SchoolBecomeStudent(bool _bUnlock);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SchoolBecomeMentor(bool _bUnlock);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ResetAchievementProgression_PlayerKill();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ResetAchievementProgression_Cairns();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ResetAchievementProgression_AIKilling();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ResetAchievementProgression();
    
    UFUNCTION(BlueprintCallable, Exec)
    void RemoveQuestItemAt(int32 _iQuestItemIndex);
    
    UFUNCTION(BlueprintCallable, Exec)
    void RemovePlayer();
    
    UFUNCTION(BlueprintCallable, Exec)
    void PrintStatsWithBonus();
    
    UFUNCTION(BlueprintCallable, Exec)
    void PrintGameModeLevel();
    
    UFUNCTION(BlueprintCallable, Exec)
    void PrintDamage(const int32 _iAgilityLevel, const int32 _iStrengthLevel, const float _WR, const EAttributeScales _eAgilityScale, const EAttributeScales _eStrengthScale, const EAttributeScales _eWRScale, const float _fBaseAttackDamage) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void PrintAttackDamage(const int32 _iAgilityLevel, const int32 _iStrengthLevel, const float _WR, const FName _AttackName) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void PerformEmoteAction(EEmoteAction _eEmoteAction);
    
private:
    UFUNCTION(BlueprintCallable)
    void PawnDestructionOver(AActor* _destroyedActor);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnRestartGame();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_IsInGroupZoneTransition();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRegularAttack(EQuadrantTypes _eStartQuadrant, EQuadrantTypes _eEndQuadrant, uint8 uiNewIndex);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnPlayerProgressionUpdated();
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerNotifyProgressionRewardUnlocked(ECharacterProgressionRewardTypes _eRewardType, const FCharacterProgressionReward& _reward, UCharacterProgressionUnlockDB* _unlock);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnPickUpDestroyed(UInteractionObjectComponent* _component);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnPawnDangerStateChanged(EDangerStates _ePreviousDangerState, EDangerStates _eNewDangerState);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnOnlineStatusChanged(ESCOnlineStatus _eNewStatus, bool _bInInvitation);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnKilledSomething_LocalOnly(AActor* _victim, bool _bIsOnlyAssist, bool _bKillingBlow, AActor* _instigator);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnComboLastAttack(EQuadrantTypes newQuadrant);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnComboChangedQuadrant(EQuadrantTypes oldQuadrant);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnAttackDiscovered(const FAttackDataRow& _attack, AFightingCharacter* _opponent);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAltAttack(EQuadrantTypes newQuadrant, uint8 _uiCurrentComboIndex);
    
    UFUNCTION(BlueprintCallable, Exec)
    void Mute(bool bMute);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastReturnToPreviousMap();
    
    UFUNCTION(BlueprintCallable, Exec)
    void LogQuestInventory(bool _bDebugOnScreen);
    
    UFUNCTION(BlueprintCallable, Exec)
    void LeaveSchool();
    
private:
    UFUNCTION(BlueprintCallable)
    void IntroLevelLoaded();
    
    UFUNCTION(BlueprintCallable)
    void IntroCompleted();
    
    UFUNCTION(BlueprintCallable)
    void InitSeamlessCharacter();
    
    UFUNCTION(BlueprintCallable)
    void InitCharacterAndSave();
    
public:
    UFUNCTION(BlueprintCallable, Exec)
    void GiveFocusToGameViewport();
    
    UFUNCTION(BlueprintCallable, Exec)
    void GetAllEquipment();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ForceCameraOffsetAt(bool _bActivate, float _fRatio);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ExecHackGameModeReset();
    
    UFUNCTION(Exec)
    void EquipFromInventory(uint32 _iIndexInInventory, int32 _iSlot);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DumpPlayerInfo();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DumpAttackLinkFrames(bool _bFullCombo);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugTutorials(FName _ActionName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugToggleFollowPlayer(int32 _iPlayerIndex);
    
    UFUNCTION(BlueprintCallable, Exec)
    bool DebugPlayAttack(FName _AttackID);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugPlayAllAttacks(bool _bStart);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugJoinSchool(int32 _iSchoolID);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugGainPrestigePoints(int32 _iCount);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugGainFragments(int32 _iCount);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ComboEnded(EQuadrantTypes newQuadrant);
    
private:
    UFUNCTION(BlueprintCallable, Client, Reliable, WithValidation)
    void ClientSendNewCoopGroup(const TArray<FCoopGroup>& _coopGroup);
    
    UFUNCTION(BlueprintCallable, Client, Reliable, WithValidation)
    void ClientSendEntireCoopGroup(const TArray<FCoopGroup>& _coopGroup);
    
public:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientRespawnLocalAI(AAISpawner* _spawner);
    
    UFUNCTION(Client, Unreliable)
    void ClientRequestTimeSync(uint8 _uiClientRequestID, int64 _serverTimeTicks);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientRequestGroupZoning();
    
    UFUNCTION(BlueprintCallable, Client, Reliable, WithValidation)
    void ClientReAskForGameModeAnswer(EGameModePlayerAnswers _eAnswerWaitingFor);
    
    UFUNCTION(BlueprintCallable, Client, Reliable, WithValidation)
    void ClientReadyForReturningPvEWithCoopGroup();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientOnUnspawn();
    
    UFUNCTION(BlueprintCallable, Client, Reliable, WithValidation)
    void ClientLeaderAskForReturningPvEWithCoopGroup();
    
    UFUNCTION(BlueprintCallable, Client, Reliable, WithValidation)
    void ClientLeaderAloneWhenQuittingAsGroup();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientKillSomething(AActor* _victim, AActor* _killer, bool _bAssistOnly, bool _bKillingBlow);
    
    UFUNCTION(Client, Reliable)
    void ClientFirstRequestTimeSync(uint8 _uiClientRequestID, int64 _serverTimeTicks);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_StayInZone();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_RestartMatch();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_ReceiveAllyHeal();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_MatchIntro();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_GiveLoot(ULootComponent* _component);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ClearQuestInventory();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ClearInventory();
    
    UFUNCTION(BlueprintCallable, Exec)
    void CheckAttackAnimations();
    
    UFUNCTION(BlueprintCallable)
    void ChangeCurrentInteractionObjectComponent(UInteractionObjectComponent* _objectComp, bool _bNewComponent);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_WantsOffline();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_WantQuitWithCoopGroup();
    
    UFUNCTION(BlueprintCallable)
    void BPF_ValidationReceived(bool _bResult);
    
    UFUNCTION(BlueprintCallable, Exec)
    void BPF_UnlockAllEmotes();
    
    UFUNCTION(BlueprintCallable)
    void BPF_TreatGameModeAnswerWaitingFor();
    
    UFUNCTION(BlueprintCallable)
    void BPF_ToggleMouseCaptureMode();
    
    UFUNCTION(BlueprintCallable)
    void BPF_ShowAltarOnHUD();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_ShouldDisplayInteractionText(bool& _bOutCanInteract);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetWantsRestartBossSituation(const bool _bRestartBossSituation);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetWantsRespawnOnStartPoint(bool _bRespwnOnStartPoint);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetWantsLeaveBossSituation(const bool _bLeaveBossSituation);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetWantQuitWithCoopGroup(bool _bWantToQuitWithCoopGroup);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetTutorialHUD(UTutorialHUD* _tutorialHUD);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetTrainingRequest(ETrainingRequest _eRequest);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetSwitchTargetOnAttack(bool _bSwitchTargetOnAttack);
    
    UFUNCTION(BlueprintCallable, Exec)
    void BPF_SetShouldNotifySchoolUpdate(bool _bNotify);
    
    UFUNCTION(BlueprintCallable, Exec)
    void BPF_SetPlayerCombatStyle(uint8 _uiNewCombatStyle, EStatsAppliedMode _eStatsAppliedMode);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetInvertCameraYAxis(bool _bInvert);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetInvertCameraXAxis(bool _bInvert);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetInUIInputMode(bool _bActivate, bool _bUIOnly);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetGameplayOptionValueAsNormalizedValue(EIntergerGameplayOptionTypes _eOptionType, float _fOptionSliderValue);
    
    UFUNCTION(BlueprintCallable, Exec)
    void BPF_SetGameplayOptionValue(EIntergerGameplayOptionTypes _eOptionType, int32 _iOptionValue);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetEmoteWheel(UEmoteWheel* _emoteWheel);
    
    UFUNCTION(BlueprintCallable, Exec)
    void BPF_SetEmoteLock(bool _bLock, const FName& _emoteName);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetEmissiveParamOnPawn(float _fParamValue);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetCurrentMenu(EMenuEnum _eMenu);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetCombo(EWeaponFamilies _eFamily, int32 _iComboIndex, const FComboSave& _OutResult);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SendGameModeRequestCancel(EGameModeTypes _eGameModeType);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SaveCombo();
    
    UFUNCTION(BlueprintCallable)
    void BPF_ResetComboForActiveWeaponFamily();
    
    UFUNCTION(BlueprintCallable)
    void BPF_RemoveMenuFromStack(EMenuEnum _eMenu);
    
    UFUNCTION(BlueprintCallable, Exec)
    UMenuWidget* BPF_PushMenu(EMenuEnum _eMenuEnum);
    
    UFUNCTION(BlueprintCallable)
    void BPF_PopMenuStack(EMenuEnum _eMenuEnum, bool _bIncluded);
    
    UFUNCTION(BlueprintCallable)
    void BPF_PopMenu(bool _bRestoreFocus);
    
    UFUNCTION(BlueprintCallable)
    void BPF_OpenCloseEmoteWheel(bool _bOpen);
    
    UFUNCTION(BlueprintCallable)
    void BPF_LoadComboFromName(FName _comboName, EWeaponFamilies _eFamily, EStatsAppliedMode _eMode);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_IsNotificationRewardNew(ECharacterProgressionRewardTypes _eReward);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_IsMenuInStack(EMenuEnum _eMenu);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_IsMenuEnabled(EMenuEnum _eMenu) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_IsKeyBindedToInputAction(FKey _key, InputAction _eInputAction);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_IsInGroupZoneTransition() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_IsInCoopGameMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_IsInBossSituation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_IsCoopGameModeLeader() const;
    
    UFUNCTION(BlueprintCallable)
    void BPF_HideAltarOnHUD();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_GetWantRespawnOrder() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTutorialHUD* BPF_GetTutorialHUD() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMenuWidget* BPF_GetTopMenuInstance();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EMenuEnum BPF_GetTopMenu();
    
    UFUNCTION(BlueprintCallable)
    bool BPF_GetSwitchTargetOnAttack();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_GetShouldNotifySchoolUpdate();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AAltar* BPF_GetRespawnPoint() const;
    
    UFUNCTION(BlueprintCallable)
    UPopupWidget* BPF_GetPopupYesNo();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMenuWidget* BPF_GetParentMenu(EMenuEnum& _eOutMenu, int32 _iOffset);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMenuWidget* BPF_GetOrCreateMenuInstance(EMenuEnum _eMenuEnum);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void BPF_GetOpponentAdversarialTeamInfos(FAdversarialTeamInfos& _infos);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void BPF_GetMyAdversarialTeamInfos(FAdversarialTeamInfos& _infos);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMenuWidget* BPF_GetMenuInstance(EMenuEnum _eMenu);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UUserWidget* BPF_GetMenuAnimations();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_GetMeditationTransitionInProgress() const;
    
    UFUNCTION(BlueprintCallable)
    FName BPF_GetLastGamepadControllerType();
    
    UFUNCTION(BlueprintCallable)
    bool BPF_GetInvertCameraYAxis();
    
    UFUNCTION(BlueprintCallable)
    bool BPF_GetInvertCameraXAxis();
    
    UFUNCTION(BlueprintCallable)
    float BPF_GetGameplayOptionValueAsNormalizedValue(EIntergerGameplayOptionTypes _eOptionType);
    
    UFUNCTION(BlueprintCallable)
    int32 BPF_GetGameplayOptionValue(EIntergerGameplayOptionTypes _eOptionType);
    
    UFUNCTION(BlueprintCallable)
    float BPF_GetGameplayOptionNormalizedValueStep(EIntergerGameplayOptionTypes _eOptionType);
    
    UFUNCTION(BlueprintCallable)
    float BPF_GetGameplayOptionMinValue(EIntergerGameplayOptionTypes _eOptionType);
    
    UFUNCTION(BlueprintCallable)
    float BPF_GetGameplayOptionMaxValue(EIntergerGameplayOptionTypes _eOptionType);
    
    UFUNCTION(BlueprintCallable)
    float BPF_GetGameplayOptionFactor(EIntergerGameplayOptionTypes _eOptionType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EGameModePlayerAnswers BPF_GetGameModeAnswerWaitingFor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float BPF_GetFadeTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UEmoteWheel* BPF_GetEmoteWheel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EMenuEnum BPF_GetCurrentMenu() const;
    
    UFUNCTION(BlueprintCallable)
    UInteractionObjectComponent* BPF_GetCurrentInteractionObjectComponent();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ECoopGameModeAnswerStatus BPF_GetCurrentGameModeAnswerStatus() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 BPF_GetCurrentComboIndex(EWeaponFamilies _eFamily);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void BPF_GetCurrentCombo(EWeaponFamilies _eFamily, FComboSave& _OutResult, bool& _bOutSuccess, EStatsAppliedMode _eMode);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ECoopGameModeAnswerStatus BPF_GetCoopGameModeAnswerStatus(EGameModeTypes _eGameMode) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 BPF_GetComboIndex(FName _comboName, EWeaponFamilies _eFamily);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void BPF_GetComboByName(EWeaponFamilies _eFamily, FName _name, FComboSave& _OutResult, bool& _bOutSuccess);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void BPF_GetCombo(EWeaponFamilies _eFamily, int32 _iComboIndex, FComboSave& _OutResult, bool& _bOutSuccess);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString BPF_GetCharacterName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FAdversarialTeamInfos BPF_GetAdversarialTeamInfos(uint8 _uiTeam);
    
    UFUNCTION(BlueprintCallable, Exec)
    void BPF_EnterSpectatorMode();
    
    UFUNCTION(BlueprintCallable, Exec)
    void BPF_DumpCombo();
    
    UFUNCTION(BlueprintCallable, Exec)
    void BPF_DumpAllGearDataAsset();
    
    UFUNCTION(BlueprintCallable)
    void BPF_DismissNewProgressionRewards(ECharacterProgressionRewardTypes _eReward);
    
    UFUNCTION(BlueprintCallable, Exec)
    void BPF_DebugUnlockFightingStyles();
    
    UFUNCTION(BlueprintCallable, Exec)
    void BPF_DebugSetAbsolverStatus(bool _bActivate);
    
    UFUNCTION(BlueprintCallable, Exec)
    void BPF_DebugForcePerfectLink(bool _bActivate);
    
    UFUNCTION(BlueprintCallable, Exec)
    void BPF_DebugAutoTargetAttackTicketAI(bool _bActivate);
    
    UFUNCTION(BlueprintCallable)
    void BPF_ClosePickUpMenu();
    
    UFUNCTION(BlueprintCallable, Exec)
    void BPF_ClipBoardToCombo();
    
    UFUNCTION(BlueprintCallable, Exec)
    void BPF_ClearMoveset();
    
    UFUNCTION(BlueprintCallable)
    void BPF_ClearMenuStack();
    
    UFUNCTION(BlueprintCallable, Exec)
    void BPF_ChangeShortcutToSubzone(uint8 _uiZoneID, uint8 _uiGateID, bool _bOpen);
    
    UFUNCTION(BlueprintCallable)
    void BPF_ChangeOfflineModeInProfile(bool _bOffline);
    
    UFUNCTION(BlueprintCallable)
    void BPF_CacheMenuIcons();
    
    UFUNCTION(BlueprintCallable)
    void BPF_BuildAdversarialTeamInfos();
    
    UFUNCTION(BlueprintCallable)
    void BPF_BuildAdversarialPlayerInfos();
    
    UFUNCTION(BlueprintCallable)
    void BPF_BackupComboForActiveWeaponFamily();
    
    UFUNCTION(BlueprintCallable)
    void BPF_AskReturnToPvEWithCoopGroup();
    
    UFUNCTION(BlueprintCallable, Exec)
    void BPF_AddAllWeaponInInventory();
    
    UFUNCTION(BlueprintCallable, Exec)
    void BPF_ActivateHitDetailsDebug(bool _bActivate);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_WantsComboWidgetsRebuild();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_TryQuitBadCombo();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_ToggleDebugMenu();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool BPE_ShouldEnablePostProcessComponent() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_RestartAsked();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_PawnInitialized();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OpenTrainingEvent();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnUsedHealStone();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnSetInteractiveObjectComponent(UInteractionObjectComponent* _newInteractionObjectComponent);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnReceiveAllyHeal();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnMatchIntro();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnExitMedidation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnEnterMedidation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnEndGame(EEndGameResult _eResult, EMatchEndReason _eReason, bool _bShowRematch, FGameModeRewardStruct _reward, const TArray<FGameModeLootStruct>& _rewards, const TArray<FLootBoxRewardStruct>& _LootBoxes);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnCurrentMenuChanged(EMenuEnum _ePrevMenu, EMenuEnum _eNewMenu);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnComboEditorClose();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnChangeGameplayOptionFactor(EIntergerGameplayOptionTypes _eOptionType, float _fOptionFactor);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_MenuEvent();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_GameInitialized(bool bHideLoadingScreen);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_CloseTrainingEvent();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_ChangeEditorQuadrantState(EQuadrantTypes _eNewQuadrant);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_ActiveWeaponChanged(const EWeaponFamilies _eNewWeaponFamily, const EStatsAppliedMode _eStatsAppliedMode);
    
    UFUNCTION(BlueprintCallable, Exec)
    void BakeAttackAnimations();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ActivatePerfectAutoCombo(bool _bActivate);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ActivateDebugSpeed(bool _bActivate);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ActivateDebugGuardBack(bool _bActivate);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ActivateCycleQuadrant(bool _bActivate);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ActivateCameraLockDebug(bool _bActivate);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ActivateCameraCollisionDebug(bool _bActivate);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ActivateCameraAimDebug(bool _bActivate);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ActivateAutoCombo(bool _bActivate);
    
};

