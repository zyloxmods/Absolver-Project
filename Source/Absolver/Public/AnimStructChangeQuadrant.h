#pragma once
#include "CoreMinimal.h"
#include "AnimStructBase.h"
#include "EQuadrantTypes.h"
#include "AnimStructChangeQuadrant.generated.h"

USTRUCT(BlueprintType)
struct ABSOLVER_API FAnimStructChangeQuadrant : public FAnimStructBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EQuadrantTypes m_eChangeQuadrantEndQuadrant1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EQuadrantTypes m_eChangeQuadrantEndQuadrant2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float m_fChangeQuadrantDuration1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float m_fChangeQuadrantDuration2;
    
    FAnimStructChangeQuadrant();
};

