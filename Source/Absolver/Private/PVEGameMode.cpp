#include "PVEGameMode.h"

APVEGameMode::APVEGameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_bHasIntro = false;
    this->m_bAutoRematch = false;
}

void APVEGameMode::LoadAllRooms() {
}

void APVEGameMode::BPF_CurrentRoomCleared() {
}


