#pragma once
#include "CoreMinimal.h"
#include "EWeaponSlot.h"
#include "TrailNotifyStateExtended.h"
#include "WeaponTrailsNotifyState.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class ABSOLVER_API UWeaponTrailsNotifyState : public UTrailNotifyStateExtended {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWeaponSlot m_eWeaponSlot;
    
public:
    UWeaponTrailsNotifyState();

};

