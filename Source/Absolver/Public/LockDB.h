#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "EMoveStatus.h"
#include "RelationshipActionConditionArray.h"
#include "LockDB.generated.h"

class UCurveFloat;

UCLASS(Blueprintable)
class ABSOLVER_API ULockDB : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRelationshipActionConditionArray m_RelationshipBehaviours;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EMoveStatus m_MoveStatusOutOfFightRange[6];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EMoveStatus m_MoveStatusInFightRange[6];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* m_MaxVerticalAngleCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bDebugMaxVerticalAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* m_MaxZDiff;
    
    ULockDB();

};

