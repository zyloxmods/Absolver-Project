#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "WeaponDB.generated.h"

UCLASS(Blueprintable)
class ABSOLVER_API UWeaponDB : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fWeaponDurabilityRegenRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fDurabilityDamageRateOnAbsorb;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fDurabilityDamageRateOnParried;
    
    UWeaponDB();

};

