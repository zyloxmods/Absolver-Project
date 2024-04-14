#include "GatherObjectiveManager.h"
#include "Net/UnrealNetwork.h"

AGatherObjectiveManager::AGatherObjectiveManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->bReplicates = true;
//    this->RemoteRole = ROLE_SimulatedProxy;
    this->m_fWellPerformedThreshold = 0.50f;
    this->m_iNumStatuesAlive = 0;
    this->m_iTotGleamsForStatues = 0;
    this->m_iEnemiesAlive = 0;
    this->m_iMarkedNum[0] = 0;
    this->m_iMarkedNum[1] = 0;
    this->m_iMarkedNum[2] = 0;
    this->m_MarkedArchetypes = NULL;
}

void AGatherObjectiveManager::NetMulticastSetGatherObj_Implementation() {
}
bool AGatherObjectiveManager::NetMulticastSetGatherObj_Validate() {
    return true;
}

void AGatherObjectiveManager::NetMulticastOnStartMusic_Implementation(EMusicToPlay _eMusicToPlay) {
}
bool AGatherObjectiveManager::NetMulticastOnStartMusic_Validate(EMusicToPlay _eMusicToPlay) {
    return true;
}

void AGatherObjectiveManager::NetMulticastOnRoomOpened_Implementation(EObjectiveType _eObjectiveType, float _fWaveDelay) {
}
bool AGatherObjectiveManager::NetMulticastOnRoomOpened_Validate(EObjectiveType _eObjectiveType, float _fWaveDelay) {
    return true;
}

void AGatherObjectiveManager::NetMulticastCompleteObjective_Implementation() {
}
bool AGatherObjectiveManager::NetMulticastCompleteObjective_Validate() {
    return true;
}

void AGatherObjectiveManager::CheckObjectiveCompletion() {
}

void AGatherObjectiveManager::BPF_SetObjectiveType(EObjectiveType _eType) {
}

void AGatherObjectiveManager::BPF_InitObjective() {
}

EObjectiveType AGatherObjectiveManager::BPF_GetObjectiveType() const {
    return EObjectiveType::None;
}



void AGatherObjectiveManager::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AGatherObjectiveManager, m_iNumStatuesAlive);
    DOREPLIFETIME(AGatherObjectiveManager, m_iTotGleamsForStatues);
    DOREPLIFETIME(AGatherObjectiveManager, m_iEnemiesAlive);
}


