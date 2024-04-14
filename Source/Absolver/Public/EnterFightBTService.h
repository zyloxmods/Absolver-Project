#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "EnterFightBTService.generated.h"

UCLASS(Blueprintable)
class ABSOLVER_API UEnterFightBTService : public UBTService {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fFightEnteringDistance;
    
public:
    UEnterFightBTService();

};

