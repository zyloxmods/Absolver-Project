#include "GatherBank.h"
#include "Net/UnrealNetwork.h"

AGatherBank::AGatherBank(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
//    this->RemoteRole = ROLE_SimulatedProxy;
    this->m_iMaxResource = 0;
    this->m_iCurrentResource = 0;
    this->m_bAvailable = true;
    this->m_currentPlayer = NULL;
    this->m_currentController = NULL;
    this->m_iBankIndex = -1;
    this->m_iZoneIndex = -1;
}

void AGatherBank::OnRep_CurrentResource() {
}

void AGatherBank::BPF_Unlock() {
}

bool AGatherBank::BPF_TryLock(AGatherPlayerState* _player, APlayerController* _controller) {
    return false;
}

void AGatherBank::BPF_StoreResource(int32 _iAmount) {
}

void AGatherBank::BPF_Lock(AGatherPlayerState* _player, APlayerController* _controller) {
}

bool AGatherBank::BPF_IsAvailable() const {
    return false;
}

int32 AGatherBank::BPF_GetRemainingStorageCapacity() const {
    return 0;
}

int32 AGatherBank::BPF_GetMaxResource() {
    return 0;
}

AGatherPlayerState* AGatherBank::BPF_GetCurrentPlayer() const {
    return NULL;
}

APlayerController* AGatherBank::BPF_GetCurrentController() const {
    return NULL;
}

bool AGatherBank::BPF_CanUse() const {
    return false;
}





void AGatherBank::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AGatherBank, m_iMaxResource);
    DOREPLIFETIME(AGatherBank, m_iCurrentResource);
    DOREPLIFETIME(AGatherBank, m_bAvailable);
    DOREPLIFETIME(AGatherBank, m_currentPlayer);
    DOREPLIFETIME(AGatherBank, m_iBankIndex);
    DOREPLIFETIME(AGatherBank, m_iZoneIndex);
}


