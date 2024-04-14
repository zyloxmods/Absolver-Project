#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "WeaponAttackRushNameArray.h"
#include "RushAttackDB.generated.h"

UCLASS(Blueprintable)
class ABSOLVER_API URushAttackDB : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWeaponAttackRushNameArray> m_RushAttackNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fRushAttackTrackingAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fRushAttackMinTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bFailedAttackRushFalseTracking;
    
    URushAttackDB();

};

