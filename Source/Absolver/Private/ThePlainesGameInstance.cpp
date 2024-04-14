#include "ThePlainesGameInstance.h"
#include "AIManager.h"
#include "PredictionManager.h"
#include "SCTrackingManager.h"
#include "SocialManager.h"
#include "TicketManager.h"

UThePlainesGameInstance::UThePlainesGameInstance() {
    this->m_AltarClass = NULL;
    this->m_WeaponDataTable = NULL;
    this->m_EquipmentDataTable = NULL;
    this->m_AttackDataTable = NULL;
    this->m_iMaxCoopPlayerCount = 3;
    this->m_iMaxRecentPlayersCount = 20;
    this->m_MenuDB = NULL;
    this->m_DummiesDB = NULL;
    this->m_ItemsDB = NULL;
    this->m_InputManager = NULL;
    this->m_FactionsManager = NULL;
    this->m_SCCheatManager = NULL;
    this->m_AITicketManagerClass = UTicketManager::StaticClass();
    this->m_TicketManager = NULL;
    this->m_AIManagerClass = UAIManager::StaticClass();
    this->m_PredictionManagerClass = UPredictionManager::StaticClass();
    this->m_TrackingManagerClass = USCTrackingManager::StaticClass();
    this->m_CinematicManager = NULL;
    this->m_MentoringManager = NULL;
    this->m_MentoringManagerClass = NULL;
    this->m_SocialManager = NULL;
    this->m_SocialManagerClass = USocialManager::StaticClass();
    this->m_MessageManager = NULL;
    this->m_AIManager = NULL;
    this->m_sessionManager = NULL;
    this->m_CurrentSave = NULL;
    this->m_NetworkSettingDB = NULL;
    this->m_MapConfigOfficialDB = NULL;
    this->m_GameModesMatchmakingDB = NULL;
    this->m_SessionTimeManager = NULL;
    this->m_CurrentGameModeClass = NULL;
}

void UThePlainesGameInstance::TriggerUpdateSchoolInfo() {
}

void UThePlainesGameInstance::TriggerUnlockPveDepth(uint8 _uiDepth) {
}

void UThePlainesGameInstance::TriggerSubmitMentoringMatchResult(bool _bVictory) {
}

void UThePlainesGameInstance::TriggerStartPlayTogetherAsHost() {
}

void UThePlainesGameInstance::TriggerSimulateSeasonEnd() {
}

void UThePlainesGameInstance::TriggerSimulateNewSchoolMembers(int32 _iMembers, int32 _iDisciples) {
}

void UThePlainesGameInstance::TriggerSimulateAutoConnect(int32 _iCount, int32 _iDelay, int32 _iFrequency) {
}

void UThePlainesGameInstance::TriggerSetZone(int32 _z) {
}

void UThePlainesGameInstance::TriggerSetOfflineMode(bool _bOfflineMode) {
}

void UThePlainesGameInstance::TriggerSetMentoringServer(FString& _server) {
}

void UThePlainesGameInstance::TriggerSetLogServer(FString& _server) {
}

void UThePlainesGameInstance::TriggerSetLevelAndZone(int32 _ilevel, int32 _iZone) {
}

void UThePlainesGameInstance::TriggerSetForcePVESeed(bool _bForce, int32 _iSeed) {
}

void UThePlainesGameInstance::TriggerSetBinderMessageLag(float _fMessageLag) {
}

void UThePlainesGameInstance::TriggerSet3v3TimeLeft(float _fTimeLeft) {
}

void UThePlainesGameInstance::TriggerResetSchoolContent() {
}

void UThePlainesGameInstance::TriggerResetConnectionAfterDelay(int32 _iDelay) {
}

void UThePlainesGameInstance::TriggerPrintPVPMaps() {
}

void UThePlainesGameInstance::TriggerMentoringStartSeason(uint16 _uiStartDelay, uint16 _uiEndDelay) {
}

void UThePlainesGameInstance::TriggerMentoringSetScore(uint16 _uiScore) {
}

void UThePlainesGameInstance::TriggerMentoringSetSchoolXP(uint16 _uiSchoolXP) {
}

void UThePlainesGameInstance::TriggerMentoringPrintRequests(bool _bEnable) {
}

void UThePlainesGameInstance::TriggerMentoringGenerateContent(uint16 _uiUsers, uint16 _uiSchools, uint16 _uiAssignCount, uint16 _uiLeaderboardCount) {
}

void UThePlainesGameInstance::TriggerMentoringDelayRequests(float _fDelay) {
}

void UThePlainesGameInstance::TriggerMentoringBlockRequests(bool _bBlock) {
}

void UThePlainesGameInstance::TriggerLockPveDepth(uint8 _uiDepth) {
}

void UThePlainesGameInstance::TriggerListSchoolMembers(int32 iIndex, int32 iCount) {
}

void UThePlainesGameInstance::TriggerListAllPlayerSchools() {
}

void UThePlainesGameInstance::TriggerLaunchCinematic(int32 _iCinematic) {
}

void UThePlainesGameInstance::TriggerJoinFriend(uint8 _uiPlatform, int32 _iUserID) {
}

void UThePlainesGameInstance::TriggerJoinFakeUserSchool(int32 _iFakeUser) {
}

void UThePlainesGameInstance::TriggerJoinCoop(int64 _ID) {
}

void UThePlainesGameInstance::TriggerGameMode(int32 _m) {
}

void UThePlainesGameInstance::TriggerForceUserID(uint8 _uiPlatform, uint64 _uiID) {
}

void UThePlainesGameInstance::TriggerForceServer() {
}

void UThePlainesGameInstance::TriggerForceSchoolChallenge(bool _bForce) {
}

void UThePlainesGameInstance::TriggerForcePVPMap(int32 _iMap) {
}

void UThePlainesGameInstance::TriggerForceOnline(bool _bOnline) {
}

void UThePlainesGameInstance::TriggerForceGSNetworkFailure(bool _bValue) {
}

void UThePlainesGameInstance::TriggerFetchMentoringManifest() {
}

void UThePlainesGameInstance::TriggerEnd3v3(int32 _iWinningTeam) {
}

void UThePlainesGameInstance::TriggerEnd1v1(int32 _iWinningTeam) {
}

void UThePlainesGameInstance::TriggerDisableMigration(bool _bValue) {
}

void UThePlainesGameInstance::TriggerDisableDamageBonusOnGleam(bool _bDisable) {
}

void UThePlainesGameInstance::TriggerCreateSchool() {
}

void UThePlainesGameInstance::TriggerCrashAfterDelay(int32 _iDelay) {
}

void UThePlainesGameInstance::TriggerConvertSchoolIDToReadableID(uint64 _ID) {
}

void UThePlainesGameInstance::TriggerConvertReadableIDToSchoolID(const FString& _ID) {
}

void UThePlainesGameInstance::TriggerClearMentoringCache() {
}

void UThePlainesGameInstance::TriggerChangeSubZone(uint8 _uiSubZoneID) {
}

void UThePlainesGameInstance::TriggerChangeLevel(int32 _l) {
}

void UThePlainesGameInstance::TriggerBreakComWithDispatcher(bool _bBreak) {
}

void UThePlainesGameInstance::TriggerAchievementProgress(const FString& _achievementId, float _fCompletionPercent) {
}

void UThePlainesGameInstance::TriggerAcceptPlayers(uint8 _b) {
}

void UThePlainesGameInstance::Trigger3v3Overtime() {
}

void UThePlainesGameInstance::SetCurrentSave(USaveThePlaines* _save) {
}

void UThePlainesGameInstance::OnPlayerRelationshipChanged(AActor* _shifter, AActor* _shiftTarget, ERelationshipTypes previousRelation, ERelationshipTypes _enewRelation) {
}

void UThePlainesGameInstance::OnGroupZoningPlayerStateDestoyed(AActor* _destroyedActor, TEnumAsByte<EEndPlayReason::Type> _eEndPlayReason) {
}

void UThePlainesGameInstance::OnGroupPlayerStateDidZone(AActor* _actor, TEnumAsByte<EEndPlayReason::Type> _eEndPlayReason) {
}

void UThePlainesGameInstance::OnCurrentZoneChanged(int32 _zone) {
}

void UThePlainesGameInstance::JoinCoopSession(const FString& _password) {
}

USaveThePlaines* UThePlainesGameInstance::GetSave() {
    return NULL;
}

AAltar* UThePlainesGameInstance::GetMainAltarFromMatchmakingZone(uint8 _uiZone) {
    return NULL;
}

USCLocalPlayer* UThePlainesGameInstance::GetLocalPlayer() {
    return NULL;
}

void UThePlainesGameInstance::GenerateSchoolMembers(int32 _iCount, const FString& _prefix) {
}

void UThePlainesGameInstance::ChangeLevelAndZone(int32 _LevelID, int32 _ZoneID, uint8 _uiSubZoneID, uint8 _uiReachableSubZoneMask) {
}

bool UThePlainesGameInstance::BPF_TryCancelMatchmaking() {
    return false;
}

void UThePlainesGameInstance::BPF_SwitchToOfflineMode() {
}

void UThePlainesGameInstance::BPF_StopSequence(ALevelSequenceActor* _levelSequenceActor) {
}

void UThePlainesGameInstance::BPF_StartOnlineGame(const FString& _sessionLevelName, UNetworkSettingDB* _NetworksSettingsDB) {
}

void UThePlainesGameInstance::BPF_StartOfflineGame(const FString& _map) {
}

bool UThePlainesGameInstance::BPF_StartMatchMaking(EGameModeTypes _eType) {
    return false;
}

bool UThePlainesGameInstance::BPF_StartGameFromMatchMaking() {
    return false;
}

void UThePlainesGameInstance::BPF_SetGameMode(int32 _ModeID) {
}

void UThePlainesGameInstance::BPF_SetDebugFlow(bool _bDebugFlow) {
}

bool UThePlainesGameInstance::BPF_SetCoopSessionPassword(const FString& _sessionPassword) {
    return false;
}

void UThePlainesGameInstance::BPF_SetCanJoinCoopSessionByInvitation(bool _bValue) {
}

void UThePlainesGameInstance::BPF_SendSessionInvitationToPlayer(const FBPUniqueNetId& _friend, const FString& _playerName) {
}

bool UThePlainesGameInstance::BPF_ReturnToPreviousMap(AFightingPlayerController* _controller) {
    return false;
}

void UThePlainesGameInstance::BPF_RequestLoadSave(const FString& _saveName, APlayerController* _controller) {
}

void UThePlainesGameInstance::BPF_RaiseError(const FSCError& _error) {
}

void UThePlainesGameInstance::BPF_PlaySequence(ALevelSequenceActor* _levelSequenceActor, bool _bHideLoadingScreen) {
}

void UThePlainesGameInstance::BPF_MatchMakingCanceled() {
}

void UThePlainesGameInstance::BPF_LogOut() {
}

void UThePlainesGameInstance::BPF_LoadProfile(APlayerController* _controller) {
}

void UThePlainesGameInstance::BPF_JoinOnlineGame(const FString& _uniqueId) {
}

bool UThePlainesGameInstance::BPF_IsTravellingToInvitation() const {
    return false;
}

bool UThePlainesGameInstance::BPF_IsStartingPlayTogether() const {
    return false;
}

bool UThePlainesGameInstance::BPF_IsPveGameModeAvailableForAll() const {
    return false;
}

bool UThePlainesGameInstance::BPF_IsPveGameModeAvailable() const {
    return false;
}

bool UThePlainesGameInstance::BPF_IsOnline() const {
    return false;
}

bool UThePlainesGameInstance::BPF_IsMatchMakingInProgress() const {
    return false;
}

bool UThePlainesGameInstance::BPF_IsMatchMakingCancelling() const {
    return false;
}

bool UThePlainesGameInstance::BPF_IsLoadTaskRunning() {
    return false;
}

bool UThePlainesGameInstance::BPF_IsJoiningCoopSessionByInvitation() const {
    return false;
}

bool UThePlainesGameInstance::BPF_IsDepthSelectedForGameModePvE(uint8 _uiDepth) {
    return false;
}

bool UThePlainesGameInstance::BPF_IsDepthMaskValidForGameModePvE(bool _bComputeWithCoopMember) const {
    return false;
}

bool UThePlainesGameInstance::BPF_IsDepthAvailable(uint8 _uiDepth, bool _bComputeWithCoopMember) const {
    return false;
}

bool UThePlainesGameInstance::BPF_IsDebugFlow() const {
    return false;
}

bool UThePlainesGameInstance::BPF_IsCurrentMatchMakingCoop() const {
    return false;
}

void UThePlainesGameInstance::BPF_HideLoadingScreen(bool _bFade, float _fFadeDuration) {
}

bool UThePlainesGameInstance::BPF_HasPendingTravel() const {
    return false;
}

FString UThePlainesGameInstance::BPF_GetStartMap() const {
    return TEXT("");
}

ESessionState UThePlainesGameInstance::BPF_GetSessionState() {
    return ESessionState::PVE;
}

FString UThePlainesGameInstance::BPF_GetPlayerId(ULocalPlayer* _player) {
    return TEXT("");
}

int32 UThePlainesGameInstance::BPF_GetPasswordSizeMin() {
    return 0;
}

int32 UThePlainesGameInstance::BPF_GetPasswordSizeMax() {
    return 0;
}

ESCOnlineStatus UThePlainesGameInstance::BPF_GetOnlineStatus() {
    return ESCOnlineStatus::LOG_OUT;
}

uint8 UThePlainesGameInstance::BPF_GetNumberOfPlayerForGameModePvE() const {
    return 0;
}

UNetworkSettingDB* UThePlainesGameInstance::BPF_GetNetworkSettingDB() {
    return NULL;
}

UMentoringManager* UThePlainesGameInstance::BPF_GetMentoringManager() {
    return NULL;
}

int32 UThePlainesGameInstance::BPF_GetMaxCoopPlayersCount() const {
    return 0;
}

EMatchMakingStatus UThePlainesGameInstance::BPF_GetMatchMakingState() const {
    return EMatchMakingStatus::None;
}

EMatchmakingCompleteResult UThePlainesGameInstance::BPF_GetMatchMakingResult() const {
    return EMatchmakingCompleteResult::NotStarted;
}

EGameModeTypes UThePlainesGameInstance::BPF_GetMatchMakingGameMode() const {
    return EGameModeTypes::Mode1v1;
}

UMapConfigDB* UThePlainesGameInstance::BPF_GetMapConfigDB() {
    return NULL;
}

FString UThePlainesGameInstance::BPF_GetMainMap() const {
    return TEXT("");
}

int32 UThePlainesGameInstance::BPF_GetLoginStepCount() {
    return 0;
}

int32 UThePlainesGameInstance::BPF_GetLoginStep() {
    return 0;
}

FString UThePlainesGameInstance::BPF_GetLoginError() {
    return TEXT("");
}

void UThePlainesGameInstance::BPF_GetLocalUserID(FBPUserID& _userID) {
}

int32 UThePlainesGameInstance::BPF_GetGameModeSearchUserCount() const {
    return 0;
}

EGameModeTypes UThePlainesGameInstance::BPF_GetGameMode() {
    return EGameModeTypes::Mode1v1;
}

void UThePlainesGameInstance::BPF_GetFoundSessions(TArray<FString>& _foundSessions) {
}
/*
TArray<FSessionPropertyKeyPair> UThePlainesGameInstance::BPF_GetExtraSessionProperties() const {
    return TArray<FSessionPropertyKeyPair>();
}*/

FString UThePlainesGameInstance::BPF_GetDefaultMap() const {
    return TEXT("");
}

bool UThePlainesGameInstance::BPF_GetCoopSessionStarted() const {
    return false;
}

FString UThePlainesGameInstance::BPF_GetCoopSessionPassword() const {
    return TEXT("");
}

int32 UThePlainesGameInstance::BPF_Get3v3UserCount() const {
    return 0;
}

int32 UThePlainesGameInstance::BPF_Get1v1UserCount() const {
    return 0;
}

void UThePlainesGameInstance::BPF_FindOnlineGames() {
}

void UThePlainesGameInstance::BPF_EnableOnlineInfo(bool _bEnable) {
}

void UThePlainesGameInstance::BPF_DestroySessionAndLeaveGame() {
}

void UThePlainesGameInstance::BPF_DestroyCoopSession(bool _bDestroySession, bool _bResetBinder) {
}

void UThePlainesGameInstance::BPF_DebugSetMatchMakingState(EMatchMakingStatus _eMatchmakingState) {
}

bool UThePlainesGameInstance::BPF_ConsumeNextError(FSCError& _error) {
    return false;
}

bool UThePlainesGameInstance::BPF_ConnectToServers() {
    return false;
}

void UThePlainesGameInstance::BPF_ClearCoopSessionPassword() {
}

void UThePlainesGameInstance::BPF_ChangeLevel(int32 _LevelID) {
}

bool UThePlainesGameInstance::BPF_CanTargetFaction(EFactionsEnums _eMyFaction, EFactionsEnums _eTargetFaction) const {
    return false;
}

bool UThePlainesGameInstance::BPF_CanCancelMatchMaking() const {
    return false;
}

void UThePlainesGameInstance::BPF_BeginLoadingScreen() {
}







