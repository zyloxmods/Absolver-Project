#pragma once
#include "CoreMinimal.h"
#include "EAvoidFeedbackTypes.h"
#include "SpecialAbilityPropertyDB.h"
#include "AvoidPropertyDB.generated.h"

class UCurveFloat;

UCLASS(Blueprintable)
class ABSOLVER_API UAvoidPropertyDB : public USpecialAbilityPropertyDB {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fAvoidedDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* m_AvoidedAttackScaleCurves;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bAvoidDismissesPerfectLink;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAvoidFeedbackTypes m_eAvoidFeedbackTypes;
    
    UAvoidPropertyDB();

};

