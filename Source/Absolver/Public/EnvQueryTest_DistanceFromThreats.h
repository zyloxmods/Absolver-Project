#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "ESCTestDistance.h"
#include "Templates/SubclassOf.h"
#include "EnvQueryTest_DistanceFromThreats.generated.h"

class UEnvQueryContext;

UCLASS(Blueprintable)
class UEnvQueryTest_DistanceFromThreats : public UEnvQueryTest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESCTestDistance TestMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UEnvQueryContext> ThreatsToEvaluate;
    
    UEnvQueryTest_DistanceFromThreats();

};

