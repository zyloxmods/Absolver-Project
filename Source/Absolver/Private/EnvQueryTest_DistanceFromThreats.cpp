#include "EnvQueryTest_DistanceFromThreats.h"
#include "EnvironmentQuery/Contexts/EnvQueryContext_Querier.h"

UEnvQueryTest_DistanceFromThreats::UEnvQueryTest_DistanceFromThreats() {
    this->TestMode = ESCTestDistance::Distance3D;
    this->ThreatsToEvaluate = UEnvQueryContext_Querier::StaticClass();
}


