#include "EnvQueryTest_Targetable.h"
#include "EnvironmentQuery/Contexts/EnvQueryContext_Querier.h"

UEnvQueryTest_Targetable::UEnvQueryTest_Targetable() {
    this->FilterType = EEnvTestFilterType::Match;
    this->ScoringEquation = EEnvTestScoreEquation::Constant;
    this->m_TargetTo = UEnvQueryContext_Querier::StaticClass();
}


