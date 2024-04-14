#include "GatherGameState.h"
#include "Net/UnrealNetwork.h"

AGatherGameState::AGatherGameState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_fGameTime = 0.00f;
    this->m_iBankResource = 0;
    this->m_EndType = EGatherEndType::None;
    this->m_DamageMultiplierFromResource = NULL;
    this->m_DamageReceivedMultiplierFromResource = NULL;
    this->m_bPreventBackTracking = true;
    this->m_iMaxLives = 2;
    this->m_bTickBossVolumes = true;
}

void AGatherGameState::ServerNotifySwitchGateClosed_Implementation(AGatherSwitchGate* _switchGate) {
}
bool AGatherGameState::ServerNotifySwitchGateClosed_Validate(AGatherSwitchGate* _switchGate) {
    return true;
}

void AGatherGameState::OnRepWaitingEndGameInfo() {
}

void AGatherGameState::OnRep_BankedResource() {
}

int32 AGatherGameState::GetRemainingLives() const {
    return 0;
}

void AGatherGameState::BPF_StoreResource(int32 _iValue, AGatherBank* _bank) {
}

void AGatherGameState::BPF_SetStoredResource(int32 _iValue) {
}

void AGatherGameState::BPF_SetEndType(EGatherEndType _EndType) {
}

void AGatherGameState::BPF_RegisterSwitchGate(AGatherSwitchGate* _switchGate) {
}

void AGatherGameState::BPF_RegisterBank(AGatherBank* _bank) {
}

bool AGatherGameState::BPF_IsPlayerWaitingForDoor(APlayerState* _playerState, AProceduralPathBlockers* _door) const {
    return false;
}

void AGatherGameState::BPF_GetWavesInfos(int32& _iOutCurrWave, int32& _iOutTotalWaves, int32& _iAITotalToSpawn, int32& _iRemainingAIs) const {
}

TArray<FWaitingPlayerInfo> AGatherGameState::BPF_GetWaitingPlayers() const {
    return TArray<FWaitingPlayerInfo>();
}

int32 AGatherGameState::BPF_GetStoredResource() const {
    return 0;
}

int32 AGatherGameState::BPF_GetResourcesGained() {
    return 0;
}

int32 AGatherGameState::BPF_GetNumUnopenedGatherChests() const {
    return 0;
}

int32 AGatherGameState::BPF_GetEnemiesAlive() const {
    return 0;
}

EGatherEndType AGatherGameState::BPF_GetEndType() const {
    return EGatherEndType::None;
}

void AGatherGameState::BPF_CheckStatues() {
}


void AGatherGameState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AGatherGameState, m_fGameTime);
    DOREPLIFETIME(AGatherGameState, m_iBankResource);
    DOREPLIFETIME(AGatherGameState, m_Banks);
    DOREPLIFETIME(AGatherGameState, m_SwitchGates);
    DOREPLIFETIME(AGatherGameState, m_EndType);
    DOREPLIFETIME(AGatherGameState, m_WaitingPlayerInfos);
    DOREPLIFETIME(AGatherGameState, m_WaitingEndGamePlayerInfo);
    DOREPLIFETIME(AGatherGameState, m_sequenceToLaunch);
    DOREPLIFETIME(AGatherGameState, m_BossSituation);
    DOREPLIFETIME(AGatherGameState, m_bTickBossVolumes);
}


