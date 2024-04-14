#include "UsableItem.h"
#include "Components/SceneComponent.h"

AUsableItem::AUsableItem(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root Component"));
    this->m_ShapeComponent = NULL;
    this->m_iMatchesWithAvoid = 0;
}

EItemUseState AUsableItem::BPF_GetItemUseState() const {
    return EItemUseState::BuildUp;
}

float AUsableItem::BPF_ComputeAttackKnockbackCoeff_Implementation(AActor* _instigator, AActor* Target, const FName& _AttackName, const FHitResult& _hitResult) const {
    return 0.0f;
}








