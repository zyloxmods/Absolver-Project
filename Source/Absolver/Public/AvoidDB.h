#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "AvoidAnimWeaponArray.h"
#include "Bool.h"
#include "CardinalMatchArray.h"
#include "Templates/SubclassOf.h"
#include "AvoidDB.generated.h"

class UAvoidMatchCondition;
class UAvoidPropertyDB;
class UCurveFloat;

UCLASS(Blueprintable)
class ABSOLVER_API UAvoidDB : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAvoidAnimWeaponArray m_AvoidAnims;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAvoidMatchCondition> m_AvoidMatchConditionClass;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FCardinalMatchArray m_CardinalMatchArray[7];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bHasImpactOnGuardGauge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fGuardGaugeCost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bAvoidConsumStamina;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bOverrideAnimDynamicByCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* m_AvoidMovementdynamic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fAvoidDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iFrameBuildUp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iFrameRelease;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fTrackingDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fJumpSelectionAngleWidth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fDuckSelectionAngleWidth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fDodgeAvoidNorthAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fDodgeAvoidSouthAngle;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    UAvoidPropertyDB* m_DefaultAvoidPropertyDBs[7];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fAvoidedDuration[7];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_SuperAvoidedDuration[7];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fAvoidSuccessfulRefillValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fSuperAvoidSuccessfulRefillValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fAvoidSuccessfulGuardGaugeRefillValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fSuperAvoidSuccessfulGuardGaugeRefillValue;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* m_AvoidedAttackScaleCurves[7];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FBool m_AvoidDismissesPerfectLink[7];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FBool m_SuperAvoidDismissesPerfectLink[7];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iOrdersAllowedToPushAvoidSuccessfulLayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iSuperAvoidOrders;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAvoidMatchCondition* m_AvoidMatchCondition;
    
public:
    UAvoidDB();

};

