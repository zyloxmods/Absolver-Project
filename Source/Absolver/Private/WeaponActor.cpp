#include "WeaponActor.h"

AWeaponActor::AWeaponActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_ShapeComponent = NULL;
}

void AWeaponActor::OnOwnerDestroyed(AActor* DestroyedActor) {
}

EWeaponSlot AWeaponActor::BPF_GetWeaponSlot() const {
    return EWeaponSlot::LeftHand;
}

uint8 AWeaponActor::BPF_GetWeaponSetIndex() const {
    return 0;
}

FGearDataRow AWeaponActor::BPF_GetGearDataRow() const {
    return FGearDataRow{};
}

FName AWeaponActor::BPF_GetAttachmentSocketName() const {
    return NAME_None;
}


