#include "TriggerChangeSubZone.h"

ATriggerChangeSubZone::ATriggerChangeSubZone(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_uiSubZone = 0;
}

void ATriggerChangeSubZone::OnTriggerEnter(UPrimitiveComponent* _overlappedComponent, AActor* _otherActor, UPrimitiveComponent* _otherComp, int32 _iOtherBodyIndex, bool _bFromSweep, const FHitResult& _sweepResult) {
}


