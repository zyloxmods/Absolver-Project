#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "QuadrantChangeBTService.generated.h"

UCLASS(Blueprintable)
class ABSOLVER_API UQuadrantChangeBTService : public UBTService {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bLaunchOnlyForcedChangeQuadrant;
    
    UQuadrantChangeBTService();

};

