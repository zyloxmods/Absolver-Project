#include "FightingPlayerState.h"
#include "Net/UnrealNetwork.h"

AFightingPlayerState::AFightingPlayerState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_eJoinMethod = EJoinMethod::Default;
    this->m_iSchoolLevel = -1;
    this->m_uDispatcherToken = 0;
    this->m_iTeamNumber = 0;
    this->m_iNumKills = 0;
    this->m_iNumDeaths = 0;
    this->m_uiRespawnZoneId = 0;
    this->m_bQuitter = false;
}

void AFightingPlayerState::OnRep_TeamNumber() {
}

void AFightingPlayerState::OnRep_SchoolLevel() {
}

void AFightingPlayerState::InformAboutKill_Implementation(AFightingPlayerState* KillerPlayerState, const UDamageType* KillerDamageType, AFightingPlayerState* KilledPlayerState) {
}

int32 AFightingPlayerState::GetKills() const {
    return 0;
}

void AFightingPlayerState::BroadcastDeath_Implementation(AFightingPlayerState* KillerPlayerState, const UDamageType* KillerDamageType, AFightingPlayerState* KilledPlayerState) {
}

void AFightingPlayerState::BPF_SetTeam(int32 _iTeam) {
}

bool AFightingPlayerState::BPF_IsMentor() const {
    return false;
}

bool AFightingPlayerState::BPF_IsInSchool() const {
    return false;
}

bool AFightingPlayerState::BPF_IsDisciple() const {
    return false;
}

int32 AFightingPlayerState::BPF_GetTeam() const {
    return 0;
}

int32 AFightingPlayerState::BPF_GetSchoolLevel() const {
    return 0;
}

int32 AFightingPlayerState::BPF_GetDeaths() const {
    return 0;
}

void AFightingPlayerState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFightingPlayerState, m_eJoinMethod);
    DOREPLIFETIME(AFightingPlayerState, m_iSchoolLevel);
    DOREPLIFETIME(AFightingPlayerState, m_uDispatcherToken);
    DOREPLIFETIME(AFightingPlayerState, m_iTeamNumber);
    DOREPLIFETIME(AFightingPlayerState, m_iNumKills);
    DOREPLIFETIME(AFightingPlayerState, m_iNumDeaths);
    DOREPLIFETIME(AFightingPlayerState, m_uiRespawnZoneId);
}


