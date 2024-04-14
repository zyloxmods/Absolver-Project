#include "AIManager.h"

UAIManager::UAIManager() {
    this->m_fCloseRangeDist = 300.00f;
    this->m_fMidRangeDist = 500.00f;
    this->m_uiMidRangeMaxAI = 3;
    this->m_fTicketDuration = 2.00f;
    this->m_fNoTicketScoreFactor[0] = 1.00f;
    this->m_fNoTicketScoreFactor[1] = 1.00f;
    this->m_fNoTicketScoreFactor[2] = 1.00f;
    this->m_fTicketScoreFactor[0] = 1.00f;
    this->m_fTicketScoreFactor[1] = 1.00f;
    this->m_fTicketScoreFactor[2] = 1.00f;
    this->m_uiLateralMoveProba[0] = 40;
    this->m_uiLateralMoveProba[1] = 40;
    this->m_uiLateralMoveProba[2] = 40;
    this->m_fSpawningTimePerFrame = 0.00f;
    this->m_ExtraAIsPerSituationPerNumberOfPlayers.AddDefaulted(3);
    this->m_AiClassToSpawn[0] = NULL;
    this->m_AiClassToSpawn[1] = NULL;
}

void UAIManager::OnEndPlayAI(AActor* _actor, TEnumAsByte<EEndPlayReason::Type> _eEndPlayReason) {
}


