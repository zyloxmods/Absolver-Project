#include "SocialComponent.h"
#include "Net/UnrealNetwork.h"

USocialComponent::USocialComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    this->m_EmoteDataTable = NULL;
    this->m_fReceivedRequestTimeout = 10.00f;
    this->m_fRequestBroadcastRange = 1500.00f;
    this->m_uiHitCountThresholdForWarning = 2;
    this->m_fHealthPercentThresholdForWarning = 0.05f;
    this->m_uiHitCountThresholdForFight = 3;
    this->m_fHealthPercentThresholdForFight = 0.10f;
    this->m_fFightDetectionTimeOut = 10.00f;
    this->m_fFightTimeOut = 10.00f;
    this->m_fFightRange = 1500.00f;
    this->m_fCoopResolutionTimeOut = 10.00f;
}

void USocialComponent::ServerReadyForCoopMatchMaking_Implementation(EGameModeTypes _eGameModeType) {
}
bool USocialComponent::ServerReadyForCoopMatchMaking_Validate(EGameModeTypes _eGameModeType) {
    return true;
}

void USocialComponent::ServerPrepareForCoopMatchMaking_Implementation(EGameModeTypes _eGameModeType) {
}
bool USocialComponent::ServerPrepareForCoopMatchMaking_Validate(EGameModeTypes _eGameModeType) {
    return true;
}

void USocialComponent::ServerPerformEmoteActionWithGameMode_Implementation(EEmoteAction _eEmoteAction, AActor* _targetActor, EGameModeTypes _eGameModeType) {
}
bool USocialComponent::ServerPerformEmoteActionWithGameMode_Validate(EEmoteAction _eEmoteAction, AActor* _targetActor, EGameModeTypes _eGameModeType) {
    return true;
}

void USocialComponent::ServerPerformEmoteAction_Implementation(EEmoteAction _eEmoteAction, AActor* _targetActor) {
}
bool USocialComponent::ServerPerformEmoteAction_Validate(EEmoteAction _eEmoteAction, AActor* _targetActor) {
    return true;
}

void USocialComponent::ServerPerformBroadcastEmoteActionWithGameMode_Implementation(EEmoteAction _eEmoteAction, const TArray<AActor*>& _targetActors, EGameModeTypes _eGameModeType) {
}
bool USocialComponent::ServerPerformBroadcastEmoteActionWithGameMode_Validate(EEmoteAction _eEmoteAction, const TArray<AActor*>& _targetActors, EGameModeTypes _eGameModeType) {
    return true;
}

void USocialComponent::ServerPerformBroadcastEmoteAction_Implementation(EEmoteAction _eEmoteAction, const TArray<AActor*>& _targetActors) {
}
bool USocialComponent::ServerPerformBroadcastEmoteAction_Validate(EEmoteAction _eEmoteAction, const TArray<AActor*>& _targetActors) {
    return true;
}

void USocialComponent::ServerEquipIntro_Implementation(const FName& _IntroName) {
}
bool USocialComponent::ServerEquipIntro_Validate(const FName& _IntroName) {
    return true;
}

void USocialComponent::ServerCoopPvPValidateAnswer_Implementation(bool _bAccept, EGameModeTypes _eGameModeType) {
}
bool USocialComponent::ServerCoopPvPValidateAnswer_Validate(bool _bAccept, EGameModeTypes _eGameModeType) {
    return true;
}

void USocialComponent::ServerCancelRequest_Implementation(ESocialRequest _eRequest) {
}
bool USocialComponent::ServerCancelRequest_Validate(ESocialRequest _eRequest) {
    return true;
}

void USocialComponent::ServerCancelCoopGameMode_Implementation(EGameModeTypes _eGameModeType) {
}
bool USocialComponent::ServerCancelCoopGameMode_Validate(EGameModeTypes _eGameModeType) {
    return true;
}

void USocialComponent::ServerApplyCoop_Implementation(AActor* _actor) {
}
bool USocialComponent::ServerApplyCoop_Validate(AActor* _actor) {
    return true;
}

void USocialComponent::OnRep_CoopGroup() {
}

void USocialComponent::OnCoopGroupRemoved(const FCoopGroup& _group) {
}

void USocialComponent::OnCoopGroupMemberRemoved(const FUniqueNetIdRepl& _netID, AActor* _actor) {
}

void USocialComponent::OnActorRelationshipEndPlayCallBack(AActor* _actor, TEnumAsByte<EEndPlayReason::Type> _eEndPlayReason) {
}

void USocialComponent::MulticastStopCoop_Implementation() {
}

void USocialComponent::MulticastRemoveGroupMember_Implementation(FUniqueNetIdRepl _groupMemberUniqueId, EGameModeTypes _eGameModeType) {
}

void USocialComponent::MulticastPrepareForCoopMatchMaking_Implementation(EGameModeTypes _eGameModeType) {
}

void USocialComponent::MulticastCoopPvPUpdateAnswer_Implementation(ECoopGameModeAnswerStatus _eAnswer, EGameModeTypes _eGameModeType) {
}

void USocialComponent::MulticastCoopBondResolution_Implementation(AActor* _coopGroupMember, const TArray<TWeakObjectPtr<AActor>>& _coopGroup) {
}

void USocialComponent::MulticastChangeRelationship_Implementation(AActor* _actor, ERelationshipTypes _eRelation) {
}

void USocialComponent::MulticastCancelRequest_Implementation(ESocialRequest _eRequestType) {
}

void USocialComponent::MulticastCancelCoopGameMode_Implementation(EGameModeTypes _eGameModeType) {
}

void USocialComponent::CoopDangerStateChanged(EDangerStates _ePreviousDangerState, EDangerStates _eNewDangerState) {
}

void USocialComponent::ClientSendRequestWithGameMode_Implementation(AActor* _requestInstigator, ESocialRequest _eSocialRequest, EGameModeTypes _eGameModeType) {
}
bool USocialComponent::ClientSendRequestWithGameMode_Validate(AActor* _requestInstigator, ESocialRequest _eSocialRequest, EGameModeTypes _eGameModeType) {
    return true;
}

void USocialComponent::ClientSendRequest_Implementation(AActor* _requestInstigator, ESocialRequest _eSocialRequest) {
}
bool USocialComponent::ClientSendRequest_Validate(AActor* _requestInstigator, ESocialRequest _eSocialRequest) {
    return true;
}

void USocialComponent::ClientReadyForCoopMatchMaking_Implementation(EGameModeTypes _eGameModeType) {
}
bool USocialComponent::ClientReadyForCoopMatchMaking_Validate(EGameModeTypes _eGameModeType) {
    return true;
}

void USocialComponent::ClientAnswerRequest_Implementation(AActor* _requestAnswerer, bool _bAccept) {
}
bool USocialComponent::ClientAnswerRequest_Validate(AActor* _requestAnswerer, bool _bAccept) {
    return true;
}

void USocialComponent::BPF_SetIntroLock(bool _bLock, const FName& _name) {
}

void USocialComponent::BPF_SetIntroAsSeen(const FName& _name) {
}

void USocialComponent::BPF_SetIntroAsNew(const FName& _name) {
}

void USocialComponent::BPF_SetEmoteLock(bool _bLock, const FName& _name) {
}

void USocialComponent::BPF_SetEmoteAsSeen(const FName& _name) {
}

void USocialComponent::BPF_SetEmoteAsNew(const FName& _name) {
}

void USocialComponent::BPF_ServerChangeRelationship_Implementation(AActor* _actor, ERelationshipTypes _eRelation) {
}
bool USocialComponent::BPF_ServerChangeRelationship_Validate(AActor* _actor, ERelationshipTypes _eRelation) {
    return true;
}

void USocialComponent::BPF_LeaveCoopGroup() {
}

bool USocialComponent::BPF_IsIntroUnlocked(const FName& _name) const {
    return false;
}

bool USocialComponent::BPF_IsIntroNew(const FName& _name) const {
    return false;
}

bool USocialComponent::BPF_IsIntroEquipped(const FName& _IntroName) const {
    return false;
}

bool USocialComponent::BPF_IsInCoopGroup() const {
    return false;
}

bool USocialComponent::BPF_IsInCoopGameMode() const {
    return false;
}

bool USocialComponent::BPF_IsEmoteUnlocked(const FName& _name) const {
    return false;
}

bool USocialComponent::BPF_IsEmoteNew(const FName& _name) const {
    return false;
}

bool USocialComponent::BPF_IsEmoteEquipped(const FName& _emoteName) const {
    return false;
}

ERelationshipTypes USocialComponent::BPF_GetRelationship(AActor* _actor) {
    return ERelationshipTypes::Enemy;
}

int32 USocialComponent::BPF_GetNewIntrosCount() const {
    return 0;
}

int32 USocialComponent::BPF_GetNewEmotesCount() const {
    return 0;
}

void USocialComponent::BPF_GetDefaultIntro(int32 _iFightingStyleID, FName& out_name) const {
}

void USocialComponent::BPF_GetCurrentIntroName(FName& out_name) const {
}

int32 USocialComponent::BPF_GetCoopPlayerCount() {
    return 0;
}

void USocialComponent::BPF_EquipIntro(const FName& _IntroName) {
}

int32 USocialComponent::BPF_CountPlayerWithAnswer(ECoopGameModeAnswerStatus _eAnswer, EGameModeTypes _eGameMode) {
    return 0;
}

void USocialComponent::BPF_CancelPendingCoopMatchMaking() {
}

void USocialComponent::BPF_CancelPendingCoopGameModes(bool _bQuitTheGroup) {
}

void USocialComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(USocialComponent, m_Relationships);
    DOREPLIFETIME(USocialComponent, m_CoopGroup);
    DOREPLIFETIME(USocialComponent, m_InFightPlayers);
    DOREPLIFETIME(USocialComponent, m_EquippedIntro);
}


