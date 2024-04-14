#include "ThePlainesGameState.h"
#include "Net/UnrealNetwork.h"

AThePlainesGameState::AThePlainesGameState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_iNumPlayersPerTeam = 1;
    this->m_bFriendlyFire = false;
    this->m_bOnDedicatedServer = false;
    this->m_RewardWidgetClass = NULL;
    this->m_fStartTimer = 3.00f;
    this->m_fRematchTimer = 10.00f;
    this->m_uiLastHostZone = 15;
    this->m_fTimeBeforeAFKWarning = 0.00f;
    this->m_fTimeBeforeAFKLeave = 0.00f;
    this->m_iNumTeams = 1;
    this->m_eCoopTransitionState = ECoopTransitionState::WaitingForPlayersToJoin;
    this->m_fTimeBeforeVanishActive = 0.00f;
    this->m_bIsSpectatorCameraAvailable = false;
    this->m_bShouldGiveXPOnKill = true;
    this->m_bHasRunOnce = false;
    this->m_eThresholdDangerState = EDangerStates::Safe;
    this->m_fReviveTime = 5.00f;
    this->m_fDeathRespawnTime = 5.00f;
    this->m_fReviveLifePercent = 0.30f;
    this->m_fDeathLifePercent = 1.00f;
    this->m_fRoomClearedLifePercent = 1.00f;
    this->m_fVanishTime = 4.00f;
    this->m_bCanGoDown = true;
    this->m_fDownTime = 3.00f;
    this->m_fRespawnTimeNoDown = 3.00f;
}

void AThePlainesGameState::OnRepNumTeam() {
}

void AThePlainesGameState::OnRepCoopTransitionState() {
}

void AThePlainesGameState::BPF_SetTutorialProgress(int32 _iProgress) {
}

bool AThePlainesGameState::BPF_IsPvPGameMode() const {
    return false;
}

bool AThePlainesGameState::BPF_IsNetReady_Implementation() {
    return false;
}

bool AThePlainesGameState::BPF_IsMatchmakingAllowed() {
    return false;
}

int32 AThePlainesGameState::BPF_GetTutorialProgress() {
    return 0;
}

float AThePlainesGameState::BPF_GetTimeBeforeVanishActive() const {
    return 0.0f;
}

float AThePlainesGameState::BPF_GetRespawnTimeNoDown() const {
    return 0.0f;
}

EGameModeTypes AThePlainesGameState::BPF_GetGameModeType_Implementation() const {
    return EGameModeTypes::Mode1v1;
}

float AThePlainesGameState::BPF_GetDownTime() const {
    return 0.0f;
}

ECoopTransitionState AThePlainesGameState::BPF_GetCoopTransitionState() {
    return ECoopTransitionState::WaitingForPlayersToJoin;
}

void AThePlainesGameState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AThePlainesGameState, m_iNumPlayersPerTeam);
    DOREPLIFETIME(AThePlainesGameState, m_bFriendlyFire);
    DOREPLIFETIME(AThePlainesGameState, m_bOnDedicatedServer);
    DOREPLIFETIME(AThePlainesGameState, m_RewardWidgetClass);
    DOREPLIFETIME(AThePlainesGameState, m_fStartTimer);
    DOREPLIFETIME(AThePlainesGameState, m_fRematchTimer);
    DOREPLIFETIME(AThePlainesGameState, m_uiLastHostZone);
    DOREPLIFETIME(AThePlainesGameState, m_iNumTeams);
    DOREPLIFETIME(AThePlainesGameState, m_eCoopTransitionState);
    DOREPLIFETIME(AThePlainesGameState, m_bHasRunOnce);
    DOREPLIFETIME(AThePlainesGameState, m_ToSpawnFrom);
}


