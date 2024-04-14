#pragma once
#include "CoreMinimal.h"
#include "WeaponSituationDescription.generated.h"

class UVisibleWeaponData;

USTRUCT(BlueprintType)
struct FWeaponSituationDescription {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iLevelMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iLevelMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UVisibleWeaponData*> m_WeaponsData;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 m_uiAppearanceProbabilities;
    
    ABSOLVER_API FWeaponSituationDescription();
};

