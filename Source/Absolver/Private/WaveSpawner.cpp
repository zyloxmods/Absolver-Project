#include "WaveSpawner.h"
#include "Net/UnrealNetwork.h"
#include "ObjectiveComponent.h"

AWaveSpawner::AWaveSpawner(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
//    this->RemoteRole = ROLE_SimulatedProxy;
    this->m_ConfigDB = NULL;
    this->m_iSpawnCountInWave = 0;
    this->m_iTotalSpawned = 0;
    this->m_iKillCount = 0;
    this->m_iTotalToSpawn = 0;
    this->m_bStarted = false;
    this->m_bCleared = false;
    this->m_iCurrentWave = -1;
    this->m_ePlayerCountAtStart = EPlayerNumber::One;
    this->m_ObjectiveComponent = CreateDefaultSubobject<UObjectiveComponent>(TEXT("ObjectiveComponent"));
    this->m_fTimeSinceLastSpawn = 0.00f;
    this->m_CurrentWave = NULL;
    this->m_iIdChoosenForWaveSelection = -1;
}

void AWaveSpawner::OnRep_Started() {
}

void AWaveSpawner::OnRep_Cleared() {
}

void AWaveSpawner::NetMulticastOnStartMusic_Implementation(EWaveModeMusic _eMusicToPlay) {
}
bool AWaveSpawner::NetMulticastOnStartMusic_Validate(EWaveModeMusic _eMusicToPlay) {
    return true;
}

void AWaveSpawner::BPF_StartWave() {
}


void AWaveSpawner::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AWaveSpawner, m_iSpawnCountInWave);
    DOREPLIFETIME(AWaveSpawner, m_iTotalSpawned);
    DOREPLIFETIME(AWaveSpawner, m_iKillCount);
    DOREPLIFETIME(AWaveSpawner, m_iTotalToSpawn);
    DOREPLIFETIME(AWaveSpawner, m_bStarted);
    DOREPLIFETIME(AWaveSpawner, m_bCleared);
    DOREPLIFETIME(AWaveSpawner, m_iCurrentWave);
    DOREPLIFETIME(AWaveSpawner, m_ePlayerCountAtStart);
    DOREPLIFETIME(AWaveSpawner, m_fTimeSinceLastSpawn);
    DOREPLIFETIME(AWaveSpawner, m_iIdChoosenForWaveSelection);
}


