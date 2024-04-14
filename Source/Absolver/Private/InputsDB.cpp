#include "InputsDB.h"

UInputsDB::UInputsDB() {
    this->m_contexts[0] = NULL;
    this->m_contexts[1] = NULL;
    this->m_contexts[2] = NULL;
    this->m_contexts[3] = NULL;
    this->m_contexts[4] = NULL;
    this->m_contexts[5] = NULL;
    this->m_contexts[6] = NULL;
    this->m_contexts[7] = NULL;
    this->m_contexts[8] = NULL;
    this->m_fStartStabilizationDuration = 0.10f;
    this->m_fStopStabilizationDuration = 0.10f;
    this->m_fThresholdInputDiffForStabilisation = 0.02f;
    this->m_fStickThresholdBetweenV1V2 = 0.90f;
}


