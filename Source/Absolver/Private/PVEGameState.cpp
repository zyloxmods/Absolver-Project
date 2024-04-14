#include "PVEGameState.h"
#include "Net/UnrealNetwork.h"

APVEGameState::APVEGameState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_bUseRoomForStreaming = true;
    this->m_iCurrentRoom = 0;
    this->m_iCurrentRoomWithAllPlayers = 0;
    this->m_iRoomWaitingToBeCleared = -1;
}

void APVEGameState::OnRep_RoomWaitingToBeCleared() {
}

void APVEGameState::MulticastSetSeedAndStartGeneration_EditorOnly_Implementation(const FGameStateSeed& _gameStateSeed) {
}
bool APVEGameState::MulticastSetSeedAndStartGeneration_EditorOnly_Validate(const FGameStateSeed& _gameStateSeed) {
    return true;
}

void APVEGameState::MulticastRestartingGame_Implementation() {
}

bool APVEGameState::BPF_IsBossRoom(int32 _iRoom, bool& _containsBoss) const {
    return false;
}

EObjectiveType APVEGameState::BPF_GetRoomObjectiveType(int32 _iRoomIndex) const {
    return EObjectiveType::None;
}

int32 APVEGameState::BPF_GetMaxDepth() const {
    return 0;
}

int32 APVEGameState::BPF_GetCurrentRoomWithAllPlayers() const {
    return 0;
}

int32 APVEGameState::BPF_GetCurrentRoom() const {
    return 0;
}

void APVEGameState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(APVEGameState, m_RoomStates);
    DOREPLIFETIME(APVEGameState, m_iCurrentRoom);
    DOREPLIFETIME(APVEGameState, m_iCurrentRoomWithAllPlayers);
    DOREPLIFETIME(APVEGameState, m_iRoomWaitingToBeCleared);
    DOREPLIFETIME(APVEGameState, m_respawnPoints);
}


