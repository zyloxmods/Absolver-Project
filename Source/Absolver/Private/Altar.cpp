#include "Altar.h"
#include "AutoSaveComponent.h"

AAltar::AAltar(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UAutoSaveComponent>(TEXT("AutoSave"));
    this->m_bIsLocked = true;
    this->m_bSocialInteractionsEnabled = true;
    this->m_AutoSaveZone = (UAutoSaveComponent*)RootComponent;
    this->m_uiMatchMakingZone = 0;
    this->m_uiMatchmakingSubZone = 0;
    this->m_bRepairsInventoryOnInteraction = true;
    this->m_bRepairsInventoryOnRespawn = true;
}

void AAltar::OnSaveStartOverlap(UPrimitiveComponent* _overlappedComponent, AActor* _otherActor, UPrimitiveComponent* _otherComp, int32 _iOtherBodyIndex, bool _bFromSweep, const FHitResult& _sweepResult) {
}








