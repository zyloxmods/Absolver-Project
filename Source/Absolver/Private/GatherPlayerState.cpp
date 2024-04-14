#include "GatherPlayerState.h"
#include "Net/UnrealNetwork.h"

AGatherPlayerState::AGatherPlayerState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_iAccumulatedResources = 0;
    this->m_iResources = 0;
    this->m_iBonusPoints = 0;
}

void AGatherPlayerState::OnRep_Resource() {
}

void AGatherPlayerState::OnRep_BonusPoints() {
}

void AGatherPlayerState::OnRep_AccumulatedResource() {
}

void AGatherPlayerState::BPF_SetResource(int32 _iValue, bool _bUpdateResourcesForMenu) {
}

int32 AGatherPlayerState::BPF_GetResourcesForMenu() const {
    return 0;
}

int32 AGatherPlayerState::BPF_GetResources() const {
    return 0;
}

int32 AGatherPlayerState::BPF_GetBonusPoints() const {
    return 0;
}

void AGatherPlayerState::BPF_AddResource(int32 _iValue) {
}

void AGatherPlayerState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AGatherPlayerState, m_iAccumulatedResources);
    DOREPLIFETIME(AGatherPlayerState, m_iResources);
    DOREPLIFETIME(AGatherPlayerState, m_iBonusPoints);
}


