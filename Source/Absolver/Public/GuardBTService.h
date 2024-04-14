#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "GuardBTService.generated.h"

UCLASS(Blueprintable)
class ABSOLVER_API UGuardBTService : public UBTService {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bGuardAllowed;
    
public:
    UGuardBTService();

};

