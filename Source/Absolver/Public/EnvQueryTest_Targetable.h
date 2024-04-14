#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "Templates/SubclassOf.h"
#include "EnvQueryTest_Targetable.generated.h"

class UEnvQueryContext;

UCLASS(Blueprintable)
class ABSOLVER_API UEnvQueryTest_Targetable : public UEnvQueryTest {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UEnvQueryContext> m_TargetTo;
    
public:
    UEnvQueryTest_Targetable();

};

