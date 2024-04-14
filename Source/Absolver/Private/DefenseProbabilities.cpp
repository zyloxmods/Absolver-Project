#include "DefenseProbabilities.h"

FDefenseProbabilities::FDefenseProbabilities() {
    this->m_uiDefenseProbabilities[0] = 0;
    this->m_uiDefenseProbabilities[1] = 0;
    this->m_uiDefenseProbabilities[2] = 0;
    this->m_uiDefenseFailProbabilities[0] = 0;
    this->m_uiDefenseFailProbabilities[1] = 0;
    this->m_uiDefenseFailProbabilities[2] = 0;
    this->m_FailCurvePerBuildUp[0] = NULL;
    this->m_FailCurvePerBuildUp[1] = NULL;
    this->m_FailCurvePerBuildUp[2] = NULL;
}

