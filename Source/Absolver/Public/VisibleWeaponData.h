#pragma once
#include "CoreMinimal.h"
#include "BaseWeaponData.h"
#include "WeaponVisuals.h"
#include "VisibleWeaponData.generated.h"

UCLASS(Blueprintable)
class ABSOLVER_API UVisibleWeaponData : public UBaseWeaponData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWeaponVisuals> m_WeaponVisuals;
    
    UVisibleWeaponData();

};

