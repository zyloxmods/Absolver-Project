#include "HurtBox.h"
#include "SCNavModifierComponent.h"

AHurtBox::AHurtBox(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bHidden = true;
    this->m_NavModifierComponent = CreateDefaultSubobject<USCNavModifierComponent>(TEXT("NavModifierComponent"));
    this->m_fDamage = 0.00f;
    this->m_fKnockback = 50.00f;
    this->m_fStunTime = 0.30f;
    this->m_bForceKnockbackDirection = true;
    this->m_fDelayBeforeNextHurt = 0.50f;
}

void AHurtBox::OnFightingCharDestroyedCallBack(AActor* _destroyedActor) {
}

float AHurtBox::BPF_GetStunTime() const {
    return 0.0f;
}

float AHurtBox::BPF_GetKnockback() const {
    return 0.0f;
}

FVector AHurtBox::BPF_GetForcedKnockbackDirection_Implementation() const {
    return FVector{};
}

float AHurtBox::BPF_GetDamage() const {
    return 0.0f;
}


