#include "GatherComponent.h"
#include "Net/UnrealNetwork.h"

UGatherComponent::UGatherComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_VoiceOverData = NULL;
    this->m_bAskForStoring = false;
    this->m_bankAsked = NULL;
    this->m_bIsStoring = false;
    this->m_currentBank = NULL;
    this->myController = NULL;
}

void UGatherComponent::BPF_SetAskForStoring(bool _bAsk, AGatherBank* _bank) {
}

void UGatherComponent::BPF_ServerStopStoring_Implementation() {
}
bool UGatherComponent::BPF_ServerStopStoring_Validate() {
    return true;
}

void UGatherComponent::BPF_ServerStartStoring_Implementation(AGatherBank* _bank) {
}
bool UGatherComponent::BPF_ServerStartStoring_Validate(AGatherBank* _bank) {
    return true;
}

void UGatherComponent::BPF_ResetVoiceOverProgress() {
}

void UGatherComponent::BPF_MarkAllVoiceOverDone() {
}

bool UGatherComponent::BPF_IsStoring() const {
    return false;
}

bool UGatherComponent::BPF_IsAskingForStoring() const {
    return false;
}

bool UGatherComponent::BPF_GetStatueVoiceOverDone() const {
    return false;
}

bool UGatherComponent::BPF_GetNextGenericVoiceOver(uint8 _uiTheme, FVoiceOver& _voiceOver) {
    return false;
}

int32 UGatherComponent::BPF_GetMaxDepth() const {
    return 0;
}

uint8 UGatherComponent::BPF_GetCurrentTheme() const {
    return 0;
}

AGatherBank* UGatherComponent::BPF_GetCurrentBank() const {
    return NULL;
}

bool UGatherComponent::BPF_GetBossVoiceOver(uint8 _uiTheme, FVoiceOver& _voiceOver) {
    return false;
}

AGatherBank* UGatherComponent::BPF_GetBankAsked() const {
    return NULL;
}

void UGatherComponent::BPF_ConsumeStatueVoiceOver() {
}

void UGatherComponent::BPF_ConsumeNextGenericVoiceOver(const uint8& _uiTheme) {
}

void UGatherComponent::BPF_ConsumeBossVoiceOver(const uint8& _uiTheme) {
}

void UGatherComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UGatherComponent, m_bIsStoring);
    DOREPLIFETIME(UGatherComponent, m_currentBank);
}


