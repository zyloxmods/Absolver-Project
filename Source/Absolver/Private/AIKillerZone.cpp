#include "AIKillerZone.h"
#include "Components/BoxComponent.h"
#include "Components/SceneComponent.h"

AAIKillerZone::AAIKillerZone(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
    this->m_fTimeBeforeKill = 10.00f;
    this->m_boxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComponent"));
    this->m_sceneComponent = (USceneComponent*)RootComponent;
}

void AAIKillerZone::OnActorEndOverlapCallBack(UPrimitiveComponent* _overlappedComponent, AActor* _otherActor, UPrimitiveComponent* _otherComp, int32 _otherBodyIndex) {
}

void AAIKillerZone::OnActorBeginOverlapCallBack(UPrimitiveComponent* OverlappedComponent, AActor* _otherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}


