#pragma once
#include "CoreMinimal.h"
#include "WeaponActor.h"
#include "HandWeaponActor.generated.h"

UCLASS(Blueprintable)
class ABSOLVER_API AHandWeaponActor : public AWeaponActor {
    GENERATED_BODY()
public:
    AHandWeaponActor(const FObjectInitializer& ObjectInitializer);

};

