#include "SoundTransitionVolume.h"
#include "Components/SplineComponent.h"

ASoundTransitionVolume::ASoundTransitionVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_SplineComponent = CreateDefaultSubobject<USplineComponent>(TEXT("SplineComponent"));
    this->m_SplineComponent->SetupAttachment(RootComponent);
}

void ASoundTransitionVolume::OnComponentStartOverlap(UPrimitiveComponent* _overlappedComponent, AActor* _otherActor, UPrimitiveComponent* _otherComp, int32 _iOtherBodyIndex, bool _bFromSweep, const FHitResult& _sweepResult) {
}

void ASoundTransitionVolume::OnComponentEndOverlap(UPrimitiveComponent* _overlappedComponent, AActor* _otherActor, UPrimitiveComponent* _otherComp, int32 _iOtherBodyIndex) {
}


