#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SessionTimeManager.generated.h"

UCLASS(Blueprintable)
class ABSOLVER_API USessionTimeManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fDelayBetweenSync;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float m_fTimeSinceLastSync;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float m_fScaleTime;
    
public:
    USessionTimeManager();

};

