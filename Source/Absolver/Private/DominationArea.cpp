#include "DominationArea.h"
#include "Net/UnrealNetwork.h"

ADominationArea::ADominationArea(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_bIsNetReady = false;
}

void ADominationArea::SetNetReady(bool _bReady) {
}

bool ADominationArea::BPF_IsNetReady() {
    return false;
}

TArray<AFightingCharacter*> ADominationArea::BPF_GetAllFightingCharacters() {
    return TArray<AFightingCharacter*>();
}

void ADominationArea::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ADominationArea, m_bIsNetReady);
}


