#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EAttackMovementType.h"
#include "EAttackOrigin.h"
#include "EAttackTarget.h"
#include "EAvoidTrackingTypes.h"
#include "EAvoidType.h"
#include "ECardinalPoints.h"
#include "AvoidMatchCondition.generated.h"

UCLASS(Abstract, Blueprintable)
class ABSOLVER_API UAvoidMatchCondition : public UObject {
    GENERATED_BODY()
public:
    UAvoidMatchCondition();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    EAvoidTrackingTypes BPE_GetAttackTrackingResponseFromAvoidType(EAvoidType _eAvoidType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool BPE_DoesAvoidMatch(EAvoidType _eAvoidType, EAttackTarget _eAttackTarget, EAttackMovementType _eAttackMovementType, EAttackOrigin _eAttackOrigin) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool BPE_DoesAvoidDismissesHit(EAvoidType _eAvoidType, EAttackMovementType _eAttackMvtType, EAttackTarget _eAttackTarget, ECardinalPoints _eCardPoint) const;
    
};

