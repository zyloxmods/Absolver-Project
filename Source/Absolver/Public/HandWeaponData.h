#pragma once
#include "CoreMinimal.h"
#include "BaseWeaponData.h"
#include "HandWeaponData.generated.h"

UCLASS(Blueprintable)
class ABSOLVER_API UHandWeaponData : public UBaseWeaponData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fHandRadius;
    
    UHandWeaponData();

};

