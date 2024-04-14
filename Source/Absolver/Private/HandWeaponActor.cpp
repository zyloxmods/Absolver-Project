#include "HandWeaponActor.h"
#include "Components/CapsuleComponent.h"

AHandWeaponActor::AHandWeaponActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UCapsuleComponent>(TEXT("SphereComp"));
    this->m_ShapeComponent = (UShapeComponent*)RootComponent;
}


