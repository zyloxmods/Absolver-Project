#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ChangeQuadrantAnimStyleArray.h"
#include "ChangeQuadrantDB.generated.h"

class UAvailabilityLayerData;

UCLASS(Blueprintable)
class ABSOLVER_API UChangeQuadrantDB : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FChangeQuadrantAnimStyleArray m_ChangeQuadrantAnims;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fChangeQuadrantDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fChangeQuadrantReorientationDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAvailabilityLayerData* m_ChangeQuadrantLayerDataOnStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fTimeOfStartLayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bUseAnimationOnMovement;
    
    UChangeQuadrantDB();

};

