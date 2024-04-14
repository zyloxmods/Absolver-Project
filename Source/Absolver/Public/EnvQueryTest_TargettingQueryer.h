#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "Templates/SubclassOf.h"
#include "EnvQueryTest_TargettingQueryer.generated.h"

class UEnvQueryContext;

UCLASS(Blueprintable)
class ABSOLVER_API UEnvQueryTest_TargettingQueryer : public UEnvQueryTest {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UEnvQueryContext> m_TargetTo;
    
public:
    UEnvQueryTest_TargettingQueryer();

};

