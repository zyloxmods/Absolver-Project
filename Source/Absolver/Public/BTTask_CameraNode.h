#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BTTask_CameraNode.generated.h"

class UCameraData;

UCLASS(Blueprintable)
class ABSOLVER_API UBTTask_CameraNode : public UBTTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCameraData* m_CameraData;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fAccu;
    
public:
    UBTTask_CameraNode();

};

