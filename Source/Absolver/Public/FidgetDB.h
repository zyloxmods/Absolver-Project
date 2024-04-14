#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "EQuadrantTypes.h"
#include "EWeaponFamilies.h"
#include "FidgetAnimStyleArray.h"
#include "FidgetDB.generated.h"

class UAnimationAsset;

UCLASS(Blueprintable)
class ABSOLVER_API UFidgetDB : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fLowerBoundTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fUpperBoundTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFidgetAnimStyleArray m_Anims;
    
    UFidgetDB();

    UFUNCTION(BlueprintCallable)
    UAnimationAsset* BPF_GetAnim(int32 _iStyleNb, EWeaponFamilies _eWeapon, EQuadrantTypes _eCurrentQuadrant);
    
    UFUNCTION(BlueprintCallable)
    float BPF_ComputeTimer();
    
};

