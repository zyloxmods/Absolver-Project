#include "FightingPlayerController.h"
#include "Net/UnrealNetwork.h"
#include "TargetableWidgetUpdaterComponent.h"
#include "Templates/SubclassOf.h"

AFightingPlayerController::AFightingPlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ClickEventKeys.AddDefaulted(1);
    this->m_DefaultBuild = NULL;
    this->m_bShowAltAttackStartQuadrant = false;
    this->m_bCanOpenMenu = true;
    this->m_bEnvDeathRespawn = false;
    this->m_bRoomClearedRespawn = false;
    this->m_bIsInGroupZoneTransition = false;
    this->m_bDebugDisplayAttackLearning = false;
    this->m_bLoadMenusAsync = true;
    this->m_MenuClasses[0] = NULL;
    this->m_MenuClasses[1] = NULL;
    this->m_MenuClasses[2] = NULL;
    this->m_MenuClasses[3] = NULL;
    this->m_MenuClasses[4] = NULL;
    this->m_MenuClasses[5] = NULL;
    this->m_MenuClasses[6] = NULL;
    this->m_MenuClasses[7] = NULL;
    this->m_MenuClasses[8] = NULL;
    this->m_MenuClasses[9] = NULL;
    this->m_MenuClasses[10] = NULL;
    this->m_MenuClasses[11] = NULL;
    this->m_MenuClasses[12] = NULL;
    this->m_MenuClasses[13] = NULL;
    this->m_MenuClasses[14] = NULL;
    this->m_MenuClasses[15] = NULL;
    this->m_MenuClasses[16] = NULL;
    this->m_MenuClasses[17] = NULL;
    this->m_MenuClasses[18] = NULL;
    this->m_MenuClasses[19] = NULL;
    this->m_MenuClasses[20] = NULL;
    this->m_MenuClasses[21] = NULL;
    this->m_MenuClasses[22] = NULL;
    this->m_MenuClasses[23] = NULL;
    this->m_MenuClasses[24] = NULL;
    this->m_MenuClasses[25] = NULL;
    this->m_MenuAnimationsClass = NULL;
    this->m_MenuInstances[0] = NULL;
    this->m_MenuInstances[1] = NULL;
    this->m_MenuInstances[2] = NULL;
    this->m_MenuInstances[3] = NULL;
    this->m_MenuInstances[4] = NULL;
    this->m_MenuInstances[5] = NULL;
    this->m_MenuInstances[6] = NULL;
    this->m_MenuInstances[7] = NULL;
    this->m_MenuInstances[8] = NULL;
    this->m_MenuInstances[9] = NULL;
    this->m_MenuInstances[10] = NULL;
    this->m_MenuInstances[11] = NULL;
    this->m_MenuInstances[12] = NULL;
    this->m_MenuInstances[13] = NULL;
    this->m_MenuInstances[14] = NULL;
    this->m_MenuInstances[15] = NULL;
    this->m_MenuInstances[16] = NULL;
    this->m_MenuInstances[17] = NULL;
    this->m_MenuInstances[18] = NULL;
    this->m_MenuInstances[19] = NULL;
    this->m_MenuInstances[20] = NULL;
    this->m_MenuInstances[21] = NULL;
    this->m_MenuInstances[22] = NULL;
    this->m_MenuInstances[23] = NULL;
    this->m_MenuInstances[24] = NULL;
    this->m_MenuInstances[25] = NULL;
    this->m_DebugOnlineWidgetClass = NULL;
    this->m_PreviewDataDB = NULL;
    this->m_OutlineMaterial = NULL;
    this->m_OutlineMaterialPVP = NULL;
    this->m_PopupYesNo = NULL;
    this->m_fTimeSinceLastNonRedundantUserInput = 0.00f;
    this->m_MenuAnimationsInstance = NULL;
    this->m_EquipmentSelection = NULL;
    this->m_RespawnPoint = NULL;
    this->m_TagetableWigetUpdaterComponent = CreateDefaultSubobject<UTargetableWidgetUpdaterComponent>(TEXT("TargetableWidgetUpdaterComponent"));
    this->m_PickUpMenuClass = NULL;
    this->m_fPreviewTimerHighlight = 0.10f;
    this->m_fPreviewTimerScrollBox = 0.10f;
    this->m_fFadeTime = 3.00f;
    this->m_ShardUpdateComponentClass = NULL;
    this->m_WaterMarkBP = NULL;
    this->m_WaterMarkScreen = NULL;
    this->m_iCharacterLevel = 0;
    this->m_CairnClass = NULL;
    this->m_DebugOnlineWidget = NULL;
    this->m_MaterialParameterCollectionFXVisualParam = NULL;
}

void AFightingPlayerController::TutoIntroLevelLoaded() {
}

void AFightingPlayerController::TutoCinematicCompleted() {
}

void AFightingPlayerController::TriggerSetGameModeLvl(int32 _iXP) {
}

void AFightingPlayerController::ToggleWaterMark() {
}

void AFightingPlayerController::SwitchToNextWeaponFamily() {
}

void AFightingPlayerController::SuicideAll() {
}

void AFightingPlayerController::Suicide() {
}

void AFightingPlayerController::SpawnFightingAI(ABaseCharacter* _requester) {
}

void AFightingPlayerController::SimulateStartStopJoinCoopSession(bool _bSuccess, const FString& _error) {
}

void AFightingPlayerController::SimulateStartJoinCoopSession() {
}

void AFightingPlayerController::SimulateSetMatchmakingState(EMatchMakingStatus _eNewState) {
}

void AFightingPlayerController::SimulateSessionInvitation() {
}

void AFightingPlayerController::SimulateError(const FString& _error) {
}

void AFightingPlayerController::SimulateEndJoinCoopSession(bool _bSuccess, const FString& _error) {
}

void AFightingPlayerController::SimulateClientReturnToMainMenu(const FString& _reason) {
}

void AFightingPlayerController::ShowQuadrant(uint8 _uiParam) {
}

void AFightingPlayerController::SetSchoolXP(int32 _iSchoolXP) {
}

void AFightingPlayerController::SetHealth(float _fHP) {
}

void AFightingPlayerController::SetGameModeXP(int32 _iXP) {
}

void AFightingPlayerController::SetFaction(uint8 _uiFaction) {
}

void AFightingPlayerController::SetAchievementProgression_PlayerKill(int32 _iKilledPlayers) {
}

void AFightingPlayerController::SetAchievementProgression_Cairns(int32 _iOpenedCairns) {
}

void AFightingPlayerController::SessionTimeManagerActivateDebug(bool _bActivate) {
}

void AFightingPlayerController::ServerUseInterractiveObject_Implementation(bool _bSuccess, UInteractionObjectComponent* _componentUsed) {
}
bool AFightingPlayerController::ServerUseInterractiveObject_Validate(bool _bSuccess, UInteractionObjectComponent* _componentUsed) {
    return true;
}

void AFightingPlayerController::ServerUpdateCoopGroup_Implementation() {
}
bool AFightingPlayerController::ServerUpdateCoopGroup_Validate() {
    return true;
}

void AFightingPlayerController::ServerSuicideAll_Implementation() {
}
bool AFightingPlayerController::ServerSuicideAll_Validate() {
    return true;
}

void AFightingPlayerController::ServerShowSpawnedAI_Implementation(ABaseCharacter* _AISpawned) {
}
bool AFightingPlayerController::ServerShowSpawnedAI_Validate(ABaseCharacter* _AISpawned) {
    return true;
}

void AFightingPlayerController::ServerSetRoomClearedRespawn_Implementation(bool _bValue) {
}
bool AFightingPlayerController::ServerSetRoomClearedRespawn_Validate(bool _bValue) {
    return true;
}

void AFightingPlayerController::ServerSetInGroupZoneTransition_Implementation(bool _bValue) {
}
bool AFightingPlayerController::ServerSetInGroupZoneTransition_Validate(bool _bValue) {
    return true;
}

void AFightingPlayerController::ServerSetEnvDeathRespawn_Implementation(bool _bValue) {
}
bool AFightingPlayerController::ServerSetEnvDeathRespawn_Validate(bool _bValue) {
    return true;
}

void AFightingPlayerController::ServerSendLocalCoopGroup_Implementation(const TArray<FCoopGroup>& _coopGroup) {
}
bool AFightingPlayerController::ServerSendLocalCoopGroup_Validate(const TArray<FCoopGroup>& _coopGroup) {
    return true;
}

void AFightingPlayerController::ServerRequestTimeSync_Implementation(uint8 _uiClientRequestID) {
}
bool AFightingPlayerController::ServerRequestTimeSync_Validate(uint8 _uiClientRequestID) {
    return true;
}

void AFightingPlayerController::ServerReadyForReturningPvEWithCoopGroup_Implementation() {
}
bool AFightingPlayerController::ServerReadyForReturningPvEWithCoopGroup_Validate() {
    return true;
}

void AFightingPlayerController::ServerNotifyGameModeAnswer_Implementation(EGameModePlayerAnswers _eAnswer) {
}
bool AFightingPlayerController::ServerNotifyGameModeAnswer_Validate(EGameModePlayerAnswers _eAnswer) {
    return true;
}

void AFightingPlayerController::ServerLeaderAskForForReturningToPvE_Implementation() {
}
bool AFightingPlayerController::ServerLeaderAskForForReturningToPvE_Validate() {
    return true;
}

void AFightingPlayerController::ServerFirstRequestTimeSync_Implementation(uint8 _uiClientRequestID) {
}
bool AFightingPlayerController::ServerFirstRequestTimeSync_Validate(uint8 _uiClientRequestID) {
    return true;
}

void AFightingPlayerController::ServerDropItem_Implementation() {
}
bool AFightingPlayerController::ServerDropItem_Validate() {
    return true;
}

void AFightingPlayerController::ServerBPF_SetPlayerStartAtCheckpoint_Implementation(AAltar* _start) {
}
bool AFightingPlayerController::ServerBPF_SetPlayerStartAtCheckpoint_Validate(AAltar* _start) {
    return true;
}

void AFightingPlayerController::ServerBPF_NotifyGameModeAnswer(EGameModePlayerAnswers _eAnswer) {
}

void AFightingPlayerController::ServerAcceptGroupZoning_Implementation() {
}
bool AFightingPlayerController::ServerAcceptGroupZoning_Validate() {
    return true;
}

void AFightingPlayerController::Server_UsedAltar_Implementation(AAltar* _altar) {
}
bool AFightingPlayerController::Server_UsedAltar_Validate(AAltar* _altar) {
    return true;
}

void AFightingPlayerController::Server_SpawnFightingAI_Implementation(AAISpawner* _spawner, FTransform _transform, TSubclassOf<AFightingCharacter> _classToSpawn) {
}
bool AFightingPlayerController::Server_SpawnFightingAI_Validate(AAISpawner* _spawner, FTransform _transform, TSubclassOf<AFightingCharacter> _classToSpawn) {
    return true;
}

void AFightingPlayerController::Server_ChangingZone_Implementation(uint8 _uiNewZone) {
}
bool AFightingPlayerController::Server_ChangingZone_Validate(uint8 _uiNewZone) {
    return true;
}

void AFightingPlayerController::SchoolSetFightingStyle(int32 _iID) {
}

void AFightingPlayerController::SchoolBecomeStudent(bool _bUnlock) {
}

void AFightingPlayerController::SchoolBecomeMentor(bool _bUnlock) {
}

void AFightingPlayerController::ResetAchievementProgression_PlayerKill() {
}

void AFightingPlayerController::ResetAchievementProgression_Cairns() {
}

void AFightingPlayerController::ResetAchievementProgression_AIKilling() {
}

void AFightingPlayerController::ResetAchievementProgression() {
}

void AFightingPlayerController::RemoveQuestItemAt(int32 _iQuestItemIndex) {
}

void AFightingPlayerController::RemovePlayer() {
}

void AFightingPlayerController::PrintStatsWithBonus() {
}

void AFightingPlayerController::PrintGameModeLevel() {
}

void AFightingPlayerController::PrintDamage(const int32 _iAgilityLevel, const int32 _iStrengthLevel, const float _WR, const EAttributeScales _eAgilityScale, const EAttributeScales _eStrengthScale, const EAttributeScales _eWRScale, const float _fBaseAttackDamage) const {
}

void AFightingPlayerController::PrintAttackDamage(const int32 _iAgilityLevel, const int32 _iStrengthLevel, const float _WR, const FName _AttackName) const {
}

void AFightingPlayerController::PerformEmoteAction(EEmoteAction _eEmoteAction) {
}

void AFightingPlayerController::PawnDestructionOver(AActor* _destroyedActor) {
}

void AFightingPlayerController::OnRestartGame() {
}

void AFightingPlayerController::OnRep_IsInGroupZoneTransition() {
}


void AFightingPlayerController::OnPlayerProgressionUpdated() {
}

void AFightingPlayerController::OnPlayerNotifyProgressionRewardUnlocked(ECharacterProgressionRewardTypes _eRewardType, const FCharacterProgressionReward& _reward, UCharacterProgressionUnlockDB* _unlock) {
}

void AFightingPlayerController::OnPickUpDestroyed(UInteractionObjectComponent* _component) {
}

void AFightingPlayerController::OnPawnDangerStateChanged(EDangerStates _ePreviousDangerState, EDangerStates _eNewDangerState) {
}

void AFightingPlayerController::OnOnlineStatusChanged(ESCOnlineStatus _eNewStatus, bool _bInInvitation) {
}

void AFightingPlayerController::OnKilledSomething_LocalOnly(AActor* _victim, bool _bIsOnlyAssist, bool _bKillingBlow, AActor* _instigator) {
}



void AFightingPlayerController::OnAttackDiscovered(const FAttackDataRow& _attack, AFightingCharacter* _opponent) {
}


void AFightingPlayerController::Mute(bool bMute) {
}

void AFightingPlayerController::MulticastReturnToPreviousMap_Implementation() {
}

void AFightingPlayerController::LogQuestInventory(bool _bDebugOnScreen) {
}

void AFightingPlayerController::LeaveSchool() {
}

void AFightingPlayerController::IntroLevelLoaded() {
}

void AFightingPlayerController::IntroCompleted() {
}

void AFightingPlayerController::InitSeamlessCharacter() {
}

void AFightingPlayerController::InitCharacterAndSave() {
}

void AFightingPlayerController::GiveFocusToGameViewport() {
}

void AFightingPlayerController::GetAllEquipment() {
}

void AFightingPlayerController::ForceCameraOffsetAt(bool _bActivate, float _fRatio) {
}

void AFightingPlayerController::ExecHackGameModeReset() {
}

void AFightingPlayerController::EquipFromInventory(uint32 _iIndexInInventory, int32 _iSlot) {
}

void AFightingPlayerController::DumpPlayerInfo() {
}

void AFightingPlayerController::DumpAttackLinkFrames(bool _bFullCombo) {
}

void AFightingPlayerController::DebugTutorials(FName _ActionName) {
}

void AFightingPlayerController::DebugToggleFollowPlayer(int32 _iPlayerIndex) {
}

bool AFightingPlayerController::DebugPlayAttack(FName _AttackID) {
    return false;
}

void AFightingPlayerController::DebugPlayAllAttacks(bool _bStart) {
}

void AFightingPlayerController::DebugJoinSchool(int32 _iSchoolID) {
}

void AFightingPlayerController::DebugGainPrestigePoints(int32 _iCount) {
}

void AFightingPlayerController::DebugGainFragments(int32 _iCount) {
}


void AFightingPlayerController::ClientSendNewCoopGroup_Implementation(const TArray<FCoopGroup>& _coopGroup) {
}
bool AFightingPlayerController::ClientSendNewCoopGroup_Validate(const TArray<FCoopGroup>& _coopGroup) {
    return true;
}

void AFightingPlayerController::ClientSendEntireCoopGroup_Implementation(const TArray<FCoopGroup>& _coopGroup) {
}
bool AFightingPlayerController::ClientSendEntireCoopGroup_Validate(const TArray<FCoopGroup>& _coopGroup) {
    return true;
}

void AFightingPlayerController::ClientRespawnLocalAI_Implementation(AAISpawner* _spawner) {
}

void AFightingPlayerController::ClientRequestTimeSync_Implementation(uint8 _uiClientRequestID, int64 _serverTimeTicks) {
}

void AFightingPlayerController::ClientRequestGroupZoning_Implementation() {
}

void AFightingPlayerController::ClientReAskForGameModeAnswer_Implementation(EGameModePlayerAnswers _eAnswerWaitingFor) {
}
bool AFightingPlayerController::ClientReAskForGameModeAnswer_Validate(EGameModePlayerAnswers _eAnswerWaitingFor) {
    return true;
}

void AFightingPlayerController::ClientReadyForReturningPvEWithCoopGroup_Implementation() {
}
bool AFightingPlayerController::ClientReadyForReturningPvEWithCoopGroup_Validate() {
    return true;
}

void AFightingPlayerController::ClientOnUnspawn_Implementation() {
}

void AFightingPlayerController::ClientLeaderAskForReturningPvEWithCoopGroup_Implementation() {
}
bool AFightingPlayerController::ClientLeaderAskForReturningPvEWithCoopGroup_Validate() {
    return true;
}

void AFightingPlayerController::ClientLeaderAloneWhenQuittingAsGroup_Implementation() {
}
bool AFightingPlayerController::ClientLeaderAloneWhenQuittingAsGroup_Validate() {
    return true;
}

void AFightingPlayerController::ClientKillSomething_Implementation(AActor* _victim, AActor* _killer, bool _bAssistOnly, bool _bKillingBlow) {
}

void AFightingPlayerController::ClientFirstRequestTimeSync_Implementation(uint8 _uiClientRequestID, int64 _serverTimeTicks) {
}

void AFightingPlayerController::Client_StayInZone_Implementation() {
}

void AFightingPlayerController::Client_RestartMatch_Implementation() {
}

void AFightingPlayerController::Client_ReceiveAllyHeal_Implementation() {
}

void AFightingPlayerController::Client_MatchIntro_Implementation() {
}

void AFightingPlayerController::Client_GiveLoot_Implementation(ULootComponent* _component) {
}

void AFightingPlayerController::ClearQuestInventory() {
}

void AFightingPlayerController::ClearInventory() {
}

void AFightingPlayerController::CheckAttackAnimations() {
}

void AFightingPlayerController::ChangeCurrentInteractionObjectComponent(UInteractionObjectComponent* _objectComp, bool _bNewComponent) {
}

bool AFightingPlayerController::BPF_WantsOffline() {
    return false;
}

bool AFightingPlayerController::BPF_WantQuitWithCoopGroup() {
    return false;
}

void AFightingPlayerController::BPF_ValidationReceived(bool _bResult) {
}

void AFightingPlayerController::BPF_UnlockAllEmotes() {
}

void AFightingPlayerController::BPF_TreatGameModeAnswerWaitingFor() {
}

void AFightingPlayerController::BPF_ToggleMouseCaptureMode() {
}

void AFightingPlayerController::BPF_ShowAltarOnHUD() {
}

bool AFightingPlayerController::BPF_ShouldDisplayInteractionText(bool& _bOutCanInteract) {
    return false;
}

void AFightingPlayerController::BPF_SetWantsRestartBossSituation(const bool _bRestartBossSituation) {
}

void AFightingPlayerController::BPF_SetWantsRespawnOnStartPoint(bool _bRespwnOnStartPoint) {
}

void AFightingPlayerController::BPF_SetWantsLeaveBossSituation(const bool _bLeaveBossSituation) {
}

void AFightingPlayerController::BPF_SetWantQuitWithCoopGroup(bool _bWantToQuitWithCoopGroup) {
}

void AFightingPlayerController::BPF_SetTutorialHUD(UTutorialHUD* _tutorialHUD) {
}

void AFightingPlayerController::BPF_SetTrainingRequest(ETrainingRequest _eRequest) {
}

void AFightingPlayerController::BPF_SetSwitchTargetOnAttack(bool _bSwitchTargetOnAttack) {
}

void AFightingPlayerController::BPF_SetShouldNotifySchoolUpdate(bool _bNotify) {
}

void AFightingPlayerController::BPF_SetPlayerCombatStyle(uint8 _uiNewCombatStyle, EStatsAppliedMode _eStatsAppliedMode) {
}

void AFightingPlayerController::BPF_SetInvertCameraYAxis(bool _bInvert) {
}

void AFightingPlayerController::BPF_SetInvertCameraXAxis(bool _bInvert) {
}

void AFightingPlayerController::BPF_SetInUIInputMode(bool _bActivate, bool _bUIOnly) {
}

void AFightingPlayerController::BPF_SetGameplayOptionValueAsNormalizedValue(EIntergerGameplayOptionTypes _eOptionType, float _fOptionSliderValue) {
}

void AFightingPlayerController::BPF_SetGameplayOptionValue(EIntergerGameplayOptionTypes _eOptionType, int32 _iOptionValue) {
}

void AFightingPlayerController::BPF_SetEmoteWheel(UEmoteWheel* _emoteWheel) {
}

void AFightingPlayerController::BPF_SetEmoteLock(bool _bLock, const FName& _emoteName) {
}

void AFightingPlayerController::BPF_SetEmissiveParamOnPawn(float _fParamValue) {
}

void AFightingPlayerController::BPF_SetCurrentMenu(EMenuEnum _eMenu) {
}

void AFightingPlayerController::BPF_SetCombo(EWeaponFamilies _eFamily, int32 _iComboIndex, const FComboSave& _OutResult) {
}

void AFightingPlayerController::BPF_SendGameModeRequestCancel(EGameModeTypes _eGameModeType) {
}

void AFightingPlayerController::BPF_SaveCombo() {
}

void AFightingPlayerController::BPF_ResetComboForActiveWeaponFamily() {
}

void AFightingPlayerController::BPF_RemoveMenuFromStack(EMenuEnum _eMenu) {
}

UMenuWidget* AFightingPlayerController::BPF_PushMenu(EMenuEnum _eMenuEnum) {
    return NULL;
}

void AFightingPlayerController::BPF_PopMenuStack(EMenuEnum _eMenuEnum, bool _bIncluded) {
}

void AFightingPlayerController::BPF_PopMenu(bool _bRestoreFocus) {
}

void AFightingPlayerController::BPF_OpenCloseEmoteWheel(bool _bOpen) {
}

void AFightingPlayerController::BPF_LoadComboFromName(FName _comboName, EWeaponFamilies _eFamily, EStatsAppliedMode _eMode) {
}

bool AFightingPlayerController::BPF_IsNotificationRewardNew(ECharacterProgressionRewardTypes _eReward) {
    return false;
}

bool AFightingPlayerController::BPF_IsMenuInStack(EMenuEnum _eMenu) {
    return false;
}

bool AFightingPlayerController::BPF_IsMenuEnabled(EMenuEnum _eMenu) const {
    return false;
}

bool AFightingPlayerController::BPF_IsKeyBindedToInputAction(FKey _key, InputAction _eInputAction) {
    return false;
}

bool AFightingPlayerController::BPF_IsInGroupZoneTransition() const {
    return false;
}

bool AFightingPlayerController::BPF_IsInCoopGameMode() const {
    return false;
}

bool AFightingPlayerController::BPF_IsInBossSituation() const {
    return false;
}

bool AFightingPlayerController::BPF_IsCoopGameModeLeader() const {
    return false;
}

void AFightingPlayerController::BPF_HideAltarOnHUD() {
}

bool AFightingPlayerController::BPF_GetWantRespawnOrder() const {
    return false;
}

UTutorialHUD* AFightingPlayerController::BPF_GetTutorialHUD() const {
    return NULL;
}

UMenuWidget* AFightingPlayerController::BPF_GetTopMenuInstance() {
    return NULL;
}

EMenuEnum AFightingPlayerController::BPF_GetTopMenu() {
    return EMenuEnum::InGameMenu;
}

bool AFightingPlayerController::BPF_GetSwitchTargetOnAttack() {
    return false;
}

bool AFightingPlayerController::BPF_GetShouldNotifySchoolUpdate() {
    return false;
}

AAltar* AFightingPlayerController::BPF_GetRespawnPoint() const {
    return NULL;
}

UPopupWidget* AFightingPlayerController::BPF_GetPopupYesNo() {
    return NULL;
}

UMenuWidget* AFightingPlayerController::BPF_GetParentMenu(EMenuEnum& _eOutMenu, int32 _iOffset) {
    return NULL;
}

UMenuWidget* AFightingPlayerController::BPF_GetOrCreateMenuInstance(EMenuEnum _eMenuEnum) {
    return NULL;
}

void AFightingPlayerController::BPF_GetOpponentAdversarialTeamInfos(FAdversarialTeamInfos& _infos) {
}

void AFightingPlayerController::BPF_GetMyAdversarialTeamInfos(FAdversarialTeamInfos& _infos) {
}

UMenuWidget* AFightingPlayerController::BPF_GetMenuInstance(EMenuEnum _eMenu) {
    return NULL;
}

UUserWidget* AFightingPlayerController::BPF_GetMenuAnimations() {
    return NULL;
}

bool AFightingPlayerController::BPF_GetMeditationTransitionInProgress() const {
    return false;
}

FName AFightingPlayerController::BPF_GetLastGamepadControllerType() {
    return NAME_None;
}

bool AFightingPlayerController::BPF_GetInvertCameraYAxis() {
    return false;
}

bool AFightingPlayerController::BPF_GetInvertCameraXAxis() {
    return false;
}

float AFightingPlayerController::BPF_GetGameplayOptionValueAsNormalizedValue(EIntergerGameplayOptionTypes _eOptionType) {
    return 0.0f;
}

int32 AFightingPlayerController::BPF_GetGameplayOptionValue(EIntergerGameplayOptionTypes _eOptionType) {
    return 0;
}

float AFightingPlayerController::BPF_GetGameplayOptionNormalizedValueStep(EIntergerGameplayOptionTypes _eOptionType) {
    return 0.0f;
}

float AFightingPlayerController::BPF_GetGameplayOptionMinValue(EIntergerGameplayOptionTypes _eOptionType) {
    return 0.0f;
}

float AFightingPlayerController::BPF_GetGameplayOptionMaxValue(EIntergerGameplayOptionTypes _eOptionType) {
    return 0.0f;
}

float AFightingPlayerController::BPF_GetGameplayOptionFactor(EIntergerGameplayOptionTypes _eOptionType) {
    return 0.0f;
}

EGameModePlayerAnswers AFightingPlayerController::BPF_GetGameModeAnswerWaitingFor() const {
    return EGameModePlayerAnswers::None;
}

float AFightingPlayerController::BPF_GetFadeTime() const {
    return 0.0f;
}

UEmoteWheel* AFightingPlayerController::BPF_GetEmoteWheel() const {
    return NULL;
}

EMenuEnum AFightingPlayerController::BPF_GetCurrentMenu() const {
    return EMenuEnum::InGameMenu;
}

UInteractionObjectComponent* AFightingPlayerController::BPF_GetCurrentInteractionObjectComponent() {
    return NULL;
}

ECoopGameModeAnswerStatus AFightingPlayerController::BPF_GetCurrentGameModeAnswerStatus() const {
    return ECoopGameModeAnswerStatus::None;
}

int32 AFightingPlayerController::BPF_GetCurrentComboIndex(EWeaponFamilies _eFamily) {
    return 0;
}

void AFightingPlayerController::BPF_GetCurrentCombo(EWeaponFamilies _eFamily, FComboSave& _OutResult, bool& _bOutSuccess, EStatsAppliedMode _eMode) {
}

ECoopGameModeAnswerStatus AFightingPlayerController::BPF_GetCoopGameModeAnswerStatus(EGameModeTypes _eGameMode) const {
    return ECoopGameModeAnswerStatus::None;
}

int32 AFightingPlayerController::BPF_GetComboIndex(FName _comboName, EWeaponFamilies _eFamily) {
    return 0;
}

void AFightingPlayerController::BPF_GetComboByName(EWeaponFamilies _eFamily, FName _name, FComboSave& _OutResult, bool& _bOutSuccess) {
}

void AFightingPlayerController::BPF_GetCombo(EWeaponFamilies _eFamily, int32 _iComboIndex, FComboSave& _OutResult, bool& _bOutSuccess) {
}

FString AFightingPlayerController::BPF_GetCharacterName() const {
    return TEXT("");
}

FAdversarialTeamInfos AFightingPlayerController::BPF_GetAdversarialTeamInfos(uint8 _uiTeam) {
    return FAdversarialTeamInfos{};
}

void AFightingPlayerController::BPF_EnterSpectatorMode() {
}

void AFightingPlayerController::BPF_DumpCombo() {
}

void AFightingPlayerController::BPF_DumpAllGearDataAsset() {
}

void AFightingPlayerController::BPF_DismissNewProgressionRewards(ECharacterProgressionRewardTypes _eReward) {
}

void AFightingPlayerController::BPF_DebugUnlockFightingStyles() {
}

void AFightingPlayerController::BPF_DebugSetAbsolverStatus(bool _bActivate) {
}

void AFightingPlayerController::BPF_DebugForcePerfectLink(bool _bActivate) {
}

void AFightingPlayerController::BPF_DebugAutoTargetAttackTicketAI(bool _bActivate) {
}

void AFightingPlayerController::BPF_ClosePickUpMenu() {
}

void AFightingPlayerController::BPF_ClipBoardToCombo() {
}

void AFightingPlayerController::BPF_ClearMoveset() {
}

void AFightingPlayerController::BPF_ClearMenuStack() {
}

void AFightingPlayerController::BPF_ChangeShortcutToSubzone(uint8 _uiZoneID, uint8 _uiGateID, bool _bOpen) {
}

void AFightingPlayerController::BPF_ChangeOfflineModeInProfile(bool _bOffline) {
}

void AFightingPlayerController::BPF_CacheMenuIcons() {
}

void AFightingPlayerController::BPF_BuildAdversarialTeamInfos() {
}

void AFightingPlayerController::BPF_BuildAdversarialPlayerInfos() {
}

void AFightingPlayerController::BPF_BackupComboForActiveWeaponFamily() {
}

void AFightingPlayerController::BPF_AskReturnToPvEWithCoopGroup() {
}

void AFightingPlayerController::BPF_AddAllWeaponInInventory() {
}

void AFightingPlayerController::BPF_ActivateHitDetailsDebug(bool _bActivate) {
}




bool AFightingPlayerController::BPE_ShouldEnablePostProcessComponent_Implementation() const {
    return false;
}



















void AFightingPlayerController::BakeAttackAnimations() {
}

void AFightingPlayerController::ActivatePerfectAutoCombo(bool _bActivate) {
}

void AFightingPlayerController::ActivateDebugSpeed(bool _bActivate) {
}

void AFightingPlayerController::ActivateDebugGuardBack(bool _bActivate) {
}

void AFightingPlayerController::ActivateCycleQuadrant(bool _bActivate) {
}

void AFightingPlayerController::ActivateCameraLockDebug(bool _bActivate) {
}

void AFightingPlayerController::ActivateCameraCollisionDebug(bool _bActivate) {
}

void AFightingPlayerController::ActivateCameraAimDebug(bool _bActivate) {
}

void AFightingPlayerController::ActivateAutoCombo(bool _bActivate) {
}

void AFightingPlayerController::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFightingPlayerController, m_bEnvDeathRespawn);
    DOREPLIFETIME(AFightingPlayerController, m_bRoomClearedRespawn);
    DOREPLIFETIME(AFightingPlayerController, m_bIsInGroupZoneTransition);
    DOREPLIFETIME(AFightingPlayerController, m_iCharacterLevel);
    DOREPLIFETIME(AFightingPlayerController, m_KilledBy);
}


