#include "GatherGameMode.h"

AGatherGameMode::AGatherGameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_fStartGameTime = 0.00f;
    this->m_iStoredAmountPerTick = 100;
    this->m_fHealthPerResourceStored = 0.00f;
    this->m_StoringTick = 0.50f;
    this->m_AIClass[0] = NULL;
    this->m_AIClass[1] = NULL;
}

void AGatherGameMode::BPF_UnlockAllBanks() {
}

void AGatherGameMode::BPF_TriggerSynchedCutscene(ATeamSequenceActor* _cutscene) {
}

void AGatherGameMode::BPF_StoreResource(AGatherPlayerState* _playerState, AController* _playerController, AGatherBank* _bank, int32 _iAmount) {
}

void AGatherGameMode::BPF_StopStoringForAllPlayers() {
}

bool AGatherGameMode::BPF_IsPlayerInSession(AGatherPlayerState* _player) {
    return false;
}

void AGatherGameMode::BPF_CheckLockValidity(AGatherBank* _bank) {
}

void AGatherGameMode::BPF_CheckAllLockValidity() {
}

void AGatherGameMode::BPF_AskAllIfGatesAreClosed() {
}


