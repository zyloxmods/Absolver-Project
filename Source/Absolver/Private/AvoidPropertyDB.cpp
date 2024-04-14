#include "AvoidPropertyDB.h"

UAvoidPropertyDB::UAvoidPropertyDB() {
    this->m_fAvoidedDuration = 0.00f;
    this->m_AvoidedAttackScaleCurves = NULL;
    this->m_bAvoidDismissesPerfectLink = false;
    this->m_eAvoidFeedbackTypes = EAvoidFeedbackTypes::Normal;
}


