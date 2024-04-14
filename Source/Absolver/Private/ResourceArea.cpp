#include "ResourceArea.h"
#include "Components/BoxComponent.h"
#include "Net/UnrealNetwork.h"

AResourceArea::AResourceArea(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
//    this->RemoteRole = ROLE_SimulatedProxy;
    this->m_bActivated = false;
    this->m_BoxTrigger = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxTrigger"));
    this->m_eAreaStatus = EResourceAreaStatus::None;
    this->m_AreaName = FText::FromString(TEXT("No name"));
    this->m_fScoreLimitBeforeCapture = 25.00f;
    this->m_iNbTeams = 2;
}

void AResourceArea::OnRepScoreCapture() {
}

void AResourceArea::OnRepNumTeam() {
}

void AResourceArea::OnRepAreaStatus() {
}

void AResourceArea::OnRepActivate() {
}

void AResourceArea::OnComponentStartOverlap(UPrimitiveComponent* _overlappedComponent, AActor* _otherActor, UPrimitiveComponent* _otherComp, int32 _iOtherBodyIndex, bool _bFromSweep, const FHitResult& _sweepResult) {
}

void AResourceArea::OnComponentEndOverlap(UPrimitiveComponent* _overlappedComponent, AActor* _otherActor, UPrimitiveComponent* _otherComp, int32 _iOtherBodyIndex) {
}

bool AResourceArea::BPF_IsCharacterInside(AFightingCharacter* _character) const {
    return false;
}

EResourceAreaStatus AResourceArea::BPF_GetStatus() const {
    return EResourceAreaStatus::None;
}

float AResourceArea::BPF_GetScoreToCapture() const {
    return 0.0f;
}

float AResourceArea::BPF_GetScore(uint8 _uiTeamIndex) const {
    return 0.0f;
}

float AResourceArea::BPF_GetRewardScoreForCapture() const {
    return 0.0f;
}

FText AResourceArea::BPF_GetAreaName() const {
    return FText::GetEmpty();
}


void AResourceArea::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AResourceArea, m_bActivated);
    DOREPLIFETIME(AResourceArea, m_eAreaStatus);
    DOREPLIFETIME(AResourceArea, m_ScoreCapture);
    DOREPLIFETIME(AResourceArea, m_fScoreLimitBeforeCapture);
    DOREPLIFETIME(AResourceArea, m_iNbTeams);
}


